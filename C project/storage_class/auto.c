#include <stdio.h>
void main()
{
	int mount ;
	auto int month;
	mount = 5;
	printf("mount : %p\n", &mount);

	mount = 10;
	printf("mount :  %p\n", &mount);

	printf("month :  %p\n", &month);

	printf("size of mount : %d\n", sizeof(mount) );
	printf("size of month : %d\n", sizeof(month) );
}
/*The auto storage class is the default storage for all local variables*/