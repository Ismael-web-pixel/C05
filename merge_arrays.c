#include <stdio.h>

int main() {
    int n1, n2;

    // Taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];


    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Taille du deuxième tableau
    scanf("%d", &n2);
    int tab2[n2];


    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Création du tableau fusionné
    int tab_fusion[n1 + n2];

    // Copier les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        tab_fusion[i] = tab1[i];
    }

    // Copier les éléments du deuxième tableau
    for (int i = 0; i < n2; i++) {
        tab_fusion[n1 + i] = tab2[i];
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", tab_fusion[i]);
    }
    printf("\n");

    return 0;
}
