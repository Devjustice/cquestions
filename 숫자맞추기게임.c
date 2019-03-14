#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
srand(time(NULL));
int num,cnt,ipt;
int ran=rand()&100;
//printf("%d",ran);
 while (1)
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
