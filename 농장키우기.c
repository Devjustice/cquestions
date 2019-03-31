#include<pthread.h>
#include<time.h>
#pragma warning(disable:4996)
///////////함수선언부////////////////////
int minus(int x,int y);
int plus(int x, int y);
int mul(int x,int y);
///만원 단위 
//////////////////변수 선언부/////////////////
int baseMoney=10000000;//초기자본금 1000억원
int lestMoney=10000000;//남은돈을 받을변수
int eventRnd=0;//이벤트렌덤이 들어가는변수
int whiletxt=0;//렌덤이들어가는 변수(소여물주는중)
int farmTerm=0;//농사의 기간
int proceed=0;//수익금
int product=0;//제품의 갯수
int price=3;
int rndworker;
int nameRnd;

int tmp=0;
int ttmp=0;
int cndrnd;
int swuseript=0;
long long prprofit=0;
const double monthlyPay=500;//농부의 월급
int perfection=0;//농사의 완성도
int worker=3;//인부의 숫자
char farmName[100][100]={"","코리아우유","지티우유","제펜밀크"};//농장의 이름 입력받는 배열
char cropsName[10];//작물의 이름 입력받는 배열
char advName[100];//광고의 이름을 입력받는 배열
char farmStatus[100][100]={"","열심히 밭을가는중","열심히 물을주는중","오늘도 소여물주는중"};//농장상태배열
char farmEvent[100][100]={
"","흉년","도둑","망조","김장",
"멧되지출현","매마름","강풍피해","홍수피해",
"우박피해","원전피폭"

}; //농장이밴트 저장 배열


int main(){
srand((unsigned)time(NULL));
rndworker=rand()%50;
if (rndworker<=10){rndworker=10;}
worker=rndworker;
usersetting();

while(1)//농사시작반복문 시작
{FarmEvent();
FarmTermEvnet();

baseMoney=lestMoney;
printf("%s농장을 잘 경영해보세요\n",farmName[nameRnd]);
printf("당신의 통장 잔고는 %d만큼 남았네요?\n",baseMoney);
if(baseMoney<=2000000){printf("200억 이하 엔딩입니다.");break;}
policeManager();
PerFection();
EndMenu();


if(baseMoney>=100000000){

printf("축하합니다 경영의 달인이시네요?\n");

break;}



}//농사시작 반복문 종료


return 0;}


void policeManager(){


if(baseMoney<=4000000 )
{printf("!!법정관리기간입니다!!\n");

//if(baseMoney<baseMoney-(baseMoney*0.7)){
//printf("더이상 돈을 사용 할 수 없습니다.");

//if(baseMoney<=500*farmTerm)
//{

//돈을 사용할 곳이 없는 관계로 아래와 같이 구현...다른의견 받을게요 


if(worker*farmTerm<=baseMoney*0.7);worker=rand()%worker+1;printf("조정된 일꾼수=%d\n",worker);





//}


//}

}else if(baseMoney<=7000000){printf("법정관리를 주의하세요\n");}

}




void FarmTermEvnet(){



printf("당신의 농부숫자는%d명입니다.\n",worker);
for(int i=0;i<farmTerm;i++)//농사월수진행반복문
{
tmp=mul(worker,500);

lestMoney=minus(lestMoney,tmp);

printf("%d달째 농부에게 %d의 월급을 지급합니다.\n",i+1,tmp);
//sleep(1);
if(i==2)
{cndrnd=rand()%4;printf("파산은 0과 1=%d",cndrnd);
if(cndrnd==0||cndrnd==1)
{printf("트렉터로 밀어라 농사실패 다 갈아엎자\n");break;}
tmp=mul(worker,500);

lestMoney=minus(lestMoney,tmp);
printf("%d달째 농부에게 %d의 월급을 지급합니다.\n",i+1,tmp);

}


}//농사월수진행반복문종료

//printf("총 지불후 %d가 남았습니다.\n",lestMoney);
}
void PerFection(){


/////////////////////////////완성도 설정문//////////////////////////
perfection=rand()%100;
if(perfection<=10){perfection=perfection+10;}
printf("농사의 추수결과는 %d정도네요\n",perfection);
if(perfection>0&&perfection<10){product=rand()%100;}
if(perfection>10&&perfection<20){product=rand()%500;}
if(perfection>20&&perfection<30){product=rand()%1000;}
if(perfection>30&&perfection<40){product=rand()%3000;}
if(perfection>40&&perfection<50){product=rand()%10000;}
if(perfection>50&&perfection<60){product=rand()%50000;}
if(perfection>60&&perfection<70){product=rand()%100000;}
if(perfection>70&&perfection<80){product=rand()%300000;}
if(perfection>80&&perfection<90){product=rand()%500000;}
if(perfection>90&&perfection<100){product=rand()%1000000;}

printf("팔수 있는 단수는 %d 이네요\n",product);




/////////////////////////////완성도 설정문종료//////////////////////////


}
////////////////////보이드 함수 구현부/////////////////////////////////

