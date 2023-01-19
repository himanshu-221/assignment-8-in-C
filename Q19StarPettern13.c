/*  printing this pettern
  ****     ****  
 ******   ******
******** ********
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *
                */

#include<stdio.h>
int main ()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<17;j++)
        {
            if(j>=2-i && j<=5+i)                /*       ****
                                                        ******
                                                       ********      */
            {
                printf("*");
            }
            else if(j>=11-i && j<=14+i)         /*    ****
                                                     ******
                                                    ********    */
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<17;j++)
        {
            if(j<=8 &&j>=i)                 
            {
                printf("*");
            }
            else if(j>8 && j<=16-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}