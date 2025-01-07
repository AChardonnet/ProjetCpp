//
// Created by antoi on 07/01/2025.
//

#include "Roman.h"

#include <iostream>

#include "Livre.h"


Roman::Roman(): Livre() {
};

Roman::Roman(string auteur, string titre, string editeur, string ISBN, string publicCible,
             string genre): Livre(auteur, titre, editeur, ISBN, publicCible, "Roman") {
    this->genre = genre;
}

void Roman::Afficher() {
    cout << "Genre: " << genre << endl;
}
