#include <stdio.h>

#define TRUE 1
#define FALSE 0

int reverse_number(int num) {
    int reversed_num = 0;

    // Reversing the number
    while (num > 0) {
        int digit = num % 10;  // Extract the last digit
        reversed_num = reversed_num * 10 + digit;  // Append the digit to the reversed number
        num /= 10;  // Remove the last digit from the original number
    }

    return reversed_num;
}

// Function to check if a given year is a leap year
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return TRUE;
    else
        return FALSE;
}

// Function to calculate the sum of numbers until 0 is pressed
void calculate_sum_until_zero() {
    int num = 0;
    int temp = 0;
    
    do {
        printf("Enter a number (press 0 to calculate): ");
        if (scanf("%d", &temp) != 1) { // if it is not non-numeric or blank then keep going.
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        num += temp;
    } while (temp != 0);

    printf("Sum of all the numbers entered: %d\n", num);    
}

int main() {
    // Exercise - 01: Leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap_year(year))
        printf("%d is a leap year.\n", year); 
    else  
        printf("%d is not a leap year.\n", year);
    
    // Exercise - 02: Sum all the numbers until 0 is pressed
    calculate_sum_until_zero();
    
    // Exercise - 03: Reverse numbers 
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    int reversed_num = reverse_number(num);

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}
