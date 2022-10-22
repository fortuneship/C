#include <stdio.h>

struct person
{
    /* data */
    char name[50];
    int age;
    int height_in_inches;
};


int main()
{
    
    struct person me;
    struct person you;

    me.age = 20;
    you.height_in_inches = 8;

    printf("%i, %i", me.age, you.height_in_inches);

}