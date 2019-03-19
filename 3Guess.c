#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
srand(time(NULL));
int num=0,cnt=0,ipt=0;
int ran=0;
int ipset=0,range=0;
printf("몇을가지고 놀건가요?");
scanf("%d",&ipset);


ran=rand()%ipset+1;

while(1)
{printf("추측답: ");
 scanf("%d", &ipt);
if (ipt == ran)
{break;}
if (ipt<ran)
{printf("더 큽니다.\n");}else{
printf("더 작습니다.\n");}
cnt++;}
 printf("시도횟수%d\n",cnt);
return 0;}
