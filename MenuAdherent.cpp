#include <iostream>
#include "Adherent.h"

using namespace std;

void afficherMenuAdherent() {
    cout << "1. Emprunter un livre" << endl;
    cout << "2. Rendre un livre" << endl;
    cout << "3. Quitter" << endl;
    cout << "Entrez votre choix : ";
}

int MenuAdherent(Adherent &adherent) {

    int choix;
    while (true) {
        system("clear");
        afficherMenuAdherent();
        cin >> choix;

        if (choix == 1) {
            system("clear");
            int idLivre;
            cout << "Entrez l'ID du livre à emprunter : ";
            cin >> idLivre;

            try {
                adherent.emprunter(idLivre);
                cout << "Livre emprunté avec succès !" << endl;
                cin.ignore();
                cin.get();
            } catch (const exception &e) {
                cout << "le livre n'a pas pu être emprunté" << endl;
                cout << e.what() << endl;
                cin.ignore();
                cin.get();
            } catch(const char * e){
                cout << "le livre n'a pas pu être emprunté" << endl;
                cout << e << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 2) {
            system("clear");
            int idLivre;
            cout << "Entrez l'ID du livre à rendre : ";
            cin >> idLivre;

            try {
                adherent.rendre(idLivre);
                cout << "Livre rendu avec succès !" << endl;
                cin.ignore();
                cin.get();
            } catch (const exception &e) {
                cout << "le livre n'a pas pu être rendu" << endl;
                cout << e.what() << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 3) {
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