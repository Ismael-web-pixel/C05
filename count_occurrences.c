#include <stdio.h>

int main() {
    int n, element, compteur = 0;

   
    scanf("%d", &n);

    int tab[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

   
    scanf("%d", &element);

    // Balayage + compteur conditionnel
    for (int i = 0; i < n; i++) {
        if (tab[i] == element) {
            compteur++;
        }
    }

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", element, compteur);

    return 0;
}



    /*🔸 Explication
tableau[] : un tableau d'entiers.

taille : calcul de la taille du tableau.

element : l’élément dont on cherche la fréquence (ici, 3).

Une boucle for parcourt le tableau.
*/
