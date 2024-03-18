#include <stdio.h>
#include <stdlib.h>

struct myStruct
{
    int value;
};

int main()
{
    struct myStruct *Yes;

    Yes = malloc(sizeof(struct myStruct));

    Yes->value = 20;

    printf("%d", Yes->value);

    return 0;
}