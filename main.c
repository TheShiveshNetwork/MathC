#include<stdio.h>
#include<stdbool.h>

// int reRun(bool terminate) {
//     if (!terminate) {
//         Setup();
//     } else {
//         return 0;
//     }
// }

void SimpleCalc() {
    printf("This is simple calc!\n");
}

void QuadraticCalc() {
    printf("This is quadratic calc!\n");
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
    printf("\n[?] Terminate the program? (Press y / n) ");
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

