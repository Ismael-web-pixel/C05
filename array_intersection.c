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
