//
// Created by antoi on 07/01/2025.
//

#include "Adherent.h"

void Adherent::augmenterCapacite(int capacite) {
    if (capacite < 1 || capacite < nbLivresMax) {
        throw "Capacite is out of range";
    } else {
        Livre **L = new Livre *[capacite];
        for (int i = 0; i < nbLivresMax - 1; i++) {
            L[i] = livres[i];
        }
        livres = L;
        nbLivresMax = capacite;
    }
}

Adherent::Adherent() {
    id = nbTotAdherent + 1;
    nbTotAdherent++;
    nom = "";
    prenom = "";
    adresse = "";
    bibliotheque = nullptr;
    nbLivres = 0;
    nbLivresMax = 0;
    livres = nullptr;
}

Adherent::Adherent(int id, string nom, string prenom, string adresse, Bibliotheque *bibliotheque, int nbLivresMax) {
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->bibliotheque = bibliotheque;
    this->nbLivresMax = nbLivresMax;
    nbLivres = 0;
    livres = new Livre *[nbLivresMax];
}

void Adherent::emprunter(int idLivre) {
    if (nbLivres >= nbLivresMax) {
        throw "Trop de livres sont empruntés";
    } else {
        Livre *livre = bibliotheque->trouveLivre(idLivre);
        if (livre == nullptr) {
            throw "Le livre n'existe pas";
        } else {
            if (livre->getEtat() != "Disponible") {
                throw "Le livre est déjà emprunté";
            } else {
                livres[nbLivres] = livre;
                nbLivres++;
                livre->setEtat("Emprunte");
            }
        }
    }
}

void Adherent::rendre(int idLivre) {
    int index = trouveLivre(idLivre);
    if (index == -1) {
        throw "Le livre n'est pas emprunté par cet utilisateur";
    } else {
        livres[index]->setEtat("Disponible");
        livres[index] = nullptr;
    }
}

int Adherent::trouveLivre(int idLivre) {
    for (int i = 0; i < nbLivres; i++) {
        int id = livres[i]->getId();
        if (id == idLivre) {
            return i;
        }
    }
    return -1;
}
