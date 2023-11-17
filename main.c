#include<stdio.h>
#include<stdbool.h>
#include<math.h>


void SimpleCalc() {
    printf("\n\n[+] CALCULATOR PLAYGROUND\n\n");

    int num1, num2, solution;
    char operation;
    printf("Enter the two numbers calculation (example: a + b): ");
    scanf("%d %s %d", &num2, &operation, &num1);

    if(operation == '+') {
        solution = num1 + num2;
    }
    if(operation == '-') {
        solution = num2 - num1;
    }
    if(operation == '*') {
        solution = num1 * num2;
    }
    if(operation == '/') {
        solution = num2 / num1;
    }

    printf("\n[\u2713] %d %c %d = %d", num2, operation, num1, solution);
}

void QuadraticCalc() {
    printf("\n\n[+] QUADRATIC CALCULATOR\n\n");

    double coeffX2, coeffX, constCoeff;
    double discriminant, sol1, sol2, realPart, imagPart;
    printf("Write the values of a, b, c in your Quadratic Equation of type ax^2 + bx + c:\n");
    printf("Note: First enter the value of a then b then c, separated by space (ex: 2 3 1)\n");
    printf("Values (a b c): ");
    scanf("%lf %lf %lf", &coeffX2, &coeffX, &constCoeff);

    printf("The given quadratic equation is: %lfx^2 + (%dlf)x + (%lf)\n", coeffX2, coeffX, constCoeff);

    discriminant = coeffX * coeffX - 4*constCoeff*coeffX2;

    // condition for real and different roots
    if (discriminant > 0) {
        sol1 = (-coeffX + sqrt(discriminant)) / (2 * coeffX2);
        sol2 = (-coeffX - sqrt(discriminant)) / (2 * coeffX2);

        printf("\n[\u2713] The roots of the given quadratic equation are: %.2lf & %.2lf", sol1, sol2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        sol1 = -coeffX / (2 * coeffX2);
        printf("\n[\u2713] root1 = root2 = %.2lf;", sol1);
    }

    // if roots are not real
    else {
        realPart = -coeffX / (2 * coeffX2);
        imagPart = sqrt(-discriminant) / (2 * coeffX2);
        printf("\n[\u2713] root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    double x = -((double) coeffX / (double) (2 * coeffX2));
    double y = (double) constCoeff -((double) (coeffX * coeffX) / (double) (4 * coeffX2));

    printf("\n[\u2713] Vertex of parabola made by the graph of equation: (%.2lf, %.2lf)", x, y);
}

void DeterminantCalc() {
    int i, option;
    float sol;
    printf("\n\n[+] DETERMINANT CALCULATOR\n\n");
    printf("\n(Press 1) 2 x 2\n(Press 2) 3 x 3\n\n");
    printf("Enter a number from the above list: ");
    scanf("%d", &option);

    if (option == 1) {
        int determinant[2][2];

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                printf("\nEnter the element at row %d and column %d: ", i, j);
                scanf("%d", &determinant[i][j]);
            }
        }
        sol = determinant[0][0] * determinant[1][1] - determinant[0][1]*determinant[1][0];
    }
    else if (option == 2) {
        int determinant[3][3];

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                printf("\nEnter the element at row %d and column %d: ", i, j);
                scanf("%d", &determinant[i][j]);
            }
        }
        sol = determinant[0][0] * determinant[1][1] - determinant[0][1]*determinant[1][0];
    }


    printf("\n[\u2713] The value of the determinant is: %.2lf", sol);
}

void Setup() {
    int number_fun;
    printf("[?] What do you want to calculate?\n");
    printf("(Press 1) Simple Mathematics\n");
    printf("(Press 2) Solve Quadratic Equation\n");
    printf("(Press 3) Solve Determinants\n\n");

    printf("Enter a number from the above list: ");
    scanf("%d", &number_fun);

    // printf("%d\n", number_fun);
    if (number_fun == 1) {
        SimpleCalc();
    }
    if (number_fun == 2) {
        QuadraticCalc();
    }
    if (number_fun == 3) {
        DeterminantCalc();
    }

    char terminateChar;
    printf("\n\n[?] Terminate the program? (Press y / n) ");
    scanf("%s", &terminateChar);
    // printf("\nTerminate: %c\n", terminateChar);

    if (terminateChar == 'n') {
        printf("\n\n====================\n\n");
        terminateChar = 'y';
        Setup();
    }
}

int main () {
    char logo[] = " __     __     ____    _______   _     _           _____\n"
                  "|  \\   /  |   / _  \\  |__   __| | |   | |         /  ___|\n"
                  "|   \\_/   |  / /__\\ \\    | |    | |___| |   ____  | |\n"
                  "|  |\\_/|  |  |  __  |    | |    |  ___  |  /___/  | |___\n"
                  "|__|   |__|  |_|  |_|    |_|    |_|   |_|         \\_____|\n\n"
    ;
    printf(logo);

    Setup();
    return 0;
}

