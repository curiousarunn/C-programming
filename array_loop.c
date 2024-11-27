// #include <stdio.h>

// int main(){
//     int marks[5]={93,22,343,523,52,67,321,56};
//     printf("array elements are :");
//     for(int i=0; i<5; i++){
//         printf("%d ",marks[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int marks[5];
//     printf("Enter 5 sub marks: ");
//     for(int i=0; i<5; i++){
//         scanf("%d",&marks[i]);
//     }
//     printf("Array elements are : ");
//     for(int i=0; i<5; i++){
//         printf("%d ",marks[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter %d sub marks: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&marks[i]);
    }
    printf("Array elements are : ");
    for(int i=0; i<n; i++){
        printf("%d ",marks[i]);
    }
    return 0;
}