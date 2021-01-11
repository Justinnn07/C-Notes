#include <stdio.h> 

int main() {  
    int i = 0;
    int n;
    printf("ENTER THE VALUE OF N");
    scanf("%d", &n);
    do{
    printf("%d \n", i+1);
    i++;
    }while(i<n);
     return 0;
}