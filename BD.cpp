//
// Created by antoi on 07/01/2025.
//

#include "BD.h"

BD::BD() : Livre() {
}

BD::BD(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
       string dessinateur) : Livre(id, auteur, titre, editeur, ISBN, publicCible, etat) {
    this->dessinateur = dessinateur;
}
