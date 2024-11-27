// #include <stdio.h>

// int main(){
//     int arr[4][3];
//     printf("Elements of 2D Array Elements : ");
//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<3; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Elements of 2D array are : \n");
//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }  



// #include<stdio.h>
// int main(){
//     int rowSize, colSize;
//     printf("Enter the row and column size of 2D Array : ");
//     scanf("%d%d", &rowSize, &colSize);
//     int arr[rowSize][colSize];
//     printf("Elements of 2D Array Elements : ");
//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0; j<colSize; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Elements of 2D array are : \n");
//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0; j<colSize; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//      int sum = 0;
//     for (int i = 0; i < rowSize; i++) {
//         for (int j = 0; j < colSize; j++) {
//             sum += arr[i][j];
//         }}
//         printf("sum :%d",sum);
//     return 0;
// } 


#include<stdio.h>
int main(){
    int rowSize, colSize , sum =0;
    printf("Enter the row and column size of 2D Array : ");
    scanf("%d%d", &rowSize, &colSize);
    int arr[rowSize][colSize];
    printf("Elements of 2D Array Elements : ");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Elements of 2D array are : \n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //logic to perform sum of each row of matrix (2d array)
    for(int i=0; i<rowSize; i++){
        int sum = 0;
        for(int j=0; j<colSize; j++){
        sum += arr[i][j];
    }
    printf("Sum of %d row = %d\n",i+1,sum);
}
//logic to perform sum of each column of matrix (2d array)
    for(int i=0; i<colSize; i++){
        int sum = 0;
        for(int j=0; j<rowSize; j++){
        sum += arr[j][i];
    }
    printf("Sum of %d column = %d\n",i+1,sum);
}
return 0;
}