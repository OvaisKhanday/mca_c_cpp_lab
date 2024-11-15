//  Write a program which creates Student (struct) objects using malloc and stores their pointers in an array. It must free the objects after printing their contents.


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float marks;
} Student;

int main(){

    int n = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student* stds[n];
    for (int i = 0; i < n; i++){
        stds[i] = (Student *)malloc(sizeof(Student));
        if(stds[i] == NULL){
            perror("Memory not allocated");
            exit(1);
        }
    }
    for (int i = 0; i < n; i++){
        printf("Enter name: ");
        fflush(stdin);
        scanf("%[^\n]s", stds[i]->name);
        printf("Enter Id: ");
        scanf("%d", &stds[i]->id);
        printf("Enter Marks: ");
        scanf("%f", &stds[i]->marks);
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", i + 1);
        printf("Id: %d\n", stds[i]->id);
        printf("Name: %s\n", stds[i]->name);
        printf("Marks: %f\n", stds[i]->marks);
    }

     for (int i = 0; i < n; i++){
         free(stds[i]);
    }

    return 0;
}

