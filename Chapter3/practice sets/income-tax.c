#include <stdio.h> 

int main() {  
    float tax = 0, income;
    printf("ENTER YOUR INCOME ");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000){
        tax = tax + 0.05 * (income - 250000);
    }
       if (income >= 500000 && income <= 500000){
        tax = tax + 0.25 * (income - 1000000) ;
    }
       if (income >= 1000000){
        tax = tax + 0.30 * (income - 1000000 );
    }
    printf("YOUR TAX TO BE PAID IS %f", tax);
     return 0;
}