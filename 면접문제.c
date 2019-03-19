#include<stdio.h>

#include <string.h> 
#include<stdlib.h>
#define ARRAYLENGTH 18
/*김씨와 이씨는 각각 몇 명 인가요?
"이재영"이란 이름이 몇 번 반복되나요?
중복을 제거한 이름을 출력하세요.
중복을 제거한 이름을 오름차순으로 정렬하여 출력하세요.
*/


int main(void)

{

int i,cntb=0, cnta=0, cntjackson=0, cntleejae,cnt=0;
const char names[20][30]={"","jane","jim","jackson","david","jack","kenny","jim","hiyed","john","nick","jade","david","cho","kim","kim","janny","john"};
 


 for (i=0;i<ARRAYLENGTH; i++)
    {//printf("%s \n",names[i]);
    const char *ptr1 = strstr(names[i], "jim"); 
   
    if(names[i]==ptr1)
    {cnt++;}
     
   const char *ptr2 = strchr(names[i], 'a');
   while(ptr2!=NULL)
   {
   cnta++;
   //printf("a=%s\n",ptr2);
    ptr2 = strchr(ptr2 + 1, 'a');
   }

   const char *ptr3 = strchr(names[i], 'b');
   while(ptr3!=NULL)
   {
   cntb++;
   //printf("a=%s\n",ptr2);
    ptr3 = strchr(ptr3 + 1, 'b');
    }
     
   } 

   printf("charater %c was appeared %d times: ", 'a', cnta);
   printf("charater %c was appeared %d times: ", 'b', cntb);
   printf("charater %s was appeared %d times: \n", "jim", cnt);



   /

return 0;

}
