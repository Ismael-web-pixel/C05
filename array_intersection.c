#include <stdio.h>
#include <stdbool.h>

// Vérifie si un élément est déjà dans un tableau
bool existeDeja(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return true;
        }
    }
    return false;
}

void afficherCommuns(int t1[], int taille1, int t2[], int taille2) {
    int communs[taille1 < taille2 ? taille1 : taille2]; // tableau temporaire
    int tailleCommuns = 0;

    for (int i = 0; i < taille1; i++) {
        for (int j = 0; j < taille2; j++) {
            if (t1[i] == t2[j]) {
                // éviter les doublons
                if (!existeDeja(communs, tailleCommuns, t1[i])) {
                    communs[tailleCommuns++] = t1[i];
                }
                break;
            }
        }
    }

    printf("Éléments communs : ");
    for (int i = 0; i < tailleCommuns; i++) {
        printf("%d ", communs[i]);
    }
    printf("\n");
}

int main() {
    int t1[] = {1, 2, 3, 4, 5};
    int t2[] = {3, 4, 4, 6, 7};

    int taille1 = sizeof(t1) / sizeof(t1[0]);
    int taille2 = sizeof(t2) / sizeof(t2[0]);

    afficherCommuns(t1, taille1, t2, taille2);

    return 0;
}
