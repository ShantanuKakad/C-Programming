#include <stdio.h>

struct Student 
{
    int id;
    float marks;
};

int main() {
    struct Student s = {1, 95.5};
    printf("ID: %d Marks: %f", s.id, s.marks);
    return 0;
}
