#include<stdio.h>

int main(void){
	int year;
	int month, day;
	int lastmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int ipt;
	char *months[]=
	{" ","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
		while(1){
		printf("\n\n");
		printf("년과 달을입력하세요: ");
		scanf("%d %d", &year, &month);
		printf("종료하려면 0 계속은 1을입력해주세요");
		scanf("%d",&ipt);
		if(ipt==0)break;
	if(((year%4==0) && (year%100!=0)) || (year%400==0))
	{lastmonth[2] = 29;}else{ lastmonth[2] = 28;}
		    int weekday ;
	        int day1 = 1;
		    int i;
		    weekday  = (day1+=month<3?year--:year-2,23*month/9+day1+4+year/4-year/100+year/400)%7;
		           
			 printf("		%s", months[month]);
			 printf("\n  일   월   화   수   목   금   토\n" );

	if(weekday < 7)
	for(i=0; i<weekday; i++)
    printf("     " );
    for ( day = 1; day <= 1; day++ )
    {printf(" ");}
    for ( day = 1; day <= lastmonth[month]; day++ )
	{printf("%2d", day );
	if ( ( day + weekday) % 7 > 0 ){
	printf("   " );}else{printf("\n " );}}}
					    return 0;}
