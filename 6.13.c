#include<stdio.h>
int main()
{
    int i, n, num, c=0, a[50];

	printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
    printf("enter the elements wants to search");
	scanf("%d", &num);
  num==a[0];
   for(i=0;i<=n-1;i++)
    {
       if(num==a[i])
	   {
	   c++;
	   }
    }

if(c==0)
{
	printf("NOT PRESENT");
}
else
{
	printf("%d presents %d times",num,c);
}
    getch();
   return 0;
}
