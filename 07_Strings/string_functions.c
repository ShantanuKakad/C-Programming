#include <stdio.h>
#include <string.h>

int main() 
{
    char a[20] = "Hello";
    char b[20] = "World";

    strcat(a, b);
    printf("Concatenated: %s\n", a);
    printf("Length: %lu", strlen(a));

    return 0;
}
