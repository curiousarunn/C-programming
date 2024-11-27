// errors 

// #include <stdio.h>

// int main(){
//     int num, cube;
//     printf("Enter Number ");
//     scanf("%d",&num);
//     if(num>0)
//     {
//         cube = num*num*num;
//         printf("Cube of %d is %d",num,cube);

//     }
//     return 0;
// }


//wap to check wether the given  number is Even or odd.

#include <stdio.h>

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}