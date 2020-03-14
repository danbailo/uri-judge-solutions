#include <stdio.h>

int main() {
    int landscapes, curr, prev, pattern = 1, peak;

    scanf("%d",&landscapes);
    if (landscapes == 1) {
        scanf("%d",&curr);
        printf("%d\n", pattern);
    } else if (landscapes == 2) {
        scanf("%d",&prev);
        scanf("%d",&curr);
        printf("%d\n", !(curr == prev));
    } else {
        scanf("%d",&prev);
        scanf("%d",&curr);
        landscapes -= 2;
        peak = curr > prev;
        do {
            prev = curr;
            scanf("%d",&curr);
            landscapes--;
            if (pattern) {
                if (peak) {
                    pattern = curr < prev;
                    peak = 0;
                } else {
                    pattern = curr > prev;
                    peak = 1;
                }
            }
        } while (landscapes > 0);
        printf("%d\n",pattern);
    }
    return 0;
}