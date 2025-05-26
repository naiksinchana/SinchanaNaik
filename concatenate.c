#include<stdio.h>
#include<string.h>

int main()
{
   char greeting[50] = "Hello";
   char name[] = "World!";
   strcat(greeting,name);
           printf("%s\n",greeting);
   
         

   return 0;
}

