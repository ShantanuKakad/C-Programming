#include <stdio.h>

int main() 
{
    FILE *fp = fopen("data.txt", "w");
    fprintf(fp, "Hello File");
    fclose(fp);
    return 0;
}
