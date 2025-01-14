//
// Created by antoi on 07/01/2025.
//

#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>
using namespace std;

Bibliotheque::Bibliotheque() {
    id = nbTotBibliotheques + 1;
    nbTotBibliotheques++;
    nom = "";
    adresse = "";
    nbLivres = 0;
    nbLivresMax = 100;
    livres = new Livre *[100];
}

void Bibliotheque::augmenterCapacite() {
    Livre **var = new Livre *[nbLivresMax * 2];
    for (int i = 0; i < nbLivresMax; i++) {
        var[i] = livres[i];
    }
    nbLivresMax *= 2;
    livres = var;
}

void Bibliotheque::ajoutLivre(Livre *livre) {
    if (nbLivres > nbLivresMax) {
        augmenterCapacite();
    }
    livres[nbLivres] = livre;
    nbLivres++;
}

void Bibliotheque::Afficher() {
    cout << nom << endl;
    cout << adresse << endl;
    cout << "--------------------------------------------------------" << endl;
    for (int i = 0; i < nbLivres; i++) {
        livres[i]->Afficher();
        cout << "--------------------------------------------------------" << endl;
    }
}

void Bibliotheque::AfficherCat(string cat) {
    cout << cat << endl;
    for (int i = 0; i < nbLivres; i++) {
        if (livres[i]->getCategorie() == cat) {
            livres[i]->Afficher();
        }
    }
}

Livre *Bibliotheque::trouveLivre(int id) {
    for (int i = 0; i < nbLivres; i++) {
        int id_livre = livres[i]->getId();
        int idBibOrig = livres[i]->getIdBibOrig();
        if (id_livre == id && (idBibOrig == 0 or idBibOrig != this->id)) {
            return livres[i];
        }
    }
    return nullptr;
}

Livre *Bibliotheque::trouveLivre(string ISBN) {
    for (int i = 0; i < nbLivres; i++) {
        int id_livre = livres[i]->getId();
        string etat = livres[i]->getEtat();
        int idBibOrig = livres[i]->getIdBibOrig();
        if (id_livre == id && etat == "disponible" && (idBibOrig == 0 or idBibOrig != this->id)) {
            return livres[i];
        }
    }
    return nullptr;
}

void Bibliotheque::demander(string ISBN, Bibliotheque *bib) {
    Livre *livre = bib->trouveLivre(ISBN);
    if (livre != nullptr) {
        if (livre->getIdBibOrig() == 0) {
            livre->setIdBibOrig(bib->id);
        }
        ajoutLivre(livre);
    }
}

void Bibliotheque::supprimer(int id) {
    int ind = -1;
    for (int i = 0; i < nbLivres; i++) {
        int id_livre = livres[i]->getId();
        if (id_livre == id) {
            ind = i;
            break;
        }
    }
    if (ind >= 0) {
        nbLivres--;
        for (int i = ind; i < nbLivres; i++) {
            livres[i + 1] = livres[i];
        }
    }
}

void Bibliotheque::rendre() {
    int i = 0;
    while (i < nbLivres) {
        if (livres[i]->getIdBibOrig() != 0) {
            livres[i]->setIdBibOrig(0);
            supprimer(livres[i]->getId());
        }
        i++;
    }
}

void Bibliotheque::setNom(string nom) {
    this->nom = nom;
}

void Bibliotheque::setAdresse(string adresse) {
    this->adresse = adresse;
}
