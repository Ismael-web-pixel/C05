#include <stdio.h>

int main() {
    int n1, n2;

    // Lire n1 et n2 dans un seul scanf
    scanf("%d %d", &n1, &n2);

    int set1[n1], set2[n2];

    // Lire les éléments de set1
    for (int i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }

    // Lire les éléments de set2
    for (int i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    printf("Intersection : ");
    int first = 1;

    for (int i = 0; i < n1; i++) {
        // Vérifie si set1[i] est un doublon dans set1
        int duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (set1[i] == set1[k]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) continue;

        // Vérifie si set1[i] existe dans set2
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                printf("%s%d", first ? "" : " ", set1[i]);
                first = 0;
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
