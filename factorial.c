#include <stdio.h>

int factorial(int num);

int factorial(int num) {
   if (num != 0) {
       return num * factorial(num-1);
   } else return 1;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    
    if(n>=0 && n<=12)
        printf("%d", factorial(n));
    
    return 0;
}
