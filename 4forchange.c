#include <stdio.h>
 int main() {

   int i,j,ipt;

   scanf("%d",&ipt);

   for(i=1;i<=ipt;i++) {
   for(j=ipt;j>=1;j--) 
   if(i<j) { printf("%d",i); }
   else { printf("%d",j); } 
   printf("\n"); }



   return 0; }