void EndMenu(){
///////////////////////인부설정,시장내놓기,홍보하기 스위치 선택///////////////////////////////

printf("\n시장에 판매하려면 1\n홍보하려면 2\n인부를 설정하려면 3\n");
scanf("%d",&swuseript);
switch(swuseript){
case 1: {printf("물건을 판매합니다 판매가는 %d입니다..\n",product*price);
proceed=mul(product,price);



baseMoney=plus(baseMoney,proceed); 

printf("당신의 지갑엔%d원이 있습니다.\n",baseMoney);
break;}
case 2: {printf("홍보를 합니다.\n 홍보비용은 백만원 입니다\n ");

printf("홍보멘트를 입력해주세요 \n");
scanf("%s",&advName);
for(int i=0;i<10;i++){
printf("%s판매합니다.\n",cropsName);
sleep(1);
printf("%s\n",advName);
}

baseMoney=minus(baseMoney,100);
prprofit=rand()%11;
//printf("%d나옴",prprofit);
if(prprofit==0){prprofit=1;}
if(prprofit==1){price=5;printf("홍보가 잘되어서 5만원에 팔수있습니다.\n");}
if(prprofit==3){price=12;printf("홍보가 잘되어서 12만원에 팔수있습니다.\n");}
if(prprofit==5){price=15;printf("홍보가 잘되어서 15만원에 팔수있습니다.\n");}
if(prprofit==7){price=10;printf("홍보가 잘되어서 100만원에 팔수있습니다.\n");}


break;}
case 3:printf("고용할 농부의 숫자를 입력하세요 내일 50 미국 100 쏘울 200\n");
printf("말안듣는 돌쇠를 해고하시려면 -직원수를 입력하세요 최소 -10명까지\n");

scanf("%d",&swuseript);


worker=plus(swuseript,worker);
//printf("계산값=%d",worker);
farmTerm=minus(farmTerm,worker);

if(worker<10){printf("10명이하 사용할수 없습니다.\n");
worker=10;

}

if(nameRnd==1 && worker>50)
{printf("50명이상 사용할수 없습니다.\n");
worker=50;}

if(nameRnd==2&& worker>100)
{printf("100명이상 사용할수 없습니다.\n");
worker=100;}

if(nameRnd==3 && worker>200)
{printf("200명이상 사용할수 없습니다.\n");
worker=200;}



printf("당신은 %d명의 인부가 있습니다.\n",worker);


break;
default : break;}



printf("당신의 지갑엔%d원이 있습니다.\n",baseMoney);


///////////////////////인부설정,시장내놓기,홍보하기 스위치 선택종료///////////////////////////////


}










void FarmEvent(){

eventRnd=rand()%11;
farmTerm=rand()%37;if(farmTerm<=6){farmTerm=6;}

printline();
printf("농사기간은 3개월에서 12개월으로 산정 됩니다\n \t\t\t농사기간%d 개월\n",farmTerm);
printline();
for(int i=0;i<10;i++){
//sleep(1);
int whiletxt=rand()%3;if(whiletxt==0){whiletxt=whiletxt+1;}
printf("%s\n",farmStatus[whiletxt]);
}

FarmEventCondition();


}
void FarmEventCondition(){

if(eventRnd==0){eventRnd=eventRnd+1;}
if(eventRnd==1){farmTerm=farmTerm+7;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==2){farmTerm=farmTerm+6;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==3){farmTerm=farmTerm+12;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==4){farmTerm=farmTerm+11;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==5){farmTerm=farmTerm+6;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==6){farmTerm=farmTerm+7;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==7){farmTerm=farmTerm+8;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==8){farmTerm=farmTerm+9;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==9){farmTerm=farmTerm+10;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
if(eventRnd==10){farmTerm=farmTerm+6;printf("%s로인해 %d개월로 농사일이 늘었네요\n",farmEvent[eventRnd],farmTerm);}
farmTerm=minus(farmTerm,worker);
}





void usersetting()
{

printline();
printline();
printline();
printline();
printf("🌲🌲🌲🌲🌲🌲🌲🌲농장게임에 오신 것을 환영합니다.🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲\n");
printline();
printline();
printline();
printline();
nameRnd=rand()%4;
//printf("%d가나왔다.",nameRnd);
if(nameRnd==0){nameRnd=nameRnd+1;}
printf("%s농장을 잘 경영해보세요\n",farmName[nameRnd]);





printf("🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲작물의 이름을 입력해주세요🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲\n");
printline();
scanf("%s",cropsName);

return cropsName;
}
////////////////////보이드 함수 구현부 종/////////////////////////////////



















////////////////////////기능함수 구현부분//////////////////////////////////////



int mul(int x,int y){
int tmp;
tmp=x*y;
return tmp;

}



int minus(int x,int y){
int tmp;
tmp=x-y;

return tmp;

}
int plus(int x,int y){
int tmp;
tmp=x+y;
return tmp;
}
void printline(){

int i;
for(int i=0;i<50;i++)
{
printf("🌲");

}
printf("\n");

}
////////////////////////기능함수 구현부분//////////////////////////////////////

