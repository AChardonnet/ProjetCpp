//
// Created by antoi on 07/01/2025.
//

#include "Roman.h"
#include "Livre.h"


Roman::Roman(): Livre() {
};

Roman::Roman(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat,
             string genre): Livre(id, auteur, titre, editeur, ISBN, publicCible, etat) {
    this->genre = genre;
}
