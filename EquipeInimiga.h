#ifndef EQUIPEINIMIGA_H
#define EQUIPEINIMIGA_H

#include <vector>
#include "Inimigo.h"

class EquipeInimiga{
private:
    int _tamanho;
public:
    std::vector<Inimigo*> _equipe_inimiga;
    EquipeInimiga(Inimigo inimigo1, Inimigo inimigo2, Inimigo inimigo3, Inimigo inimigo4);
    ~EquipeInimiga();

    int get_tamanho_equipe_inimiga();
    Inimigo* get_inimigo(int ordem);
    void IfInimigo_morrer();
};

#endif // EQUIPE_H