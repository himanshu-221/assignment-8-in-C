/*  printing this pettern
   1
  121
 12321
1234321
*/
#include<stdio.h>
int main()
{
    int i,j,k,n=1,x=5;
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j>=0 && j<=2-i)
            {
                printf(" ");
            }
            else if(j<=3)
            {
                printf("%d",n++);
            }
            else if(j>3 && j<=3+i)
            {
                if(j==4)            
                {
                    n--;
                }
                printf("%d",--n);
            }
        }
        n=1;
        printf("\n");
    }
    return 0;



    // for(i=0;i<x;i++)
    // {
    //     for(k=1;k<x-i;k++)
    //     {
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("%d",n);
    //         n++;
    //     }
    //     n=1;                                               // PENDING
    //     for(k=0;k<i-1;k++)
    //     {
    //         printf("%d",n);
    //         n++;
    //     }
    //     n=1;
    //     printf("\n");
    // }


    return 0;
}