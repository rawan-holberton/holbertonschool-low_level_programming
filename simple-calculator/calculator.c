#include <stdio.h>

/**
 * show_menu - Displays the calculator menu
 */
void show_menu(void)
{
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
}

/**
 * main - Runs a simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
    int choice;
    float a, b, result;

    while (1)
    {
        show_menu();

        /* Ask user for choice */
        printf("Choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice!\n");
            while (getchar() != '\n') /* Clear invalid input */
                ;
            continue;
        }

        /* Quit option */
        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        /* For valid operations */
        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);

            switch (choice)
            {
                case 1: /* Addition */
                    result = a + b;
                    printf("Result: %.2f\n", result);
                    break;
                case 2: /* Subtraction */
                    result = a - b;
                    printf("Result: %.2f\n", result);
                    break;
                case 3: /* Multiplication */
                    result = a * b;
                    printf("Result: %.2f\n", result);
                    break;
                case 4: /* Division */
                    if (b == 0)
                        printf("Error: division by zero!\n");
                    else
                    {
                        result = a / b;
                        printf("Result: %.2f\n", result);
                    }
                    break;
            }
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}