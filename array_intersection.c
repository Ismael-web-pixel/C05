#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int set1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }

    scanf("%d", &n2);
    int set2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    printf("Intersection:");
    int first = 1; // pour gérer l’espace

    for (int i = 0; i < n1; i++) {
        // Vérifier si set1[i] est dans set2
        int found_in_set2 = 0;
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                found_in_set2 = 1;
                break;
            }
        }

        // Vérifier si déjà affiché
        int already_printed = 0;
        for (int k = 0; k < i; k++) {
            if (set1[i] == set1[k]) {
                already_printed = 1;
                break;
            }
        }

        if (found_in_set2 && !already_printed) {
            if (first) {
                printf(" %d", set1[i]);
                first = 0;
            } else {
                printf(" %d", set1[i]);
            }
        }
    }

    printf("\n");
    return 0;
}
