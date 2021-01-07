#include <stdio.h> 

int main() {  
    float leap = 4 , year;
    printf("ENTER THE YEAR TO CHECK LEAP YEAR ");
    scanf("%d", year);
   float a = year / leap;
    if (a==0){
        printf("THE YEAR %d is a leap year", year);
    }
     return 0;
}