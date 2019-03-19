#include <stdio.h>

int main(void)

{

double inv=10000000;
double intr=0.07;
double result=inv;
int i;

for(i=0;;i++)
{
result+=result*intr;
if(result>=inv*2){printf("%d년:%.0lf",i,result);break;}


}




return 0;



}



