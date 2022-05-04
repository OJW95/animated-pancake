// find prime number
#include <stdio.h>
int find_prime_number(int p[], int size);

int find_prime_number(int p[], int size) {
    
    int count = 0;
    int prime_count = 0;
    
    for(int i = 0; i < size; i++) {
        for(int j = 1; j <= p[i]; j++) {
            if(p[i] % j == 0) {
                count++;
            }
        }
        if(count == 2) {
            prime_count++;
        }
        count = 0;
    }
    return prime_count;
}


int main() {
    
    int size = 0;
    scanf("%d", &size);
    int num[size];
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }
    
    printf("%d", find_prime_number(num, size));
    
    return 0;
}
