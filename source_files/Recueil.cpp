//
// Created by antoi on 07/01/2025.
//

#include "../headers/Recueil.h"

#include <iostream>

#include "../headers/Livre.h"


Recueil::Recueil(): Livre() {
};

Recueil::Recueil(string auteur, string titre, string editeur, string ISBN, string publicCible,
                 string indicateur): Livre(auteur, titre, editeur, ISBN, publicCible, " Recueil") {
    this->indicateur = indicateur;
}

void Recueil::Afficher() {
    Livre::Afficher();
    cout << " indicateur: " << indicateur << endl;
}