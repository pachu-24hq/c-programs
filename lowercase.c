// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is a lower case alphabet i.e:%d",ch,res);
    return 0;
}