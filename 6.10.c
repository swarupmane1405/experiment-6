#include<stdio.h>
int array(int a[6], int n)
{
	int i, sum=0;
 for(i=0;i<=n-1;i++)
    {
       sum=sum+a[i];
    }
    printf("the sum of given %d number is %d",n,sum);
  
    
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
  
  
  
  

