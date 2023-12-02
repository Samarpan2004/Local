#include <stdio.h>

// Function to calculate the factorial of a number
int calculateFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * calculateFactorial(number - 1);
    }
}

// Function to calculate the sum of the series
double calculateSeriesSum(int n) {
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / calculateFactorial(i);
    }

    return sum;
}

int main() {
    int user_input;

    // Taking user input
    printf("Enter the value of n: ");
    scanf("%d", &user_input);

    // Calculating the sum of the series and printing the result
    printf("Sum of the series: %lf\n", calculateSeriesSum(user_input));

    return 0;
}
