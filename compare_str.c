#include<stdio.h>
#include<string.h>

int main()
{
   char a[] = "Apple";
   char b[] = "Apple";
   if(strcmp(a,b)==0)
	   printf("Strings are equal\n");
   else
	   printf("Strings are different\n");

   return 0;
}
