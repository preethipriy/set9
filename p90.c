#include <stdio.h>

int main(void) {
	int i;
	char n[50];
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++)
	{
		if((n[i]>='0')&&(n[i]<='9'))
		{
		printf("%c",n[i]);
		}
	}
	return 0;
}
