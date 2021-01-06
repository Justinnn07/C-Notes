#include <stdio.h> 

int main() {
      int maths, english, sst;
      float total;
      printf("ENTER MATHS MARKS ");
      scanf("%d", &maths);
      printf("ENTER ENGLISH MARKS ");
      scanf("%d", &english);
      printf("ENTER SST MARKS ");
      scanf("%d", &sst);
      total = (maths + english + sst) / 3;
    //   printf("%d", total); 
    if((total < 40) || english < 33 || maths < 33 || sst < 33 ) {
        printf("YOU ARE FAILED ANDN YOUR PERCENTAGE IS %f", total);
    }
else {
    printf("YOU ARE PASSED AND YOUR PERCENTAGE IS %f", total);
}
     return 0;
}