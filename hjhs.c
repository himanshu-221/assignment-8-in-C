



#include<stdio.h>
int mani()
{
    int i,j;
    char c='A';
    for(i=0;i<7;i++)
    {
        for(j=0;j<13;j++)
        {
            if(j>=0 && j<6-i)
            {
                printf("%c",c++);
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