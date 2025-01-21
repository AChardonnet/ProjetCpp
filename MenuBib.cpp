#include <iostream>
#include "Bibliotheque.h"
#include "BD.h"
#include "Roman.h"
#include "Theatre.h"
#include "Album.h"

using namespace std;

void afficherMenuBib() {
    cout << "1. Ajouter un livre" << endl;
    cout << "2. Afficher la bibliothèque" << endl;
    cout << "3. Afficher les livres par catégorie" << endl;
    cout << "4. Supprimer un livre" << endl;
    cout << "5. Rendre tous les livres empruntés" << endl;
    cout << "6. Quitter" << endl;
    cout << "Entrez votre choix : ";
}

int menuBib(Bibliotheque &b1) {
    int choix;
    while (true) {
        afficherMenu();
        cin >> choix;

        if (choix == 1) {
            int typeLivre;
            cout << "Sélectionnez le type de livre : 1. BD 2. Roman 3. Théâtre 4. Album : ";
            cin >> typeLivre;

            string auteur, titre, editeur, isbn;
            cout << "Entrez l'auteur : ";
            cin.ignore();
            getline(cin, auteur);
            cout << "Entrez le titre : ";
            getline(cin, titre);
            cout << "Entrez l'éditeur : ";
            getline(cin, editeur);
            cout << "Entrez l'ISBN : ";
            getline(cin, isbn);

            if (typeLivre == 1) {
                nouveauLivre = new BD(auteur, titre, editeur, isbn);
            } else if (typeLivre == 2) {
                nouveauLivre = new Roman(auteur, titre, editeur, isbn);
            } else if (typeLivre == 3) {
                nouveauLivre = new Theatre(auteur, titre, editeur, isbn);
            } else if (typeLivre == 4) {
                nouveauLivre = new Album(auteur, titre, editeur, isbn);
            }

            if (nouveauLivre != nullptr) {
                b1.ajoutLivre(nouveauLivre);
                cout << "Livre ajouté avec succès !" << endl;
            } else {
                cout << "Type de livre invalide !" << endl;
            }
        } else if (choix == 2) {
            b1.Afficher();
        } else if (choix == 3) {
            string categorie;
            cout << "Entrez la catégorie : ";
            cin.ignore();
            getline(cin, categorie);
            b1.AfficherCat(categorie);
        } else if (choix == 4) {
            int id;
            cout << "Entrez l'ID du livre à supprimer : ";
            cin >> id;
            b1.supprimer(id);
        } else if (choix == 5) {
            b1.rendre();
            cout << "Tous les livres empruntés ont été rendus !" << endl;
        } else if (choix == 6) {
            break;
        } else {
            cout << "Choix invalide ! Veuillez réessayer." << endl;
        }
    }

    return 0;
}