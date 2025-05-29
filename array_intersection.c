#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int *set1 = malloc(n1 * sizeof(int));
    if (set1 == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return 1;
    }

    for (int i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }

    scanf("%d", &n2);
    int *set2 = malloc(n2 * sizeof(int));
    if (set2 == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        free(set1);
        return 1;
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    printf("Intersection :");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                printf(" %d", set1[i]);
                break;
            }
        }
    }
    printf("\n");

    free(set1);
    free(set2);

    return 0;
}


/* 
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

    printf("Intersection :");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                printf(" %d", set1[i]);
                break; // pour éviter les doublons
            }
        }
    }
    printf("\n");

    return 0;
}
    */
