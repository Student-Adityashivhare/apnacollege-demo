#include <stdio.h>

int main(){
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n[1] Addition\n[2] Multiplication\n[3] Subtraction\n[4] Division\n[5] Modulus\n");
    printf("Enter your choice: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '1':
        printf("Addition of two numbers is %d\n", a + b);
        break;
    case '2':
        printf("Multiplication of two numbers is %d\n", a * b);
        break;
    case '3':
        printf("Subtraction of two numbers is %d\n", a - b);
        break;
    case '4':
        if (b == 0)
            printf("Division by zero is not allowed.\n");
        else
            printf("Division of two numbers is %d\n", a / b);
        break;
    case '5':
        if (b == 0)
            printf("Modulus by zero is not allowed.\n");
        else
            printf("Modulus of two numbers is %d\n", a % b);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}   