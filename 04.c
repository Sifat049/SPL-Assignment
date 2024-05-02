#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; 
    while (*ptr) 
        ptr++; 
    return ptr - str; 
}

int main() {
    char str[100]; 
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    int length = stringLength(str);
    
    if (length > 0 && str[length-1] == '\n') {
        str[length-1] = '\0'; 
        length--; 
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
