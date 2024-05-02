#include <stdio.h>
#include <ctype.h> 

void countVowelsAndConsonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    while (*str) {
        char c = tolower(*str); 
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vowels)++; 
            } else {
                (*consonants)++; 
            }
        }
        str++; 
    }
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int vowels, consonants; 

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
