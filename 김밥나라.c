철수는 김밥나라에 가고싶습니다.
친구랑 갈때는 엔분의 일이 계산가능합니다.
3가지 메뉴를 선택했을때 10프로 할인이 가능합니다.
프로그램말미에 모두 계산이 가능해야합니다.
김밤나라 매뉴를 선택하는 프로그램을 만드시오

#include<stdio.h>
#include<stdlib.h>
int main(void){
  int ipt,cnt,price=0,a;

  puts("<함께해요 행복해요 김밥나라>");
  puts("<배고프면 1 아니면 0입력>");
  scanf("%d",&ipt);
  if(ipt == 1){
  puts("<돈이있으면 1 아니면 0입력>");
  scanf("%d",&ipt);
  if(ipt == 1){
  puts("<혼자갈거면 1 친구랑갈 1입력>");
  scanf("%d",&ipt);
  if(ipt == 1){while(1){
  puts("<여러가지요리를 고르세요1면2 찌게 3돈가스 4김밥 5덮밥 6음료수7종료>");
                scanf("%d",&ipt);        
             
                            switch(ipt)
{
  case 1:puts("면"); {
  puts("1잔치국수2그냥라면3오뎅라면4치즈라면5비빔국수6해장라면7해물라면8우동");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("잔치국수"); price+=2000;cnt+=1; break;
  case 2: puts("오뎅라면");price+=3000; cnt+=1;break;
  case 3: puts("치즈라면");price+=3000;cnt+=1;break;
  case 4: puts("비빔국수");price+=3500;cnt+=1;break;
  case 5: puts("해장라면"); price+=4000;cnt+=1;break;
  case 7: puts("해물라면"); price+=4500;cnt+=1;break;
  case 8: puts("우동"); price+=3000;cnt+=1;break;
  default: puts("error"); break;
} break;}///////////////////////////////////////////////////////////////면
  case 2: puts("찌게");{
puts("1김치찌게2된장찌게3순두부찌게4부대찌게5고추장찌게");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("김치찌게");price+=4500;cnt+=1; break;
  case 2: puts("된장찌게");price+=4000; cnt+=1;break;
  case 3: puts("순두부찌게"); price+=4500;cnt+=1;break;
  case 4: puts("부대찌게"); price+=5500;cnt+=1;break;
  case 5: puts("고추장찌게"); price+=5000;cnt+=1;break;
  default: puts("error"); break;
} break;}/////////////////////////////////////////////////////////////////////////찌게
  case 3: puts("돈가스"); {
  puts("1왕돈가스2수제돈가스3치즈돈가스4뒤진다돈가스5생선가스6치킨가스7고치돈8모둠돈가스");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("왕돈가스");price+=5000; cnt+=1;break;
  case 2: puts("수제돈가스");price+=7000; cnt+=1;break;
  case 3: puts("치즈돈가스"); price+=6000;cnt+=1;break;
  case 4: puts("뒤진돈가스"); price+=12000;cnt+=1;break;
  case 5: puts("생선가스"); price+=6000;cnt+=1;break;
  case 6: puts("치킨가스"); price+=6000;cnt+=1;break;
  case 7: puts("고치돈"); price+=6500;cnt+=1;break;
  case 8: puts("모둠돈가스"); price+=7500;cnt+=1;break;
  default: puts("error"); break;
} break;}//////////////////////////////////////////////////////////////////////돈가스
  
  case 4: puts("김밥"); {
  puts("1: 함께김밥2: 행복김밥3: 야채김밥4: 돈가스김밥5: 참치김밥6:누드김밥7:계란말이김밥 8:샐러드김밥 9:왕김밥10: 김치김밥11: 땡초김밥12: 진미김밥13: 불고기김밥14: 멸치김밥15: 멸추김밥16: 치즈김밥");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("함께김밥");price+=1500;cnt+=1; break;
  case 2: puts("행복김밥");price+=1500; cnt+=1;break;
  case 3: puts("야채김밥"); price+=2000;cnt+=1;break;
  case 4: puts("돈가스김밥"); price+=3500;cnt+=1;break;
  case 5: puts("참치김밥"); price+=3500;cnt+=1;break;
  case 6: puts("누드김밥"); price+=3500;cnt+=1;break;
  case 7: puts("계란말이김밥");price+=3500;cnt+=1;break;
  case 8: puts("샐러드김밥"); price+=3000;cnt+=1;break;
  case 9: puts("왕김밥"); price+=5500;cnt+=1;break;
  case 10: puts("김치김밥"); price+=2500;cnt+=1;break;
  case 11: puts("김치김밥"); price+=3000;cnt+=1;break;
  case 12: puts("땡초김밥"); price+=3000;cnt+=1;break;
  case 13: puts("불고기김밥");price+=4000; cnt+=1;break;
  case 14: puts("멸치김밥"); price+=3500;cnt+=1;break;
  case 15: puts("멸추김밥"); price+=3500;cnt+=1;break;
  case 16: puts("치즈김밥"); price+=3000;cnt+=1;break;
  default: puts("error"); break;
} break;}//////////////////////////////////////////////////////////////////////김밥
  case 5: puts("덮밥");{
  puts("1: 제육덮밥2: 오징어덮밥3: 불고기덮밥4: 돈가스덮밥5: 카레덮밥6: 오무라이스");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("1: 제육덮밥");price+=5000;cnt+=1; break;
  case 2: puts("2: 오징어덮밥");price+=5000; cnt+=1;break;
  case 3: puts("3: 불고기덮밥"); price+=6500;cnt+=1;break;
  case 4: puts("4: 돈가스덮밥"); price+=6500;cnt+=1;break;
  case 5: puts("5: 카레덮밥"); price+=4500;cnt+=1;break;
  default: puts("error"); break;
} break;}//////////////////////////////////////////////////////////////////////덢
  
  
  
  case 6: puts("음료수");{
  puts("1: 콜라2: 사이다3: 환타4: 옥수수수염차5: 헛개차6: 메실차");
               scanf("%d",&ipt);
               switch(ipt)
{
  case 1:puts("1: 콜라");price+=1000;cnt+=1; break;
  case 2: puts("2: 사이다");price+=1000;cnt+=1; break;
  case 3: puts("3: 환타"); price+=1000;cnt+=1;break;
  case 4: puts("4: 옥수수수염차"); price+=1500;cnt+=1;break;
  case 5: puts("5: 헛개차"); price+=1500;cnt+=1;break;
  case 6: puts("6: 메실차"); price+=1500;cnt+=1;break;
  default: puts("error"); break;

} //////////////////////////////////////////////////////////////////////콜라뭐시
break;}//////////////////////////////////////////////////////////////////////음료
case 7: goto EXIT;break;
  default: puts("error");break;
}//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////음식을고르새

}/////////////////와일트루

EXIT:

 puts("1현금2카드3튐");
 scanf("%d",&ipt);
 switch(ipt)
{  case 1:puts("현금"); 
 printf("계산할?\n");
 printf("결제금액%d\n",price);
 if(cnt==3)printf("할인행사%.1lf원입니다\n",(double)price/3);break;
  case 2: puts("카드"); break;
  case 3: puts("튐"); break;
  default: puts("error"); break;
}////////////////////////////////헌금카드튐                  
                      }/////////////////////////////////////<혼자갈거면 1 친구랑갈 1입력>
                   exit(0);
                   
                          exit(0);      }///////////////////////////////////////////////<돈이있으면 1 아니면 0입력>

exit(0);}///////////////////////배고프면 1,0


return 0;}




교수님 덕분에 신나게 코딩합니다!! 부족한부분이 많이 발견되어서 앞으로 보완이 더 필요할거 같습니다.
올해 즐겁게 공부를 할 수있을거 같습니다.!!! 
