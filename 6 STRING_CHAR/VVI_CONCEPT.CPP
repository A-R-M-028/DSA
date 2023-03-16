#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: Initializing a char array with a string literal
    char str1[] = "Hello, world!"; // Compiler adds null character at the end
    printf("str1 length: %ld\n", strlen(str1)); // Output: 13

    // Example 2: Initializing a char array without a string literal
    char str2[14] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'}; // No null character
    printf("str2 length: %ld\n", strlen(str2)); // Output: undefined behavior due to missing null character

    // Example 3: Adding a null character manually to a char array
    char str3[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'}; // Manually adding null character
    printf("str3 length: %ld\n", strlen(str3)); // Output: 13

    return 0;
}
