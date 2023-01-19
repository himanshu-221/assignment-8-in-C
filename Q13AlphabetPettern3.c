/*Printing this pettern
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A

*/

#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<7;i++)
    {
        for(j=0;j<13;j++)
        {
            if(j>=0 && j<=6-i)
            {
                printf("%c",c++);
            }
            else if(j>=6+i && j<13)
            {
                if(i==0 && j==7)
                {
                    c--;                    
                }
                printf("%c",--c);
            }
            else {
                printf(" ");
            }
        }
        c='A';
        printf("\n");
    }
    return 0;
}