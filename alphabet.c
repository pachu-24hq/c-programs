// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    int res1=(ch>='A')&&(ch<='Z');
    int res2=(ch>='a')&&(ch<='z');
    int res=(res1||res2);
    printf("%c is a alphabet i.e is:%d",ch,res);
    return 0;
}