#include<stdio.h>
#include<string.h>

int main()
{
	char src[] = "Sinch";
	char dest[2];
	strcpy(dest,src);
	printf("Copied string:%s\n",dest);
	return 0;
}
