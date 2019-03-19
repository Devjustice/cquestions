
#include<stdio.h>






int main(void){



	int  i,j;



	printf("\n\n");



	printf("\n");













                  //위에 날개 두 개를 만들어주는 곳

	for (i=1;i<=5;i++){

		for (j=i;j>0;j--)    

	       printf(" ");

	    for (j = 5-i; j >= 0; j--)    

	       printf("*");

	    for (j = 5 - i; j >= 0; j--)

	      printf(" ");

	     for (j=i;j>0;j--)    

	       printf("*");


		printf("\n");

	  }

         

        //아래 날개 두 개를 만들어 주는 곳

	for (i=1;i<=5;i++){

		for (j = 5-i; j >= 0; j--)    

			printf("*");

		for (j=i;j>0;j--)    

	        printf(" ");

		for (j=i;j>0;j--)    

	        printf("*");

		for (j = 5-i; j >= 0; j--)    

	        printf(" ");

		printf("\n");

	}



return 0;}



