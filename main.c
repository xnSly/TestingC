#include <stdio.h>

int main()
{
    /* Variables

    Variables are allocated space in memory to store a value.
    We refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains.
    BUT we need to declare what type of data we are storing.
    
    */

    int x; // Declaration
    x = 123; // Initialization

    int y = 321; // Declaration + Initialization

    int age = 20; // Integer
    float gpa = 2.05; // Floating point number
    char grade = 'C'; // Single character
    char name[] = "Sly"; // Array of characters

    printf("You are %d years old", age);

    return 0;
}