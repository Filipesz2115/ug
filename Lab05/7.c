#include <stdio.h>

int isPrime(int a) {

    if (a <= 1) {
        return 0;
    }

    for(int i = 2; i < a; i++) {
        if (a % i == 0) {
        return 0;
        }
    }
    return 1;
}
int main() {
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    if (isPrime(a)) {
        printf("Ta liczba jest liczba pierwsza\n");
    } else {
        printf("Ta liczba nie jest liczba pierwsza\n");
    }
    return 0;
}