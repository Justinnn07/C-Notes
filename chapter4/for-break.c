#include <stdio.h> 

int main() {  
    int a=0;
    do{
        printf("%d \n", a);
     if(a==3){
         break;
     }
     a++;
    }while(a < 10);
     return 0;
}