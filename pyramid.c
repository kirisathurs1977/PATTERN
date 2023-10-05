#include <stdio.h>

int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {

       /*for(s=0;s<n-i-1;s++) method 1
            printf("  ");

        for(j=0;j<i*2+1;j++)  method 1
        
           printf("* ");*/
         for(j=0;j<n+i;j++) // method 2
         {
            if(j<n-i-1)
            {
               printf("  ");  
            }
            else
            {
                printf("* ");
            }
         }
        
        printf(" \n");

    }
    

    return 0;
}
