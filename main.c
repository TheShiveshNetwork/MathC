#include<stdio.h>
#include<stdbool.h>


void SimpleCalc() {
    printf("\n\n[+] CALCULATOR PLAYGROUND\n\n");
}

void QuadraticCalc() {
    printf("\n\n[+] QUADRATIC CALCULATOR\n\n");

    int coeffX2, coeffX, constCoeff;
    int sol1, sol2;
    printf("Write the values of a, b, c in your Quadratic Equation of type ax^2 + bx + c:\n");
    printf("Note: First enter the value of a then b then c, separated by space (ex: 2 3 1)\n");
    printf("Values (a b c): ");
    scanf("%d %d %d", &coeffX2, &coeffX, &constCoeff);

    printf("The given quadratic equation is: %dx^2 + (%d)x + (%d)\n", coeffX2, coeffX, constCoeff);

    sol1 = (-coeffX + (coeffX^2 - 4*coeffX2*coeffX)^(1/2)) / 2*coeffX2;
    sol2 = (-coeffX - (coeffX^2 - 4*coeffX2*coeffX)^(1/2)) / 2*coeffX2;

    printf("\n[\u2713] The roots of the given quadratic equation are: %d & %d", sol1, sol2);
}

void Setup() {
    int number_fun;
    printf("[?] What do you want to calculate?\n");
    printf("(Press 1) Simple Mathematics\n");
    printf("(Press 2) Solve Quadratic Equation\n\n");

    printf("Enter a number from the above list: ");
    scanf("%d", &number_fun);

    // printf("%d\n", number_fun);
    if (number_fun == 1) {
        SimpleCalc();
    }
    if (number_fun == 2) {
        QuadraticCalc();
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

