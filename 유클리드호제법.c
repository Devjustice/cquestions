#include <stdio.h>
/*
    유클리드 호제법
 x를 y로 나눈 나머지 값을 r이라고했을때 x와 y의 최대공약수는 y와 r의 최대 공약수와 같다.
 x%y=r
 
 85%51=34
 나머지가 0이 될때까지 y자리51을 x자리로 변경하고r을 y자리로변경

 51%34=17
 31%17=0
 */
int main(){
int x,y,r=0;//r은 나머지
scanf("%d %d",&x,&y);
while(1){
r=x%y;//나머지가 0이될때까지 연산

if(r==0){break;}//나머지가없을때 종료
else{x=y;//y를 x위치로 변경
y=r;//나머지를 y로 변환하고 다시연산
}}
printf("최대공약수는 %d이다",y);


