


    /*🔸 Explication
tableau[] : un tableau d'entiers.

taille : calcul de la taille du tableau.

element : l’élément dont on cherche la fréquence (ici, 3).

Une boucle for parcourt le tableau.

À chaque fois que l’élément est trouvé, on incrémente frequence.
#include <stdio.h>

int main() {
    int tableau[] = {1, 4, 2, 4, 6, 4, 7};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int cible = 4; // L'élément à rechercher
    int compteur = 0; // Initialisation du compteur

    // 🔁 Balayage du tableau
    for (int i = 0; i < taille; i++) {
        // ✅ Condition : si l'élément correspond à la cible
        if (tableau[i] == cible) {
            compteur++; // 🔢 Compteur conditionnel
        }
    }

    printf("L'élément %d apparaît %d fois dans le tableau.\n", cible, compteur);

    return 0;
}
*/
