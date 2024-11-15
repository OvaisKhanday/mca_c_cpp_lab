//  Write a program to demonstrate the swapping the fields of two structures using pointers?


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
void swap(Student* s1, Student* s2){
    Student temp;
    temp.id = s1->id;
    temp.name = s1->name;
    temp.marks = s1->marks;

    s1->id = s2->id;
    s1->name = s2->name;
    s1->marks = s2->marks;

    s2->id = temp.id;
    s2->name = temp.name;
    s2->marks = temp.marks;
}

int main(){

    Student std1, std2;
    fill(&std1, 1, "Ovais Ahmad", 43.01f);
    fill(&std2, 12, "Yawar Abbass", 99.0f);
    swap(&std1, &std2);
    printf(" ----- Student 1 ----- \n");
    printStd(&std1);
    printf("\n ----- Student 2 ----- \n");
    printStd(&std2);
}