#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    printf("Enter operation and two numbers: ");
    scanf("%19s %d %d", op, &a, &b);

    enum Menu choice;
    if (strcmp(op, "ADD") == 0) choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0) choice = MULTIPLY;
    else {
        printf("Invalid operation");
        return 1;
    }

    switch (choice) {
        case ADD:      printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }
    return 0;
}