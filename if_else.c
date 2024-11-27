#include <stdio.h>

int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);

    if(age >18){
        printf("adult\n they can vote,\nthey can drive");
    }
    else{
        printf("not adult \n");
    }
    return 0;
}