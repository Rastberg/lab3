#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main()
{
    long int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    long int wynik = eiler(n);
    printf("wynik: %d",wynik);
    return 0;
}
