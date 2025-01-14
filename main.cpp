#include <iostream>

#include "Adherent.h"
#include "Album.h"
#include "BD.h"
#include "Bibliotheque.h"
#include "Recueil.h"
#include "Roman.h"
#include "Theatre.h"

using namespace std;

int Livre::nbTotLivres = 0;
int Adherent::nbTotAdherent = 0;
int Bibliotheque::nbTotBibliotheques = 0;

int main()
{
    Bibliotheque b1 = Bibliotheque();
    b1.setNom("Médiathèque Albert-Camus");
    b1.setAdresse("7 Rue du Village, 91000 Évry-Courcouronnes");
    b1.ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1.ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1.ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1.ajoutLivre(new BD("André Franquin", "Gaston Lagaffe R1 - Gala de gaffes à gogo", "Dupuis", "978-2800100937",
                         "Tous Publics", "André Franquin"));
    b1.ajoutLivre(new Theatre("Molière", "Le Médecin malgré lui", "Larousse", "2035866537", "Tous Publics",17));
    //b1.Afficher();

    Adherent a1 = Adherent("Martin", "Pierre", "11 rue de Provence", &b1, 30);
    a1.emprunter(1);
    //b1.Afficher();
    cout << a1.trouveLivre(1);
    //a1.rendre(1);

    return 0;
}
