#include<stdio.h>
#define pi 3.14

// int mul(int a);  -> We can't do method overloading
int mul(int a, int b);  // Declare

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    c = scanf("%d",&b);  // -> When written like this, scanf function returns 0 (false -> when datatype doesn't match) or 1 (true)
    d = printf("Multiplication of a = %d, b = %d and c = %d is : %d\n", a, b ,c ,mul(a,b));   // Calling
    printf("%d",d);   // D will return length of string
    // print("%d",e);  -> As E is in different Scope
    return 0;
}

int mul(int a, int b){  // Definition - defined
    int e = 5;
    return a*b;
}

// int mul(int a, int b){  --> Method can not be re-defined
//     return a+b;
// }