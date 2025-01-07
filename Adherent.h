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
    Livre livres[];

public:
    static int nbTotAdherent;
    Adherent();
};


#endif //ADHERENT_H
