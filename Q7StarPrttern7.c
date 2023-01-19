/* printing pettern 
**********
****  ****
***    ***
**      **
*        *
                */
#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=0;i<6;i++)
    {
        for(j=0;j<11;j++)
        {
            if(j>=0 && j<=5-i)
            printf("*");
            else if(j>=5+i && j<11)
            printf("*");
            else
            printf(" ");
        }
       
        printf("\n");
    }
    return 0;
}