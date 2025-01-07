//
// Created by antoi on 07/01/2025.
//

#include "Theatre.h"

#include <iostream>
#include <ostream>

#include "Livre.h"


Theatre::Theatre(): Livre() {
};

Theatre::Theatre(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
                 int siecle): Livre(id, auteur, titre, editeur, ISBN, publicCible, etat, "Theatre") {
    this->siecle = siecle;
}

void Theatre::Afficher() {
    cout << "Siècle: " << this->siecle << endl;
}
