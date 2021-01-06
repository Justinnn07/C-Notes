#include <stdio.h> 

int main() { 
    int rating;
    printf("ENTER YOUR RATING (1-5) ");
    scanf("%d", &rating);
    switch(rating){
        case 1:
        printf("YOUR RATING IS 1 ");
        break;
        case 2: 
        printf("YOUR CASE IS 2 ");
        break;
        case 3: 
        printf("YOUR CASE IS 3 ");
        break;
        case 4: 
        printf("YOUR CASE IS 4 ");
        break;
        default: 
        printf("INVALID");
        break;
    };
    return 0;
}