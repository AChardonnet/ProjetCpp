//
// Created by antoi on 07/01/2025.
//

#include "Album.h"

#include <iostream>

Album::Album() : Livre() {
}

Album::Album(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
             string illustrations) : Livre(id, auteur, titre, editeur, ISBN, publicCible, etat, "Album") {
    this->illustrations = illustrations;
}

void Album::Afficher() {
    Livre::Afficher();
    cout << "Illustrations: " << illustrations << endl;
}
