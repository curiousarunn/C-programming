// Switch statement {WAP to take day number as an input and print the day corresponding to that day number}

// #include <stdio.h>

// int main(){
//     int dayno;
//     printf("Enter day number :");
//     scanf("%d",&dayno);
//     switch(dayno)
//     {
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("invalid day no.");

//         }
    
//     return 0;
// }


// WAP to find area of circle ,  square , rectangle and triangle 

// #include <stdio.h>

// int main(){
//     float r,s,l,b,h,a; 
//     int choice;
//     printf("1. Area of circle\n");
//     printf("2. Area of Square \n");
//     printf("3. Area of rectangle\n");
//     printf("4. Area of triangle\n");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//         printf("Enter the value of r");
//         scanf("%f",&r);
//         a = 3.14*r*r;
//         printf("The area of circle is %f",a);
//         break;
        
//         case 2:
//         printf("Enter the value of s ");
//         scanf("%f",&s);
//         a = s*s;
//         printf("The area of circle is %f",a);
//         break;

//         case 3:
//         printf("Enter the value of l and b ");
//         scanf("%f%f",&l,&b);
//         a = l*b;
//         printf("The area of circle is %f",a);
//         break;

//         case 4:
//         printf("Enter the value of b and h ");
//         scanf("%f%f",&b,&h);
//         a = 1/2*b*h;
//         printf("The area of circle is %f",a);
//         break;
//         default:
//         printf("INvalid Choice !!!!!!");
//         }




//     return 0;
// }

#include <stdio.h>

int main(){
    int length,breadth,area;
    printf("enter the valuc of length");
    scanf("%d",&length);
     printf("enter the valuc of breadth");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("area of rectangle = %d",area);
    return 0;
}