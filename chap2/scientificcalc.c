#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Define PI if not available
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#define MAX_HISTORY 100

// ---------- FUNCTION PROTOTYPES ----------
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double num);
double sine(double degrees);
double cosine(double degrees);
double tangent(double degrees);

void saveHistory(char expr[], double result);
void showHistory();
void clearHistory();

// ---------- STRUCTURE ----------
typedef struct {
    char expression[100];
    double result;
} History;

History historyArray[MAX_HISTORY];
int historyCount = 0;

// ---------- FUNCTION DEFINITIONS ----------

// Basic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

// Advanced operations
double power(double base, double exponent) { return pow(base, exponent); }
double squareRoot(double num) {
    if (num < 0) {
        printf("Error: Cannot calculate square root of negative number!\n");
        return 0;
    }
    return sqrt(num);
}

// Trigonometric functions
double sine(double degrees) { return sin(degrees * M_PI / 180); }
double cosine(double degrees) { return cos(degrees * M_PI / 180); }
double tangent(double degrees) { return tan(degrees * M_PI / 180); }

// ---------- HISTORY FUNCTIONS ----------
void saveHistory(char expr[], double result) {
    if (historyCount < MAX_HISTORY) {
        strcpy(historyArray[historyCount].expression, expr);
        historyArray[historyCount].result = result;
        historyCount++;
    } else {
        printf("History is full!\n");
    }
}

void showHistory() {
    if (historyCount == 0) {
        printf("\nNo history to display!\n");
        return;
    }

    printf("\n===== CALCULATION HISTORY =====\n");
    for (int i = 0; i < historyCount; i++) {
        printf("%d. %s = %.2lf\n", i + 1,
               historyArray[i].expression,
               historyArray[i].result);
    }
    printf("================================\n");
}

void clearHistory() {
    historyCount = 0;
    printf("History cleared!\n");
}

// ---------- MAIN FUNCTION ----------
int main() {
    int choice;
    double num1, num2, res;
    char expr[100];

    while (1) {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Power\n6. Square Root\n7. Trigonometric Functions\n");
        printf("8. Show History\n9. Clear History\n10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                res = add(num1, num2);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "%.2lf + %.2lf", num1, num2);
                saveHistory(expr, res);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                res = subtract(num1, num2);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "%.2lf - %.2lf", num1, num2);
                saveHistory(expr, res);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                res = multiply(num1, num2);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "%.2lf * %.2lf", num1, num2);
                saveHistory(expr, res);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                res = divide(num1, num2);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "%.2lf / %.2lf", num1, num2);
                saveHistory(expr, res);
                break;

            case 5:
                printf("Enter base and power: ");
                scanf("%lf %lf", &num1, &num2);
                res = power(num1, num2);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "%.2lf ^ %.2lf", num1, num2);
                saveHistory(expr, res);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &num1);
                res = squareRoot(num1);
                printf("Result = %.2lf\n", res);
                sprintf(expr, "sqrt(%.2lf)", num1);
                saveHistory(expr, res);
                break;

            case 7: {
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Choose function: 1. sin  2. cos  3. tan : ");
                int tChoice;
                scanf("%d", &tChoice);

                if (tChoice == 1) {
                    res = sine(num1);
                    sprintf(expr, "sin(%.2lf)", num1);
                } else if (tChoice == 2) {
                    res = cosine(num1);
                    sprintf(expr, "cos(%.2lf)", num1);
                } else if (tChoice == 3) {
                    res = tangent(num1);
                    sprintf(expr, "tan(%.2lf)", num1);
                } else {
                    printf("Invalid choice!\n");
                    break;
                }

                printf("Result = %.2lf\n", res);
                saveHistory(expr, res);
                break;
            }

            case 8: showHistory(); break;
            case 9: clearHistory(); break;
            case 10:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
