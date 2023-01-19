/*   draw pettern
 
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j>=3-i && j<4)
            printf("*");
            else if(j>3 && j<=3+i)
            printf("*");
            else
            printf(" ");
        }
       
        printf("\n");
    }
    return 0;
}