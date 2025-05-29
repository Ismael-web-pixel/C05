#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int tableau[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Sauvegarder le premier élément
    int premier = tableau[0];

    // Décaler tous les éléments vers la gauche
    for (int i = 0; i < n - 1; i++) {
        tableau[i] = tableau[i + 1];
    }

    // Placer le premier élément à la fin
    tableau[n - 1] = premier;

    // Affichage du tableau après rotation
    printf("Tableau après rotation : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
