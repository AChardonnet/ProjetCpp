//
// Created by antoi on 07/01/2025.
//

#ifndef ROMAN_H
#define ROMAN_H
#include "Livre.h"


class Roman : public Livre{
    string genre;
    public:
        Roman();
        Roman(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat, string genre);
};



#endif //ROMAN_H
