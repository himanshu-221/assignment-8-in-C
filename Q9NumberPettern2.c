/*  printing  this pettern
 1234321
  12321
   121
    1
    */

#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<8;j++)
        {
            if(j<5 && j>i)
            {
                printf("%d",n++);
            }
            
            else if(j>=5 && j<=7-i)
            {
                if(j==5)
                {
                    n--;
                }
                printf("%d",--n);
            }
            else{
                printf(" ");
            }
        }
        n=1;
        printf("\n");
    }
    return 0;
}