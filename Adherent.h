//
// Created by antoi on 07/01/2025.
//

#ifndef ADHERENT_H
#define ADHERENT_H
#include <string>

#include "Bibliotheque.h"
#include "Livre.h"

using namespace std;

class Adherent {
private:
    int id;
    string nom;
    string prenom;
    string adresse;
    Bibliotheque *bibliotheque;
    int nbLivres;
    int nbLivresMax;
    Livre **livres;

    void augmenterCapacite(int capacite);

public:
    static int nbTotAdherent;

    Adherent();

    Adherent(string nom, string prenom, string adresse, Bibliotheque *bibliotheque, int nbLivresMax);

    void emprunter(int idLivre);

    void rendre(int idLivre);

    int trouveLivre(int idLivre);
};


#endif //ADHERENT_H
