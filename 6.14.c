#include<stdio.h>
int main()
{
  int a[20], b[20], c[50], k=0, i, n, n1;
  
  printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
    printf("enter the value of elements");
	scanf("%d", &n1);
    printf("enter any %d num",n1);
    for(i=0;i<=n1-1;i++)
    {
        scanf("%d", &b[i]);

    }
     for(i=0;i<=n-1;i++)
    {
       c[k]=a[i];
       k++;
    }
    for(i=0;i<=n1-1;i++)
    {
       c[k]=b[i];
       k++;
    }
  for(i=0;i<=k-1;i++)
    {
       printf("%d ", c[i]);
    }
    getch();
   return 0;

  
}
