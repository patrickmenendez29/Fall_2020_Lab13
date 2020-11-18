/****************************************************************************
* @By: Patrick Menendez Rosado
* @Lab number: 13
* @CSE 1002 Fund Software Dev 2, Section # , Fall 2020
* @Date: Nov 20, 2020
*****************************************************************************/

#include <stdio.h>

#define MAX 10
#define EMPTY -1

int stack[MAX];
int top = EMPTY;

void push(int [], int *, int);

int pop(const int [], int *);

int main() {
    printf("Hello, World!\n");
    return 0;
}

void push(int arr[], int *t, int item){
    if (*t < MAX - 1){  //check if stack is full
        (*t)++;         //update the top
        arr[*t] = item; //add new item

    } else {            //stack is indeed full
        printf("Stack is full\n");
    }
}

int pop(const int arr[], int *t){
    int temp;
    if (*t > EMPTY){    //check if stack is empty
        temp = arr[*t];     //get the top value
        (*t)--;     //update top
        return temp;

    } else {
        printf("Stack is empty");
    }
}