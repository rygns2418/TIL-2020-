#include <stdio.h>


int main()
{

    /*
    int a[5] = {1,2,3,4,5};
    int *b = a;
    printf("%d\n",b[2]);
    */
//////////////////
/*
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d   ",a+i);
    }
*/
///////////////////


    int a[2][5] = {
                    {1,2,3,4,5},
                    {6,7,8,9,10}
                    };
    int (*p)[5] = a;

    printf("%d  ",*p[1]);
    return 0;


}