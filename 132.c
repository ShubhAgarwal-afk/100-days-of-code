#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light light = GREEN;

    switch (light) {
        case RED:    printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN:  printf("Go");   break;
    }
    return 0;
}