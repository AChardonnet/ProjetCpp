//
// Created by antoi on 07/01/2025.
//

#include "Livre.h"

#include <iostream>
#include <ostream>

Livre::Livre() {
};

Livre::Livre(string auteur, string titre, string editeur, string ISBN, string publicCible,
             string categorie) {
    id = nbTotLivres + 1;
    nbTotLivres++;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->ISBN = ISBN;
    this->publicCible = publicCible;
    etat = "Disponible";
    this->categorie = categorie;
}

void Livre::setEtat(string etat) {
    if (etat == "Disponible" || etat == "Emprunte") {
        this->etat = etat;
    } else {
        throw "Etat invalide";
    }
}

void Livre::setIdBibOrig(int id) {
    idBibOrig = id;
}

int Livre::getId() {
    return this->id;
}

string Livre::getCategorie() {
    return this->categorie;
}

string Livre::getEtat() {
    return this->etat;
}

int Livre::getIdBibOrig() {
    return this->idBibOrig;
}

void Livre::Afficher() {
    cout << "ID: " << this->id << " Auteur: " << this->auteur << " Titre: " << this->titre << " ISBN: " << this->ISBN <<
            " public Cible: " << this->publicCible << " état:" << this->etat << " Catégorie:" << this->categorie;
}
