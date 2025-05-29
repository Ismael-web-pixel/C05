#include <stdio.h>

int trouverMinimum(int tab[], int taille) {
    int min = tab[0];  // On suppose que le premier est le plus petit

    for (int i = 1; i < taille; i++) {
        if (tab[i] < min) {
            min = tab[i];  // On met à jour si on trouve plus petit
        }
    }

    return min;
}

int main() {
    int tableau[] = {8, 3, 12, 5, 1, 9};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int min = trouverMinimum(tableau, taille);

    printf("Le minimum est : %d\n", min);

    return 0;
}
