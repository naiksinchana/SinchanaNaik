#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int isPalindrome(char str[])
{ 
	int left = 0;
	int right = strlen(str)-1;

	while(left<right)
	{
		if(tolower(str[left])!=tolower(str[right]))
		{
			return 0;
	}
	left++;
	right--;
}
return 1;

}
}
