// Write a program to input name, address and telephone number of ‘n’ persons (n<=20). Sort according to the name as a primary key and address as the secondary key. Print the sorted telephone directory.

#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20];
    char address[20];
    char telephone[11];
} Person;

void swap(Person* p1, Person* p2){
    Person temp;
    strcpy(temp.name, p1->name);
    strcpy(temp.address, p1->address);
    strcpy(temp.telephone, p1->telephone);

    strcpy(p1->name, p2->name);
    strcpy(p1->address, p2->address);
    strcpy(p1->telephone, p2->telephone);

    strcpy(p2->name,temp.name);
    strcpy(p2->address,temp.address);
    strcpy(p2->telephone,temp.telephone);
}

void sort(Person p[], int n){
    // sort according to {name}
    for (int i = 0; i < n-1; i ++){
        for (int j = i + 1; j < n; j++){
            if(strcmp(p[i].name, p[j].name) == 1){
                swap(&p[i], &p[j]);
            }
        }
    }
    // sort according to {address}
    for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            if (strcmp(p[i].name, p[j].name) == 0)
            {
                while (j < n && strcmp(p[i].name, p[j].name) == 0 && strcmp(p[j].address, p[i].address) == -1)
                {
                    swap(&p[i], &p[j]);
                    j++;
                }
            }
        }
}
int main(){

    int n;
    printf("Enter number of persons: ");
    scanf("%d", &n);

    Person persons[n];
    for (int i = 0; i < n;i++){
        fflush(stdin);
        printf("Enter name for (%d): ", i + 1);
        gets(persons[i].name);
        printf("Enter address for (%d): ", i + 1);
        gets(persons[i].address);
        printf("Enter telephone for (%d): ", i + 1);
        scanf("%10[0-9]s", &persons[i].telephone);
    }

    sort(persons, n);
    for (int i = 0; i < n;i++){
        printf("%s, %s, %s\n", persons[i].name, persons[i].address, persons[i].telephone);
    }

    return 0;
}