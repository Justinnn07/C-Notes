#include <stdio.h> 

int main() {
     char c;
     printf("ENTER THE CHRACTER ");
     scanf("%c", &c);
     if(c <=122 && c >=97){
         printf("IT IS LOWERCASE ");
     }
     else {
         printf("IT IS NOT LOWERCASE");
     }
     return 0;
}