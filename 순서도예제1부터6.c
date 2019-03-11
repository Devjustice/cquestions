#include<stdio.h>
int main(void){

  int a=3,b=5,add=a+b,mul=a*b;
  printf("add=%dmul=%d\n",add,mul);

  return 0;
}


#include<stdio.h>
int main(void){

  int a,b;
  scanf("%d%d",&a,&b);
  printf("a+b=%d",a+b);
    return 0;}
#include<stdio.h>
int main(void){

  int a,b;
  scanf("%d%d",&a,&b);
  printf("a/b=%da퍼센트b=%d",a/b,a%b);
  return 0;}
#include<stdio.h>
int main(void){
  int a,b;
  puts("가로길이와 세로길이입력");
  scanf("%d%d",&a,&b);
  printf("넓이는%d입니다",a*b);
  return 0;}
#include<stdio.h>
int main(void){
  int a,b,c,sum;
  puts("국어영어수학점수입력");
  scanf("%d%d%d",&a,&b,&c);
  sum=a+b+c;
  printf("평균은 %d입니다",sum/3);
  return 0;}
#include<stdio.h>
int main(void){
  int cm,m;
  puts("센치 입력하세요");
  scanf("%d",&cm);
  m=cm/100;
  cm=cm%100;
  printf("미터->%d",m);
  printf("센티->%d",cm);
  return 0;}
