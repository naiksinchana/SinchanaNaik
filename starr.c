#include<stdio.h>

int main()
{
	int i,j,space;
for (int i = 1; i <= 5; i++) {
    for (int space = 1; space <= 5 - i; space++) {
        printf("  ");
    }
    for (int j = 1; j <= i; j++) {
        printf(" *");
    }
    printf("\n");
}
}

