//
// Created by antoi on 07/01/2025.
//

#ifndef RECUEIL_H
#define RECUEIL_H
#include "Livre.h"


class Recueil : public Livre {
    bool prose;
    bool vers;

public:
    Recueil();

    Recueil(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat, bool prose,
            bool vers);
};


#endif //RECUEIL_H
