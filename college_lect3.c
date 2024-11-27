// int main()
// {
//     float radius, area, per, length, width, side;
//     printf("enter radius");
//     scanf("%f", &radius);
//     area = 3.14*radius*radius;
//     per = 2 * 3.14* radius;
//     printf("Area of circle = %f\nPerimeter if circle = %f\n, area,per");
//     printf("enter sides of square");
//     scanf("%f", &side);
//     area = side*side;
//     per = 4*side;
//     printf("Area of Square = %f\nPerimeter of square = %f\n",area,per);
//     printf("Enter length and width");
//     scanf
// }





//total marks and percentage of five subjects marks 

// #include<stdio.h>
// int main(){
//     int sub1 , sub2, sub3, sub4, sub5, total ;
//     float per;
//     printf("enter marks");
//     scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

//     total = sub1+sub2+sub3+sub4+sub5;
//     printf("total marks = %d" , total);

//     per = total/5;

//     printf("total marks = %d\npercentage = %f ", total , per );
//     return 0;


// }

int main(){
    float f,  cel;
    printf("enter Temp. in fehrenheit");
    scanf("%f", &f);
    cel = (f-32)*5/9;
    printf("Celsius = %2f", cel);
    return 0;
}