//function with no argument but return type
#include <stdio.h>
int getSimpleInterest(void);
int main(){
    int si = getSimpleTnterest();
    printf("Simple interest id  = %d",si);
    return 0;
}
int getSimpleTnterest(void){
    int P,R,T;
    printf("Enter P,R and T : ");
    scanf("%d%d%d", &P,&R,&T);
    return (P*R*T)/100;
}