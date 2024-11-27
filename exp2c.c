#include<stdio.h>
#include<math.h>
int main(){
    float x1, y1, x2, y2,distance;
    printf("Enter x-coordinate of first point");
    scanf("%f", &x1);
    printf("Enter y-coordinate of first point");
    scanf("%f", &y1);
    printf("Enter x-coordinate of second point");
    scanf("%f",&x2);
    printf("Enter y-coordinate of second point");
    scanf("%f", &y2);
    distance = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("distance = %f" ,distance);
    return 0 ;
}
