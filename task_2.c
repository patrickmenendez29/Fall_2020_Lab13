/****************************************************************************
* @By: Patrick Menendez Rosado
* @Lab number: 13
* @CSE 1002 Fund Software Dev 2, Section # , Fall 2020
* @Date: Nov 20, 2020
*****************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 10
#define EMPTY -1

char stack[MAX];
int top = EMPTY;

void push(char [], int *, char);

char pop(const char [], int *);

int is_palindrome(const char []);

int main() {
    char race_car[] = "racecar";

    is_palindrome(race_car);

    return 0;
}

void push(char arr[], int *t, char item){
    if (*t < MAX - 1){  //check if stack is full
        (*t)++;         //update the top
        arr[*t] = item; //add new item

    } else {            //stack is indeed full
        printf("Stack is full\n");
    }
}

char pop(const char arr[], int *t){
    int temp;
    if (*t > EMPTY){    //check if stack is empty
        temp = arr[*t];     //get the top value
        (*t)--;     //update top
        return temp;

    } else {
        printf("Stack is empty");
    }
}

int is_palindrome(const char arr[]){

    char temp[strlen(arr)];
    int top_temp = EMPTY;

    for (int j = 0; j < strlen(arr); ++j) {
        push(temp,&top_temp,arr[j]);
    }

    for (int i = 0; i < strlen(arr); ++i) {
        if (arr[i] != pop(temp,&top_temp)){
            printf("%s is not a palindrome\n",arr);
            return 0;
        }
    }

    printf("%s is a palindrome\n",arr);

    return 1;
}