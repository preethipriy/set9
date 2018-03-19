#include<stdio.h>

int main(void)
{
	int i,j,n,c;
	scanf("%d",&n);
	for(i=0;n[i]!='\0';i++)
	{
		for(j=i;n[j]!='\0';j++)
		{
			if(n[i]==n[j])
			{
				c++;
			}
		}
	}
	if(c>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
