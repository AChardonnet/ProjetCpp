//
// Created by antoi on 07/01/2025.
//

#include "../headers/Theatre.h"

#include <iostream>
#include <ostream>

#include "../headers/Livre.h"


Theatre::Theatre(): Livre() {
};

Theatre::Theatre(string auteur, string titre, string editeur, string ISBN, string publicCible,
                 int siecle): Livre(auteur, titre, editeur, ISBN, publicCible, " Theatre") {
    this->siecle = siecle;
}

void Theatre::Afficher() {
    Livre::Afficher();
    cout << " Siècle: " << this->siecle << endl;
}
