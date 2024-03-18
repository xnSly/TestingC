#include <stdio.h>
#include <stdlib.h>

typedef struct myStruct
{
    int num;
} myStruct;

void myFunction(myStruct *tempStruct)
{
    tempStruct->num += 10;

    printf("%p\n", &tempStruct->num);
}

int main()
{
    myStruct *coolStruct;

    coolStruct = ((myStruct*) malloc(sizeof(myStruct)));

    coolStruct->num = 10;

    myFunction(coolStruct);

    printf("%p\n", &coolStruct->num);

    return 0;
}