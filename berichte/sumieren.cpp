#include <stdio.h>
int main() {
    int n = 0;
    int anzahl = 0;
    int y = 0;
    scanf("%d", &anzahl);
    for (int i = 0; i < anzahl; i++) {
        scanf("%d", &y);
        n = n + y;
    }
    printf("%d", n);
    return 0;
}