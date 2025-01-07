//
// Created by antoi on 07/01/2025.
//

#ifndef ROMAN_H
#define ROMAN_H
#include "Livre.h"


class Roman : public Livre {
    string genre;

public:
    Roman();

    Roman(string auteur, string titre, string editeur, string ISBN, string publicCible, string genre);

    void Afficher();
};


#endif //ROMAN_H
