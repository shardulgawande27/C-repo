#include<stdio.h>

    int sum(int a , int b);

int main(){
    
    int a, b, c;

    scanf("%d", &b);
    scanf("%d", &c);

    a = sum(b,c);

    printf("The value of a is %d\n", a);




    return 0;
}

int sum(int a , int b){

    int c;

    c = a + b;

    return c;

}

