//
// Created by antoi on 07/01/2025.
//

#include "Livre.h"

#include <iostream>
#include <ostream>

Livre::Livre() {
};

Livre::Livre(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat) {
    this->id = id;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->ISBN = ISBN;
    this->publicCible = publicCible;
    this->etat = etat;
}

void Livre::setEtat(string etat) {
    if (etat == "Disponible" || etat == "Emprunte") {
        this->etat = etat;
    } else {
        throw "Etat invalide";
    }
}

int Livre::getId() {
    return this->id;
}

string Livre::getEtat() {
    return this->etat;
}

void Livre::Afficher() {
    cout << "ID: " << this->id << " Auteur: " << this->auteur << " Titre: " << this->titre << "ISBN: " << this->ISBN <<
        "public Cible: " << this->publicCible << "état:" << this->etat << endl;
}
