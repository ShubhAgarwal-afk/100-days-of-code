#include <stdio.h>

int pos[100001];                  // pos[v] = index of value v, plus 1 (0 = not seen)

int main() {
    int n, target;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        int need = target - nums[i];
        if (need >= 0 && need <= 100000 && pos[need]) {
            printf("%d %d", pos[need] - 1, i);
            return 0;
        }
        pos[nums[i]] = i + 1;     // store after checking, so an element never pairs with itself
    }
    printf("-1 -1");
    return 0;
}