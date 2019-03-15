#include <stdio.h>
int main(void){
int i, j,ipt;
scanf("%d",&ipt);
for (i = 2; i <= ipt; i++){
for (j = 2; j <= i; j++){
if (i % j == 0)break;}
		if (i == j)
		printf("%d ", i);
}

	

	return 0;}d
