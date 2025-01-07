//
// Created by antoi on 07/01/2025.
//

#include "Adherent.h"

Adherent::Adherent() {
    id = nbTotAdherent+1;
    nbTotAdherent++;
    nom = "";
    prenom = "";
    adresse = "";
    bibliotheque = nullptr;
    nbLivres = 0;
    nbLivresMax = 0;
}
