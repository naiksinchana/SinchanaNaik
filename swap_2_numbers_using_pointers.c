#include<stdio.h>

int sum(int a,int b)
{
  int c = a + b;
  return c;
}

void SwapPointer(int*a,int*b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x,y;
  printf("Enter the values for x and y\n");
  scanf("%d%d",&x, &y);

  SwapPointer(&x, &y);
  printf("x = %d and y = %d\n", x, y);

  return 0;
}
  
