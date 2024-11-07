// Write a program which takes five arguments on command line, opens a file and writes one argument per line in that file and closes the file.

#include <stdio.h>

int main(int argc, char* argv[]){

    FILE *fp = fopen("w05_p2.txt", "w");
    if(fp == NULL){
        printf("File cannot be opened");
        return -1;
    }

    for (int i = 2; i < argc; i++){
        fprintf(fp, "%s\n", argv[i]);
    }
    fclose(fp);

    return 0;
}