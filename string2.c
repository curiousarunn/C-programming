#include <stdio.h>
#include<string.h>
#include<stdlib.h>

// int main(){
//     //example strlen()  function
//     char password[20];
//     printf("Enter Password : ");
//     gets(password);
//     int len = strlen(password);
//     printf("Number of character in password string is %d",len);
//     return 0;
// }


//strupr

// int main()
// {
//     char str[30];
//     printf("Enter string : ");
//     gets(str);
//     strupr(str);
//     printf("%s",str);
// }

//strlwr

// int main()
// {
//     char str[30];
//     printf("Enter string : ");
//     gets(str);
//     strlwr(str);
//     printf("%s",str);
// }


//STRREV


// int main()
// {
//     char str[30];
//     printf("Enter string : ");
//     gets(str);
//     strrev(str);
//     printf("%s",str);
// }

// strcmp


// int main(){
//     char str1[30], str2[30];
//     printf("Enter String-1 : ");
//     gets(str1);
//     printf("Enter String-2 : ");
//     gets(str2);
//     int x = strcmp(str1, str2);
//     if(x==0)
//     printf("Both are same");
//     else if(x == -1)
//     printf("string1 is less than string 2");
//     else
//     printf("string1 is greater then string 2");
//     return 0;
// }

// atoi

int main(){
    char str[30];
    printf("Enter string :");
    gets(str);
    int num = atoi(str);
    printf("%d", num);
    return 0;
}