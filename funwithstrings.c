#include <stdio.h>
#include <string.h>

int get_string_length(char * str)
{
    int offset = 0;
    while (str[offset] != 0)
    {
       offset++;
    }
    return offset;
}

char copy_string(char *from, char *to)
{
    int offset = 0;
    while (from[offset] != 0)
    {
        to[offset] = from[offset];
        offset++;
    }
    
    return to[offset];  // make sure it is NULL terminated
    
}

void reverse0 (char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        /* code */
        char temp =  str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    
}

int main(int argc, char **argv)
{
    char *str1 = "Hello World!";
    char str2[] = "Hello World!";

    char newstring[500];

    // printf("Hello World!\n");
    // printf("%s\n", str1);
    // printf("%s\n", str2);

    // printf("%s has length %d bytes\n", str1, get_string_length(str1));

    // printf("%s has length %lu bytes\n", str1, strlen(str1));

    // copy_string(str1, newstring);

    // printf("%s\n", newstring);

    // strcpy(newstring, str1);

    char *result = strcpy(newstring, str1); 
    printf("%s\n", result); 

}