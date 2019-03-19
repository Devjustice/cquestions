#include<stdio.h>
int main(){

int ipt;
int i,j;
int num=-1;

scanf("%d",&ipt);

for(i=0;i<ipt;i++)
{

for(j=0;j<ipt;j++)
{if(num>=9){num=1;}
printf("%d",num+=2);
}
printf("\n");
}








return 0;
}