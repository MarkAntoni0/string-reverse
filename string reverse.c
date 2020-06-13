#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringInsert(char string[50], int stringLength){
    char nString[50];
    for (int i=0,j=stringLength-1; i<stringLength; i++,j--) {
        nString[i] = string[j];
    }
    puts(nString);
}

int main(){
    char string[50];
    printf("Insert the string to be reversed: ");
    scanf("%s",string);
    
    int stringLength = (int)strlen(string);
    stringInsert(string, stringLength);
    return 0;
}
