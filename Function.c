#include <stdio.h>
void message(void);//prototype
int main(){
    message();//function calling
    return 0;
}
//function with no argument and no return type
void message(void){
    printf("Welcome in C Programing !!!");//function definition
}