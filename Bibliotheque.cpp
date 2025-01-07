//
// Created by antoi on 07/01/2025.
//

#include "Bibliotheque.h"

Bibliotheque::Bibliotheque() {
    id = nbTotBibliotheques+1;
    nbTotBibliotheques++;
    nom = "";
    adresse = "";
    nbLivres = 0;
    nbLivresMax = 0;
}
