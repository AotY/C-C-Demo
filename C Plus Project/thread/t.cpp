#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *printHello(void *threadId)
{
	long tid = (long)threadId;
	cout<<"Hello World ! "<< "  id :" <<tid <<endl;
	pthread_exit(NULL);
}
int main(int argc, char const *argv[])
{
	/* code */
	pthread_t threads[NUM_THREADS];
	int rc ;
	int i ;
	for( i = 0 ; i < NUM_THREADS ; i++)
	{
		cout<<"main() : create thread : " << i <<endl;
		rc = pthread_create(&threads[i] , NULL , printHello , (void *)i);
		cout <<"rc === "<<rc<<endl;

		if(rc )
		{
			cout<<"Error : unble to create thread ." <<rc<<endl;
			exit(-1);
		}

		pthread_exit(NULL);

	}

	return 0;
}