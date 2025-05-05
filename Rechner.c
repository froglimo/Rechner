#include <stdio.h>

int main() {
    int f, e;

    printf("Gib die erste ganze Zahl ein: ");
    scanf("%d", &f);

    printf("Gib die zweite ganze Zahl ein: ");
    scanf("%d", &e);
    
    int addieren = f + e;
    int subtrahieren = f - e;
    int multiplizieren = f * e;

    if (e != 0) {
        float dividieren = (float)f / e;
        printf("\nErgebnisse der Berechnungen:\n");
        printf("Addition: %d + %d = %d\n", f, e, addieren);
        printf("Subtraktion: %d - %d = %d\n", f, e, subtrahieren);
        printf("Multiplikation: %d * %d = %d\n", f, e, multiplizieren);
        printf("Division: %d / %d = %.2f\n", f, e, dividieren);
    } else {
        printf("\nErgebnisse der Berechnungen:\n");
        printf("Addition: %d + %d = %d\n", f, e, addieren);
        printf("Subtraktion: %d - %d = %d\n", f, e, subtrahieren);
        printf("Multiplikation: %d * %d = %d\n", f, e, multiplizieren);
        printf("Division: Division durch Null ist nicht erlaubt.\n");
    }

    return 0;
}
