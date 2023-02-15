#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char personF[20];
    char personL[20];
    char object[20];

    printf("Color:\n");
    scanf("%s", color);
    printf("Person:\n");
    scanf("%s%s", personF, personL);
    printf("Object:\n");
    scanf("%s", object);

    printf("Roses are %s\n", color);
    printf("%s %s are blue\n", personF,personL);
    printf("I love %s\n", object);
    return 0;
}
