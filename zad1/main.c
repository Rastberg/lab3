#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int main()
{
    char napis [20];
    printf("podaj slowo dla sprawdzenia: ");
    scanf("%s",napis);
    if(polindrom(napis))
        printf("slowo %s jest polindromem",napis);
    else
        printf("slowo %s nie jest polindromem",napis);
    return 0;
}
