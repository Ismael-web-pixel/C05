#include <stdio.h>

int main() {
    int n;


    scanf("%d", &n);

    int tab[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Initialisation du minimum avec le premier élément
    int min = tab[0];

    // Balayage pour trouver le minimum
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i]; // Mise à jour du minimum
        }
    }

    // Affichage du résultat
    printf("Le minimum est : %d\n", min);

    return 0;
}
