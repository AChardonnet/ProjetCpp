//
// Created by antoi on 07/01/2025.
//

#include "Recueil.h"

#include <iostream>

#include "Livre.h"


Recueil::Recueil(): Livre() {
};

Recueil::Recueil(string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
                 string indicateur): Livre(auteur, titre, editeur, ISBN, publicCible, etat, "Recueil") {
    this->indicateur = indicateur;
}

void Recueil::Afficher() {
    cout << "indicateur: " << indicateur << endl;
}
