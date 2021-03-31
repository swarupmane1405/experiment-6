#include<stdio.h>
int main()
{
    int i, a[6];

    printf("enter any 6 num");
    for(i=0;i<=5;i++)
    {
        scanf("%d", &a[i]);

    }
  printf("\nTHE ARRAY IS \n");
   for(i=0;i<=5;i++)
    {
       printf("\t%d", a[i]);
    }
    getch();
   return 0;
}
