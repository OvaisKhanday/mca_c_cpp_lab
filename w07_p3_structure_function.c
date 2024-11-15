// Write a program to pass a pointer to a structure as a parameter to a function and return back a pointer to structure to the calling function after modifying the members of the structure?

#include <stdio.h>

typedef struct {
    int id;
    char *name;
    float marks;
} Student;

Student* fill(Student* std, int id, char* name, float marks){
    std->id = id;
    std->name = name;
    std->marks = marks;
    return std;
}
void printStd(Student* std){
    printf("Id: %d\n", std->id);
    printf("Name: %s\n", std->name);
    printf("Marks: %.2f\n", std->marks);
}

int main(){

    Student std;
    fill(&std, 10, "Ovais Ahmad", 43.01f);
    printStd(&std);
}