#include <stdio.h>

 
int main()
{
    //구구단 가로 버전
    printf("-1단-\t");
     printf("-2단-\t");
     printf("-3단-\t");
     printf("-4단-\t");
     printf("-5단-\t\n");


    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%dx%d=%d\t", i, j, (i*j));
        }
        printf("\n"); }
        printf("\n");printf("\n");
     printf("-6단-\t");
     printf("-7단-\t");
     printf("-8단-\t");
     printf("-9단-\t");
     printf("\t\n");



        for (int k = 1;  k<= 9; k++)
        {
             for (int l = 6; l <= 9; l++)
        {
            printf("%dx%d=%d\t", k, l, (k*l));
        }
        printf("\n");


        }



 
    return 0;
}
