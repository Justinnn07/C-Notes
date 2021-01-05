#include <stdio.h> 

int main() {
     int a;
     printf("ENTER THE NO. \n");
     scanf("%d", &a);
     if(a == 1){
         printf("A IS 1");
     } 
       else if(a == 2){
         printf("A IS 2");
     } 
        else if(a == 3){
         printf("A IS 3");
     } 
     else {
         printf("ITS NOT 1,2,3");
     }
    return 0;
}