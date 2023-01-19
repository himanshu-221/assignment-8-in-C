/*  printing  this pettern
1234321
123 321
12   21
1     1

*/

#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j>=0 && j<4-i)
            {
                printf("%d",n++);
            }
            else if(j>=3+i && j<7)
            {
                if(j==4 && i==0)
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