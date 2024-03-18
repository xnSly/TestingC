#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    unsigned char capacity;
    unsigned char occupied;
    
    int *stackArray;

} Stack;

void allocStack(Stack *tStack)
{
    tStack->stackArray = ((int*) malloc(tStack->capacity));
}

void pushStack(Stack *tStack, int tValue)
{
    tStack->stackArray[tStack->occupied] = tValue;

    tStack->occupied++;
}

int popStack(Stack *tStack)
{
    tStack->occupied--;

    return tStack->stackArray[tStack->occupied];
}

int main()
{
    Stack myStack = {100, 0, 0};

    allocStack(&myStack);

    printf("%p", &myStack.stackArray[myStack.occupied]);

    return 0;
}