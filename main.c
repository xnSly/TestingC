#include <stdio.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    // struct = collection of related numbers ("variables")
    // they can be of different data types
    // listed under one name in a block of memory
    // VERY SIMILAR to classes in other languages (but no methods)   

    struct Player player1 = {"Sly", 5};

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    return 0;
}