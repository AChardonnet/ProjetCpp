//
// Created by antoi on 07/01/2025.
//

#include "../headers/Roman.h"

#include <iostream>

#include "../headers/Livre.h"


Roman::Roman(): Livre() {
};

Roman::Roman(string auteur, string titre, string editeur, string ISBN, string publicCible,
             string genre): Livre(auteur, titre, editeur, ISBN, publicCible, " Roman") {
    this->genre = genre;
}

void Roman::Afficher() {
    Livre::Afficher();
    cout << " Genre: " << genre << endl;
}
