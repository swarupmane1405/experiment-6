#include<stdio.h>



int main()
{
    int i, a[6];

    printf("enter any 6 num");
    for(i=0;i<=5;i++)
    {
        scanf("%d", &a[i]);

    }
    array(a);
 
    getch();
   return 0;
}
int array(int a[6])
{
	int i;
	 printf("\nTHE ARRAY IS \n");
   for(i=0;i<=5;i++)
    {
       printf("%d ", a[i]);
    }
    
}
