#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b; 
}

int main() {
    int num1, num2; 

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = add(ptr1, ptr2);

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
