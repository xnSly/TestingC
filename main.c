#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack
{
    char *stackptr;

    unsigned short capacity;
    unsigned short occupied;
    unsigned short element_size;

} Stack;

void allocStack(Stack *tStack)
{
    tStack->stackptr = ((int*) malloc(tStack->capacity));
}

void pushStack(Stack *tStack, void *tValue)
{
    memcpy(tStack->stackptr, tValue, sizeof(tValue));

    tStack->stackptr[tStack->occupied] = tValue;

    tStack->occupied++;
}

int popStack(Stack *tStack)
{
    tStack->occupied--;

    return tStack->stackptr[tStack->occupied];
}

int main()
{
    Stack myStack = {0, 100, 0, 0};

    allocStack(&myStack);

    return 0;
}