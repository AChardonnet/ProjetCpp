//
// Created by antoi on 07/01/2025.
//

#include "Livre.h"

Livre::Livre() {
};

Livre::Livre(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat) {
    this->id = id;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->ISBN = ISBN;
    this->publicCible = publicCible;
    this->etat = etat;
}
