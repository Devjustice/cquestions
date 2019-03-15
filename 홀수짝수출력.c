#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count); 

    for (int i = 1; i <= count; i++)  
        {
        if (i % 2 != 0)    
        {continue; }                 
      
        printf("짝수출력%d\n", i);
    }



     for (int i = 1; i <= count; i++)  
        {
        if (i % 2 == 0)    
        {continue; }                 
      
        printf("홀수출력%d\n", i);
    }





    return 0;
}

