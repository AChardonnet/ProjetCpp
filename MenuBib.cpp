#include <iostream>
#include "Bibliotheque.h"
#include "BD.h"
#include "Roman.h"
#include "Theatre.h"
#include "Album.h"
#include "Recueil.h"
#include "MenuAdherent.cpp"

using namespace std;

void afficherMenuBib() {
    cout << "1. Ajouter un livre" << endl;
    cout << "2. Afficher la bibliothèque" << endl;
    cout << "3. Afficher les livres par catégorie" << endl;
    cout << "4. Supprimer un livre" << endl;
    cout << "5. Rendre tous les livres empruntés" << endl;
    cout << "6. Ajouter un adhérent"<<endl;
    cout << "7. Quitter" << endl;
    cout << "Entrez votre choix : ";
}

int menuBib(Bibliotheque &b1) {
    int choix;
    while (true) {
        system("clear");
        afficherMenuBib();
        cin >> choix;

        if (choix == 1) {
            int typeLivre;
            cout << "Sélectionnez le type de livre : 1. BD 2. Roman 3. Théâtre 4. Album 5.Recueil: ";
            cin >> typeLivre;

            string auteur, titre, editeur, isbn, publicCible;
            cout << "Entrez l'auteur : ";
            cin.ignore();
            getline(cin, auteur);
            cout << "Entrez le titre : ";
            getline(cin, titre);
            cout << "Entrez l'éditeur : ";
            getline(cin, editeur);
            cout << "Entrez l'ISBN : ";
            getline(cin, isbn);
            cout << "Entrez le public ciblé : ";
            getline(cin, publicCible);
            Livre * nouveauLivre;
            if (typeLivre == 1) {
                string dessinateur;
                cout << "Entrez le dessinateur : ";
                getline(cin, dessinateur);
                nouveauLivre = new BD(auteur, titre, editeur, isbn, publicCible, dessinateur);
            } else if (typeLivre == 2) {
                string genre;
                cout << "Entrez le genre : ";
                getline(cin, genre);
                nouveauLivre = new Roman(auteur, titre, editeur, isbn, publicCible, genre);
            } else if (typeLivre == 3) {
                int siecle;
                cout << "Entrez le dessinateur : ";
                cin >> siecle;
                nouveauLivre = new Theatre(auteur, titre, editeur, isbn, publicCible, siecle);
            } else if (typeLivre == 4) {
                string Illustrations;
                cout << "Entrez le type d'illustrations : ";
                getline(cin, Illustrations);
                //nouveauLivre = new Album(auteur, titre, editeur, isbn, publicCible, Illustrations);
            } else if (typeLivre == 5) {
                string indicateur;
                cout << "Entrez le style du recueil : ";
                getline(cin, indicateur);
                nouveauLivre = new Recueil(auteur, titre, editeur, isbn, publicCible, indicateur);
            }

            if (nouveauLivre != nullptr) {
                b1.ajoutLivre(nouveauLivre);
                cout << "Livre ajouté avec succès" << endl;
            } else {
                cout << "Type de livre invalide" << endl;
            }
        } else if (choix == 2) {
            b1.Afficher();
            cin.ignore();
            cin.get();
        } else if (choix == 3) {
            string categorie;
            cout << "Entrez la catégorie : ";
            cin.ignore();
            getline(cin, categorie);
            b1.AfficherCat(categorie);
            cin.get();

        } else if (choix == 4) {
            int id;
            cout << "Entrez l'ID du livre à supprimer : ";
            cin >> id;
            b1.supprimer(id);
        } else if (choix == 5) {
            b1.rendre();
            cout << "Tous les livres empruntés ont été rendus" << endl;
        } else if (choix == 6) {
            string nom, prenom, adresse;
            cout << "Entrez le nom de l'adhérent : ";
            cin.ignore();
            getline(cin, nom);
            cout << "Entrez le prénom de l'adhérent : ";
            getline(cin, prenom);
            cout << "Entrez l'adresse de l'adhérent : ";
            getline(cin, adresse);
            int nbLivresMax;
            cout << "Entrez le nombre maximum de livres empruntables : ";
            cin >> nbLivresMax;

            Adherent *nouvelAdherent = new Adherent(nom, prenom, adresse, b1, nbLivresMax);
        } else if (choix == 7) {
            break;
        } else {
            cout << "Choix invalide ! Veuillez réessayer." << endl;
        }
    }

    return 0;
}