도전실전예제 164p








1
#include<stdio.h>
int main(void){
int used;
double result,tax;                 //사용량입력,kw당요금,9%세금
  printf("사용kw를 입력하세요");
  scanf("%d",&used);
  if(used<=100){result=370+used*52;}
  else if(used<=200){result=660+100*52.0+(used-100)*88.5;}
  else if(used<=300){result=1130+100*52.0+(used-200)*127.8;}
  else if(used<=400){result=2710+100*52.0+(used-300)*184.3;}
  else if(used<=500){result=9330+100*52.0+(used-400)*274.3;}
  else{ result=9330+100*52.0+(used-500)*494.0;}
  tax=result*0.09;
  result=+tax;
  printf("이번달전기요금은 %.0lf입니다.\n",result);

  return 0;}

2
#include<stdio.h>
int main(void){
int rich = 150;
int tution =100;
int benefit;
double grade=4.1;
if(grade>4.0){
  if(rich>=150)
  
  {benefit=tution*0.2;}

}else{benefit =tution*0.4;}
tution -=benefit;
printf("다음학기납입할등록금%d만원입니다\n",tution);




return 0;
}

3
#include<stdio.h>
int main(void)
{
int a,b;
char ch;
printf("사칙연산입력(정수):\n");
scanf("%d\n%c\n%d",&a,&ch,&b);
switch(ch)
{

  case'+':printf("%d+%d=%d\n",a,b,a+b);
  break;
  case'-':printf("%d-%d=%d\n",a,b,a-b);
  break;
  case'*':printf("%d*%d=%d\n",a,b,a*b);
  break;
  case'/':printf("%d/%d=%d\n",a,b,a/b);
  break;


}

return 0;}

계산이 안되서 너무 힘들었습니다.ㅠㅠㅠㅠ계산은 물어물어 처리했는데 머리가 도저히 힘듭니다.
코딩은 알아서 잘됬는데 로직짜는게 너무 머리아프네요 ㅠㅠ시간도 오래걸렸네요
