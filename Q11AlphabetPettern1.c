/* printing this pettern
    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j>=4-i && j<5)
            {
                printf("%c",c++);
            }
            else if(j>4 && j<=4+i)
            {
                if(j==5)
                {
                    --c;
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