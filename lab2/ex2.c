#include <stdio.h>

int main(void) {
    double accumulator;
    double input; 
    char operator;

    printf("Begin Calculations\n");
    printf("PLZ enter the initial value: ");
    scanf("%lf", &accumulator);
    for (;;) {
        printf("Enter an input and an operator: ");
        scanf("%lf %c", &input, &operator);

        switch (operator) {
            case 'S':
                accumulator = input;
                printf("accumulator = %lf", input);
                break;
            case '/':
                if (accumulator == 0) {
                    printf("The dividend can't be 0");
                    break;
                }
                printf("%lf /\n= %lf", accumulator, accumulator /= input);
                break;
            case '-':
                printf("%lf -\n= %lf", accumulator, accumulator -= input);
                break;
            case '+': 
                printf("%lf +\n= %lf", accumulator, accumulator += input);
                break;
            case '*':
                printf("%lf *\n= %lf", accumulator, accumulator *= input);
                break;
            case 'E':
                printf("End of Calculations");
                break;
            default:
                printf("Error, unknow operator");
        }
    }

    return 0;
}