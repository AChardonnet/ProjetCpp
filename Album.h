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
    Album(int id, string auteur, string titre, string editeur, int ISBN, string public_cible, string etat, string illustrations);
};


#endif //ALBUM_H
