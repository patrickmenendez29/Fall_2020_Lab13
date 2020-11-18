/****************************************************************************
* @By: Patrick Menendez Rosado
* @Lab number: 13
* @CSE 1002 Fund Software Dev 2, Section # , Fall 2020
* @Date: Nov 20, 2020
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMPTY -1;

 struct stack{
    int top;
    int capacity;
    char *arr;
};

struct stack *fill(int capacity);
int is_full(struct stack *stack);
void push(struct stack* stack, char item);
char pop(struct stack* stack);
void reverse(char str[]);

int main (){

    char test[] = "This is cool!\n";
    reverse(test);
    printf("%s",test);
}



struct stack *fill(int capacity){
    struct stack *stack = (struct stack *) malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = EMPTY;
    stack->arr = (char *) malloc(sizeof(char) * capacity);
    return stack;
}


int is_full(struct stack *stack){   //parameters used for abstraction
    return stack->top == stack->capacity - 1;
}


void push(struct stack* stack, char item){
    if (is_full(stack)){

        return;

    }
    stack->arr[++stack->top] = item;
}


char pop(struct stack* stack) {
    return stack->arr[stack->top--];
}


void reverse(char str[]){

    struct stack *stack = fill(strlen(str));

    for (int i = 0; i < strlen(str); i++){
        push(stack, str[i]);
    }


    for (int i = 0; i < strlen(str); i++){
        str[i] = pop(stack);
    }
}