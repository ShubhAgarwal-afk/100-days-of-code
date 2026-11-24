#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[20];
    printf("Enter status: ");
    scanf("%19s", input);

    enum Status status;
    if (strcmp(input, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) status = TIMEOUT;
    else {
        printf("Invalid status");
        return 1;
    }

    switch (status) {
        case SUCCESS: printf("Operation successful");  break;
        case FAILURE: printf("Operation failed");      break;
        case TIMEOUT: printf("Operation timed out");   break;
    }
    return 0;
}