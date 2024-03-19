#include <stdio.h>
#include <string.h>

#define MAX_INPUT_SIZE 11 // 10 characters + 1 for null terminator

int main() {
    char userInput[MAX_INPUT_SIZE];

    printf("Enter a 10-digit number: ");
    scanf("%10s", userInput); // Read up to 10 characters

    // Check if the input has exactly 10 characters
    if (strlen(userInput) == 10) {
        printf("You entered: %s\n", userInput);
    } else {
        printf("Invalid input. Please enter exactly 10 digits.\n");
    }

    return 0;
}