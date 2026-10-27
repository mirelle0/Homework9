
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    char s;
    printf("¬ведите сторону треугольника: ");
    scanf("%d", &a);
    printf("¬ведите символ: ");
    scanf(" %c", &s);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == a || j == 1 || j == 2 * i - 1)
                printf("%c", s);
            else
                printf(" ");
        }
        printf("\n");
    }
}
