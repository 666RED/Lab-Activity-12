#include <stdio.h>
#include <stdlib.h>
#define NUM 12

int searchNumber(int, int arr[], int, int);
void display(int, int);

int main(){
    int number, index;
    int arr[NUM] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("Enter the number: ");
    scanf("%d", &number);
    index = searchNumber(number, arr, 0, NUM - 1);
    display(index, number);
}

int searchNumber(int number, int arr[], int begin, int end){
    if(begin == end){
        if(arr[begin] == number){
            return begin;
        }else{
            return -1;
        }
    }

    int mid = (begin + end) / 2;

    if(arr[mid] == number){
        return mid;
    }else if(arr[mid] > number){
        mid = searchNumber(number, arr, begin, mid);
    }else if(arr[mid] < number){
        mid = searchNumber(number, arr, mid + 1, end);
    }
    return mid;
}

void display(int index, int number){
    if(index == -1){
        printf("\nNumber not found.\n");
    }else{
        printf("\n%d found at index %d\n", number, index);
    }
}





