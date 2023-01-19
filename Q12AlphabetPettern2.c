/* printing this pettern
ABCDCBA
 ABCBA
  ABA
   A
   
   */

#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<5;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>i && j<=4)
            {
                printf("%c",c++);
            }
            else if(j>3 && j<8-i)
            {
                if(j==5)
                {
                    c--;
                }
                printf("%c",--c);
            }
            else{
                printf(" ");
            }
        }
        c='A';
        printf("\n");
    }
    return 0;
}