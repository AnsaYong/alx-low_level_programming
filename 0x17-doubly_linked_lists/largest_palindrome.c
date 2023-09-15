#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    // Save the result in the file "102-result"
    FILE *file = fopen("102-result", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "%d", largestPalindrome);
    fclose(file);

    return 0;
}
