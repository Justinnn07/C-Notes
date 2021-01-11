#include <stdio.h> 

int main() { 
    int n;
    printf("ENTER THE VALUE OF n ");
    scanf("%d", &n);
    for(int a = 0; a < n; a++){
    printf("%d \n", a+1);
    }
    return 0;
}