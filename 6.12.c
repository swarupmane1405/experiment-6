#include<stdio.h>
int array(int a[50], int n)
{
	int i,  big=a[0];
   for(i=0;i<=n-1;i++)
    {
       if(big<a[i])
	   {
	   big=a[i];
	   }
    }
      printf("the largest elements in given %d number is %d",n,big);
  
    
}
int main() 
{
    int i, n, a[50];

	printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
    array(a,n);
      getch();
   return 0;
   
}
