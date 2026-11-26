#include <stdio.h>

enum Letter { A = 10, B, C };

int main() {
    const char *names[] = { "A", "B", "C" };

    for (int v = A; v <= C; v++) {
        printf("%s=%d", names[v - A], v);
        if (v < C) printf("\n");
    }
    return 0;
}