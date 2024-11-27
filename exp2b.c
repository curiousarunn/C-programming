#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float s,l,b,r,area,perimeter;
    printf("enter the side of square");
    scanf("%f",&s);
    printf("enter the length and breadth of rectangle");
    scanf("%f%f",&l,&b);
    printf("enter the radius of circle");
    scanf("%f",&r);
    printf("\n\nsquare\n");
    printf("area = %f",s*s);
    printf("\nperimeter  = %f",4*s);
    printf("\n\nrectangle\n");
    printf("area = %f",l*b);
    printf("\nperimeter = %f",2*(l+b));
    printf("\n\ncircle\n");
    printf("area = %f",3.141*r*r);
    printf("\nperimeter = %f",2*3.141*r);
    return 0;
}