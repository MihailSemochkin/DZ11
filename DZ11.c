#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int n, i;
    int a[100];
    double e = 0; //Четные
    double p = 0; //Положительные
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    printf("Введите элементы:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            e++;
        }
        if (a[i] > 0) {
            p++;
        }
    }
    printf("Четных: %.0f\n", e);
    printf("Положительных: %.0f\n", p);

    if (p > 0) {
        printf("Отношение: %.2f\n", e / p);
    }
    else {
        printf("Положительных нет.\n");
    }
    return 0;
}