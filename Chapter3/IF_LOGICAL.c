#include <stdio.h> 

int main() {
     int age;
     printf("ENTER YOUR AGE ");
     scanf("%d", &age);
     if(age <= 70 && age >= 18) {
          printf("YOU ARE ABOVE 18 AND BELOW 70, you can drive \n");
     }
     else{
          printf("YOU CANT DRIVE");
     }
      return 0;
}