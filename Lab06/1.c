#include <stdio.h>

int dodawanie(int a, int b) {
    return a+b;
}
int odejmowanie(int a, int b) {
    return a-b;
}
int mnozenie(int a, int b) {
    return a*b;
}
int dzielenie(int a, int b) {
    return a/b;
}

int main() {

    int number;
    int a,b;

    printf("Pseudokalkulator\n");
    printf("Wpisz pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Wpisz druga liczbe: ");
    scanf("%d", &b);
    printf("1: DODAWANIE\n2: ODEJMOWANIE\n3: MNOZENIE\n4: DZIELENIE\n");
    printf("Wybierz dzialanie jakie chcesz wykonac: ");
    scanf("%d", &number);

    switch(number) {
        case 1:
        printf("%d\n", dodawanie(a,b));
        break;
        case 2:
        printf("%d\n", odejmowanie(a,b));
        break;
        case 3:
        printf("%d\n", mnozenie(a,b));
        break;
        case 4:
        printf("%d\n", dzielenie(a,b));
        break;
    }
    return 0;
}