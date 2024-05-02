#include <stdio.h>

int max(int *a, int *b) {
    if (*a > *b) {
        return *a;  }
             else
              {   return *b;   }
}

int main() {
    int num1, num2; 
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int result = max(ptr1, ptr2);

    printf("The maximum of %d and %d is %d\n", num1, num2, result);

    return 0;
}