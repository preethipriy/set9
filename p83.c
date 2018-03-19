#include<stdio.h>

int main()
{
	int n,m,i,j;
	char w;
	scanf("%d %c%d",&n,&w,&m);
	if(w=='/')
	{
		i=n/m;
		printf("%d",i);
	}
	else
	{
		j=n%m;
                        printf("%d",j);
	}
	return 0;
}
