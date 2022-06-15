#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM 10

void searchChar(char characterArr[], char);

int main(){
    char character;
    char characterArr[10] = {'A', 'B', 'B', 'D', 'C', 'D', 'C', 'A', 'C', 'B'};
    printf("Enter the character to be searched in the array: ");
    scanf("%c", &character);
    character = toupper(character);
    searchChar(characterArr, character);
}

void searchChar(char characteraArr[], char character){
    int numOfChar = 0;

    for(int i = 0; i < NUM; i++){
        if(characteraArr[i] == character){
            numOfChar++;
        }
    }

    if(numOfChar == 0){
        printf("\n'%c' not found in the list.\n", character);
    }else{
        printf("\nNumber of '%c' = %d\n", character, numOfChar);
    }
}











