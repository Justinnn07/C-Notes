#include <stdio.h> 

int main() {
    int no;
    printf("ENTER YOUR NUMBER ");
    scanf("%d", &no);

    if(no==9999){
        printf("THE NO. %d IS THE GREATEST 4 DIGIT NUMBER ", no);
    }
   if(no < 9999) {
       printf("THE NO. %d IS NOT THE GREATEST 4 DIGIT NUMBER", no);
   }
     return 0;
}