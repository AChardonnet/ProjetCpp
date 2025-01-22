#include <iostream>
#include "../headers/Bibliotheque.h"
#include "../headers/BD.h"
#include "../headers/Roman.h"
#include "../headers/Theatre.h"
#include "../headers/Album.h"
#include "../headers/Recueil.h"
#include "../headers/chainedList.h"

using namespace std;

void afficherMenuBib() {
    cout << "1. Ajouter un livre" << endl;
    cout << "2. Afficher la bibliothèque" << endl;
    cout << "3. Afficher les livres par catégorie" << endl;
    cout << "4. Supprimer un livre" << endl;
    cout << "5. Rendre tous les livres empruntés" << endl;
    cout << "6. Demander un livre"<<endl;
    cout << "7. Retour" << endl;
    cout << "Entrez votre choix : ";
}

int menuBib(Bibliotheque &b1, chainedList<Bibliotheque*> bibliotheques) {
    int choix;
    while (true) {
        system("clear");
        afficherMenuBib();
        cin >> choix;

        if (choix == 1) {
            system("clear");
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
                cout << "Entrez le siècle : ";
                cin >> siecle;
                nouveauLivre = new Theatre(auteur, titre, editeur, isbn, publicCible, siecle);
            } else if (typeLivre == 4) {
                string Illustrations;
                cout << "Entrez le type d'illustrations : ";
                getline(cin, Illustrations);
                nouveauLivre = new Album(auteur, titre, editeur, isbn, publicCible, Illustrations);
            } else if (typeLivre == 5) {
                string indicateur;
                cout << "Entrez le style du recueil : ";
                getline(cin, indicateur);
                nouveauLivre = new Recueil(auteur, titre, editeur, isbn, publicCible, indicateur);
            }
            if (nouveauLivre != nullptr) {
                b1.ajoutLivre(nouveauLivre);
                cout << "Livre ajouté avec succès" << endl;
                cin.clear();
                cin.get();
            } else {
                cout << "Type de livre invalide" << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 2) {
            system("clear");
            b1.Afficher();
            cin.ignore();
            cin.get();
        } else if (choix == 3) {
            system("clear");
            string categorie;
            cout << "Entrez la catégorie : ";
            cin.ignore();
            getline(cin, categorie);
            b1.AfficherCat(categorie);
            cin.get();

        } else if (choix == 4) {
            system("clear");
            int id;
            cout << "Entrez l'ID du livre à supprimer : ";
            cin >> id;
            b1.supprimer(id);
        } else if (choix == 5) {
            system("clear");
            b1.rendre();
            cout << "Tous les livres empruntés ont été rendus" << endl;
            cin.ignore();
            cin.get();
        } else if (choix == 6) {
            system("clear");
            string ISBN;
            cout << "Entrez l'ISBN du livre à demander : ";
            cin.ignore();
            getline(cin, ISBN);
            int index;
            cout << "Sélectionnez la bibliothèque (index) : "<<endl;
            for (int i = 0; i < bibliotheques.size(); ++i) {
                cout << i << ". " << bibliotheques[i]->getNom() << endl;
            }
            cin >> index;
            if (index >= 0 && index < bibliotheques.size() && bibliotheques[index]!=&b1) {
                b1.demander(ISBN, bibliotheques[index]);
            } else {
                cout << "Index invalide !" << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 7) {
            break;
        } else {
            cout << "Choix invalide ! Veuillez réessayer." << endl;
            cin.clear();
            cin.ignore(2, '\n');
            cin.get();
        }
    }

    return 0;
}