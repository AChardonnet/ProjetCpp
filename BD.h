//
// Created by antoi on 07/01/2025.
//

#ifndef BD_H
#define BD_H
#include "Livre.h"


class BD : public Livre {
private:
    string dessinateur;

public:
    BD();

    BD(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat,
       string dessinateur);
};


#endif //BD_H
