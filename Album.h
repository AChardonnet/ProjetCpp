//
// Created by antoi on 07/01/2025.
//

#ifndef ALBUM_H
#define ALBUM_H
#include "Livre.h"


class Album : Livre {
private:
    string illustrations;

public:
    Album();

    Album(string auteur, string titre, string editeur, string ISBN, string publicCible, string illustrations);

    void Afficher();
};


#endif //ALBUM_H
