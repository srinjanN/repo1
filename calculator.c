//code by Srinjan
//smart multi functional calculator

#include <stdio.h>
#include <math.h>

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return -1; // Returning -1 to indicate an error
    }
}

// Function to calculate square root
double squareRoot(double a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        printf("Error: Cannot calculate square root of a negative number\n");
        return -1; // Returning -1 to indicate an error
    }
}

// Function to calculate exponentiation (a^b)
double exponentiation(double a, double b) {
    return pow(a, b);
}

// Function to calculate factorial
int factorial(int n) {
    if (n <= 0) {
        printf("Error: Factorial is not defined for negative numbers\n");
        return -1; // Returning -1 to indicate an error
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }

}

// Function to find sine of a number
double sine(double a) {
    return sin(a*3.14159/180);
}

// Function to find cosec of a number
double cosec(double a) {
    return cos(a*3.14159/180);
}

// Function to find tangent of a number
double tangent(double a) {
    return tan(a*3.14159/180);
}

// Function to find cube root
/*double cube(double a){
    if(a>=0)
    {
        return pow(a,3);
    }
    else{
        printf("Error: Cannot calculate square root of a negative number\n");
        return -1; // Returning -1 to indicate an error
    }
}*/

int main() {
    int choice;
    double a, b;

    while (1) {
        printf("\n");
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("6. Square Root\n");
        printf("7. Factorial\n");
        printf("8. Sin\n");
        printf("9. Cos\n");
        printf("10. Tan\n");
        printf("11. Cosec\n");
        printf("12. Sec\n");
        printf("13. Cot\n");
        printf("14. Logarithm (base 10)\n");
        printf("15. Natural Logarithm (base e)\n");
        printf("16. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 16) {
            break; // Exit the loop if the user chooses to exit
        }

        if (choice >= 1 && choice < 6) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        } else if (6<=choice < 16) {
            printf("Enter a number: ");
            scanf("%lf", &a);
        }

        switch (choice) {
            case 1:
                printf("Result: %lf\n", add(a, b));
                break;
            case 2:
                printf("Result: %lf\n", subtract(a, b));
                break;
            case 3:
                printf("Result: %lf\n", multiply(a, b));
                break;
            case 4:
                printf("Result: %lf\n", divide(a, b));
                break;
            case 5:
                printf("Result: %lf\n",exponentiation(a, b) );
                break;
            case 6:
                printf("Result: %lf\n", squareRoot(a));
                break;
            case 7:
                printf("Result: %d\n", factorial((int)a));
                break;
            case 8:
                printf("Result: %lf\n", sine(a));
                break;
            case 9:
                printf("Result: %lf\n", cosec(a));
                break;
            case 10:
                printf("Result: %lf\n", tangent(a));
                break;
            case 11:
                printf("Result: %lf\n", (1/sine(a)));
                break;
            case 12:
                printf("Result: %lf\n", (1/cosec(a)));
                break;
            case 13:
                printf("Result: %lf\n", (1/tangent(a)));
                break;
            case 14:
                printf("Result: %lf\n", log10(a));
                break;
            case 15:
                printf("Result: %lf\n", log(a));
                break;
            
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
