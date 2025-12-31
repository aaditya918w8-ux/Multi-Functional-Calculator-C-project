#include <stdio.h>
#include <math.h>

double add(double a, double b){ return a + b; }
double subtract(double a, double b){ return a - b; }
double multiply(double a, double b){ return a * b; }
double divide(double a, double b){ return a / b; }
double squareRoot(double a){ return sqrt(a); }
double power(double a, double b){ return pow(a, b); }

int main(){
    int choice;
    double x, y;

    do{
        printf("\n--- Multi-Functional Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Power\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &x);
                printf("Enter second number: ");
                scanf("%lf", &y);
                printf("Result: %.2lf\n", add(x, y));
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%lf", &x);
                printf("Enter second number: ");
                scanf("%lf", &y);
                printf("Result: %.2lf\n", subtract(x, y));
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%lf", &x);
                printf("Enter second number: ");
                scanf("%lf", &y);
                printf("Result: %.2lf\n", multiply(x, y));
                break;

            case 4:
                printf("Enter dividend: ");
                scanf("%lf", &x);
                printf("Enter divisor: ");
                scanf("%lf", &y);
                printf("Result: %.2lf\n", divide(x, y));
                break;

            case 5:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("Result: %.2lf\n", squareRoot(x));
                break;

            case 6:
                printf("Enter base: ");
                scanf("%lf", &x);
                printf("Enter power: ");
                scanf("%lf", &y);
                printf("Result: %.2lf\n", power(x, y));
                break;

            case 0:
                printf("Calculator Closed\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(choice != 0);

    return 0;
}