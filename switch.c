#include <stdio.h>

// int main()
// {
//     int days;
//     printf("enter the days (1-7): ");
//     scanf("%d",&days);
//     switch(days){
//         case 1 : printf("monday\n");
//         break ;
//         case 2 : printf("tuesday\n");
//         break;
//         case 3 : printf("wednesday\n");
//         break;
//         case 4 : printf("thursday\n");
//         break;
//         case 5 : printf("friday\n");
//         // break;
//         case 6 : printf("saturday\n");
//         // break;
//         case 7 : printf("sunday\n");
//         // break;
//         default: printf("invalied days");

//     }

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int num1, num2;
//     printf("enter the number : ");
//     scanf("%d%d",&num1,&num2);

//     if(num1>num2){
//         printf("the greater num is :%d",num1);
//     }else{
//         printf("the greater num is :%d",num2);

//     }
//     return 0;
// }

int main() {
    int n;
    scanf("%d",n);
    if (n%2!=0){
        printf("Weird");
    }
    else if(n>=2 && n<=5 && n%2 ==0){
        printf("Not Weird");
    }
    else if (n>=6 && n<=20 && n%2 == 0){
        printf("Weird");
    else (n>=20 && n%2==0){
        printf("Not Wierd");
    }
    }
    return 0;
}