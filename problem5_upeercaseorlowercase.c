#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch<= 'Z'){
        printf("%c is an uppercase letter.\n",ch);
    }
    else if(ch>= 'a' && ch<= 'z'){
        printf("%c is an lowercase letter.\n",ch);
    }else{
        printf("%c is neither an uppercase nor lowercase.\n",ch);
    }

    return 0;
}