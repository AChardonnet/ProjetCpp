//
// Created by antoi on 07/01/2025.
//

#ifndef THEATRE_H
#define THEATRE_H
#include "Livre.h"


class Theatre : public Livre {
    int siecle;

public:
    Theatre();

    Theatre(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat, int siecle);
};


#endif //THEATRE_H
