//
// Created by antoi on 07/01/2025.
//

#include "BD.h"

#include <iostream>
#include <ostream>

BD::BD() : Livre() {
}

BD::BD(string auteur, string titre, string editeur, string ISBN, string publicCible,
       string dessinateur) : Livre(auteur, titre, editeur, ISBN, publicCible, "BD") {
    this->dessinateur = dessinateur;
}

void BD::Afficher() {
    Livre::Afficher();
    cout << " dessinateur: " << dessinateur << endl;
}
