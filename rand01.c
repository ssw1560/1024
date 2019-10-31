#include<stdio.h>
#include<stdio.h>
int main()
{
	int i;
	
	srand(time(NULL));
	for(i=0; i<10; i++)
	    printf("%d|n", rand());
	
	for(i=0; i<6; i++)
	    printf("%d|n", rand()%45+1);
		    
	return 0;
}
