#include <stdio.h>

int main()
{
    int v[5] = {1,2,3,4,5}; // Allocated space for an array
    

    int *p = v; // Didn't allocate a new array

    v[3] = 7;

    p[4] = 800;

    *(v+2) = 9800; // Same as v[2]

    printf("p = %p\n", p);
    printf("p+2 = %p\n", p+2); // The computer is adding +2(sizeof(int))

    printf("v[0] = %i\n", *p);
    printf("v[1] = %i\n", *(p+1));
    printf("v[2] = %i\n", *(p+2));
    printf("v[3] = %i\n", *(p+3));

    printf("v[0] = %i\n", v[0]);
    printf("v[1] = %i\n", v[1]);
    printf("v[2] = %i\n", v[2]);
    printf("v[3] = %i\n", v[3]);
    printf("v[4] = %i\n", v[4]);

    return 0;
}