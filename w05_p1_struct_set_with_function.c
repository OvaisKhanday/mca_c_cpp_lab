// Implement a function which receiver a pointer to a Student struct and sets the values of its fields.

#include <stdio.h>


struct Student{
    int id;
    char *name;
    float percentage;
};

struct Student* setStudent(struct Student *std,int id, char* name, float percentage)
{
    std->id = id;
    std->name = name;
    std->percentage = percentage;
    return std;
}

int main(){

    struct Student std;
    setStudent(&std, 10,"Ovais Ahmad", 98.8);

    printf("Id: %d\n", std.id);
    printf("Name: %s\n", std.name);
    printf("Percentage: %f\n", std.percentage);
    return 0;
}