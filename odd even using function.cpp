#include <stdio.h>
int a(int);
int main()
{
    int num;
    printf("Enter an integer number: ");
scanf("%d",&num);
    a(num);
    return 0;
}

int a(int num){

(num%2==0) ? printf("%d is an even",num):
    printf("%d is an odd",num);

}

