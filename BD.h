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

    BD(string auteur, string titre, string editeur, string ISBN, string publicCible,
       string dessinateur);

    void Afficher();
};


#endif //BD_H
