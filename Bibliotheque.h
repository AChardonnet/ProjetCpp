//
// Created by antoi on 07/01/2025.
//

#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <string>

#include "Livre.h"

using namespace std;

class Bibliotheque {
private:
    int id;
    string nom;
    string adresse;
    int nbLivres;
    int nbLivresMax;
    Livre ** livres;

public:
    static int nbTotBibliotheques;
    Bibliotheque();
    void ajoutLivre(Livre*);
    // void ajoutLivres(Livre**);
    void augmenterCapacite();
    void Afficher();
    Livre* trouveLivre(int id);
};


#endif //BIBLIOTHEQUE_H
