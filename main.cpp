#include <iostream>

#include "Adherent.h"
#include "Album.h"
#include "BD.h"
#include "Bibliotheque.h"
#include "Recueil.h"
#include "Roman.h"
#include "Theatre.h"

#include "Adherent.cpp"
#include "Album.cpp"
#include "BD.cpp"
#include "Bibliotheque.cpp"
#include "Recueil.cpp"
#include "Roman.cpp"
#include "Theatre.cpp"
#include "Livre.cpp"
#include "MenuBib.cpp"
#include "MenuAdherent.cpp"
#include "chainedList.cpp"
#include "chainedListNode.cpp"

using namespace std;

void afficherMenuPrincipal() {
    cout << "1. Gérer une bibliothèque" << endl;
    cout << "2. Gérer un adhérent" << endl;
    cout << "3. Ajouter une bibliothèque" << endl;
    cout << "4. Ajouter un adhérent" << endl;
    cout << "5. Quitter" << endl;
    cout << "Entrez votre choix : ";
}

int Livre::nbTotLivres = 0;
int Adherent::nbTotAdherent = 0;
int Bibliotheque::nbTotBibliotheques = 0;

int main() {
    chainedList<Bibliotheque*> bibliotheques;
    chainedList<Adherent*> adherents;

    Bibliotheque* b1 = new Bibliotheque();
    b1->setNom("Médiathèque Albert-Camus");
    b1->setAdresse("7 Rue du Village, 91000 Évry-Courcouronnes");
    b1->ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1->ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1->ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1->ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1->ajoutLivre(new Theatre("Molière", "Le Médecin malgré lui", "Larousse", "2035866537", "Tous Publics",17));

    bibliotheques.push(b1);

    Adherent* a1 = new Adherent("Martin", "Pierre", "11 rue de Provence", b1, 30);
    a1->emprunter(1);
    a1->rendre(1);

    adherents.push(a1);

    int choix;
    while (true) {
        system("clear");
        afficherMenuPrincipal();
        cin >> choix;
        if (choix == 1) {
            system("clear");
            int index;
            cout << "Sélectionnez la bibliothèque (index) : "<<endl;
            for (size_t i = 0; i < bibliotheques.size(); ++i) {
                cout << i << ". " << bibliotheques[i]->getNom() << endl;
            }
            cin >> index;
            if (index >= 0 && index < bibliotheques.size()) {
                menuBib(*bibliotheques[index]);
            } else {
                cout << "Index invalide !" << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 2) {
            system("clear");
            int index;
            cout << "Sélectionnez l'adhérent (index) : "<<endl;
            for (size_t i = 0; i < adherents.size(); ++i) {
                cout << i << ". " << adherents[i]->getNom() << " " << adherents[i]->getPrenom() << endl;
            }
            cin >> index;
            if (index >= 0 && index < adherents.size()) {
                MenuAdherent(*adherents[index]);
            } else {
                cout << "Index invalide !" << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 3) {
            system("clear");
            string nom, adresse;
            cout << "Entrez le nom de la bibliothèque : ";
            cin.ignore();
            getline(cin, nom);
            cout << "Entrez l'adresse de la bibliothèque : ";
            getline(cin, adresse);
            Bibliotheque* nouvelleBib = new Bibliotheque();
            nouvelleBib->setNom(nom);
            nouvelleBib->setAdresse(adresse);
            bibliotheques.push(nouvelleBib);
            cout << "Bibliothèque ajoutée avec succès !" << endl;
            cin.get();
        } else if (choix == 4) {
            system("clear");
            string nom, prenom, adresse;
            int index, nbLivresMax;
            cout << "Entrez le nom de l'adhérent : ";
            cin.ignore();
            getline(cin, nom);
            cout << "Entrez le prénom de l'adhérent : ";
            getline(cin, prenom);
            cout << "Entrez l'adresse de l'adhérent : ";
            getline(cin, adresse);
            cout << "Sélectionnez la bibliothèque (index) : "<<endl;
            for (size_t i = 0; i < bibliotheques.size(); ++i) {
                cout << i << ". " << bibliotheques[i]->getNom() << endl;
            }
            cin >> index;
            if (index >= 0 && index < bibliotheques.size()) {
                cout << "Entrez le nombre maximum de livres empruntables : ";
                cin >> nbLivresMax;
                Adherent* nouvelAdherent = new Adherent(nom, prenom, adresse, bibliotheques[index], nbLivresMax);
                adherents.push(nouvelAdherent);
                cout << "Adhérent ajouté avec succès !" << endl;
                cin.ignore();
                cin.get();
            } else {
                cout << "Index de bibliothèque invalide !" << endl;
                cin.ignore();
                cin.get();
            }
        } else if (choix == 5) {
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
