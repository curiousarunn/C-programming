// #include<stdio.h>
// int main(){
//     int n,a,b,c,d,e,sum;
//     printf("enter 5 digit number ");
//     scanf("%d",&n);
//     a = n%10;
//     n = n/10;
//     b = n%10;
//     n = n/10;
//     c = n%10;
//     n = n/10;
//     d = n%10;
//     n = n/10;
//     e = n%10;
//     n = n/10;
//     sum = a+b+c+d+e;
//     printf("sum of digits is  %d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter 5 digit number ");
//     scanf("%d", &n);
//     sum = sum + n%10;
//     n = n/10;
//     sum = sum + n%10;
//     n = n/10;
//     sum = sum + n%10;
//     n = n/10;
//     sum += n%10;
//     n = n/10;
//     sum += n%10;
//     n = n/10;
//     printf("Sum of digits = %d",sum);
//     return 0;
// }

//wap to check the given number is even or odd using ternary operator.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enyter number ");
//     scanf("%d", &n);
//     (n%2==0)? printf("Even") : printf("Odd");
//     return 0;
// }


// wap to find greatest number amonh two using ternary operator.
// #include<stdio.h>
// void main()
// {
//     int a,b, largest;
//     printf("Enter the value of a and b");
//     scanf("%d%d",&a,&b);
//     largest = (a>b)? a : b;
//     printf("Largest value is %d", largest);
// }