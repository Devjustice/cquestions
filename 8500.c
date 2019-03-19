#include<stdio.h>
int main()
{

int num[]={500,999,4500};
int ipt1=0,ipt2=0;

while(1){
printf("500맞추기\n");
printf("999맞추기\n");
printf("4500맞추기\n");
scanf("%d",&ipt1);
printf("입력\n");


scanf("%d",&ipt2);
if(ipt2==num[ipt1-1]){
printf("end\n");
return 0;

}else{
printf("%d\n",num[ipt1-1]-ipt2);
}



}




return 0;
}
