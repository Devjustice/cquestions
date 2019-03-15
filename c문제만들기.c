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



   /*
    if(names[1]==names[2]||
    names[1]==names[3]||
    names[1]==names[4]||
    names[1]==names[5]||
    names[1]==names[6]||
    names[1]==names[7]||
    names[1]==names[8]||
    names[1]==names[9]||
    names[1]==names[10]||
    names[1]==names[11]||
    names[1]==names[12]||
    names[1]==names[13]||
    names[1]==names[14]||
    names[1]==names[15]||
    names[1]==names[16]||
    names[1]==names[17]||
    names[1]==names[18])
  
  {printf("\n%s",names[1]);}else{exit(1); }


    if(names[2]==names[1]||
    names[2]==names[3]||
    names[2]==names[4]||
    names[2]==names[5]||
    names[2]==names[6]||
    names[2]==names[7]||
    names[2]==names[8]||
    names[2]==names[9]||
    names[2]==names[10]||
    names[2]==names[11]||
    names[2]==names[12]||
    names[2]==names[13]||
    names[2]==names[14]||
    names[2]==names[15]||
    names[2]==names[16]||
    names[2]==names[17]||
    names[2]==names[18])
  
  {printf("\n%s",names[2]);}else{exit(1); }

    if(names[3]==names[2]||
    names[3]==names[1]||
    names[3]==names[4]||
    names[3]==names[5]||
    names[3]==names[6]||
    names[3]==names[7]||
    names[3]==names[8]||
    names[3]==names[9]||
    names[3]==names[10]||
    names[3]==names[11]||
    names[3]==names[12]||
    names[3]==names[13]||
    names[3]==names[14]||
    names[3]==names[15]||
    names[3]==names[16]||
    names[3]==names[17]||
    names[3]==names[18])
  
  {printf("\n%s",names[3]);}else{ exit(1);;}

   if(names[4]==names[1]||
    names[4]==names[2]||
    names[4]==names[3]||
    names[4]==names[5]||
    names[4]==names[6]||
    names[4]==names[7]||
    names[4]==names[8]||
    names[4]==names[9]||
    names[4]==names[10]||
    names[4]==names[11]||
    names[4]==names[12]||
    names[4]==names[13]||
    names[4]==names[14]||
    names[4]==names[15]||
    names[4]==names[16]||
    names[4]==names[17]||
    names[4]==names[18])
  
  {printf("\n%s",names[4]);}else{ exit(1);}

       if(names[5]==names[1]||
    names[5]==names[2]||
    names[5]==names[3]||
    names[5]==names[4]||
    names[5]==names[6]||
    names[5]==names[7]||
    names[5]==names[8]||
    names[5]==names[9]||
    names[5]==names[10]||
    names[5]==names[11]||
    names[5]==names[12]||
    names[5]==names[13]||
    names[5]==names[14]||
    names[5]==names[15]||
    names[5]==names[16]||
    names[5]==names[17]||
    names[5]==names[18])
  
  { printf("\n%s",names[5]);}else{exit(1);}

    
        if(names[6]==names[1]||
    names[6]==names[2]||
    names[6]==names[3]||
    names[6]==names[4]||
    names[6]==names[5]||
    names[6]==names[7]||
    names[6]==names[8]||
    names[6]==names[9]||
    names[6]==names[10]||
    names[6]==names[11]||
    names[6]==names[12]||
    names[6]==names[13]||
    names[6]==names[14]||
    names[6]==names[15]||
    names[6]==names[16]||
    names[6]==names[17]||
    names[6]==names[18])
  
  {printf("\n%s",names[6]);}else{ exit(1);;}


          if(names[7]==names[1]||
    names[7]==names[2]||
    names[7]==names[3]||
    names[7]==names[4]||
    names[7]==names[5]||
    names[7]==names[6]||
    names[7]==names[8]||
    names[7]==names[9]||
    names[7]==names[10]||
    names[7]==names[11]||
    names[7]==names[12]||
    names[7]==names[13]||
    names[7]==names[14]||
    names[7]==names[15]||
    names[7]==names[16]||
    names[7]==names[17]||
    names[7]==names[18])
  
  {printf("\n%s",names[7]);;}else{names[7]={"0"}; }




  */

return 0;

}
