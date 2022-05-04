#include <stdio.h>

long long factorial(long long num) {
    
    if(num != 1) {
        return num * factorial(num-1);
    } else return 1;
}

int main() {
    
    long long n = 0;
    long long k = 0;
    
    scanf("%lld %lld", &n, &k);
    
    printf("%lld", (factorial(n) / (factorial(k) * factorial(n-k))) % 1000000007);
    
    return 0;
}
