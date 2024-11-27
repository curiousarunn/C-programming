//no argument and no return value
// #include<stdio.h>
// void cube_1(void);
// int main(){
//     cube_1();

// }
// void cube_1(void){
//     int num1,cube;
//     printf("Enter a number : ");
//     scanf("%d",&num1);
//     cube=num1*num1*num1;
//     printf("cube1 = %d", cube);

// }
//no argument but  return type
// #include<stdio.h>
// int cube_2(void){
//     int num,cube;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     cube = num*num*num;
//     return cube;
// }
// int main(){
//     int cb=cube_2();
//     printf("%d",cb);
//     return 0;
// }
//argument but no return type
// #include<stdio.h>
// void cube_3(int a){
//     int cub=a*a*a;
//     printf("%d",cub);
// }
// int main(){
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     cube_3(n);
//     return 0;
// }
#include<stdio.h>
int cube(int a){
    return a*a*a;

}
int main(){
    int x;

    printf("enter the value of x = ");
    scanf("%d",&x);
    int cb = cube(x);
    printf("%d",cb);
}