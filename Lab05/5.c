#include <stdio.h>

int main() {
    int n;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    int t[n];

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }

    printf("\nTablica wczytanych liczb:\n");
    for (int i = 0; i < n; i++) {
        printf("t[%d] = %d\n", i, t[i]);
    }
    return 0;
}
