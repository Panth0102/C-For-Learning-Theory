#include<stdio.h>

int main(){
    int a = 2;

    switch(a){
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
        default:
            printf("Please Try Again\n");
    }

    return 0;
}