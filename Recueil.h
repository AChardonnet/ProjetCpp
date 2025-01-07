//
// Created by antoi on 07/01/2025.
//

#ifndef RECUEIL_H
#define RECUEIL_H
#include "Livre.h"


class Recueil : public Livre {
    string indicateur;

public:
    Recueil();

    Recueil(string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
            string indicateur);

    void Afficher();
};


#endif //RECUEIL_H
