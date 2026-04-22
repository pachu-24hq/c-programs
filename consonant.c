// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    int res1=!(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u');
    int res2=!(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U');
    int res=(res1&&res2);
    printf("%c is a not a vowel i.e is:%d",ch,res);
    return 0;
}