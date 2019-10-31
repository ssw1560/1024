#include<stdio.h>
int main()
{
	int i,j, tot_rep, rep;
	char ch;
	
	printf("반복할 횟수 입력 : ");
	scanf("%d", &tot_rep);
	rewind(stdin);
	
	i = 0;
	while(i < tot_rep)
	{
		printf("문자와 횟수 입력 : ");
		scanf("%c %d", &ch, &rep);
		j = 0;
		while(j < rep)
		{
		
		printf("%c", ch);
		j++;
        
		}
	printf("|n");
	i++;
   }
   
}
