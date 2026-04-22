// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter a value:\n");
    scanf("%d",&a);
    int res=(a>=0)&&(a<=9);
    printf("%d is in the character digit i.e is:%d",a,res);
    return 0;
}