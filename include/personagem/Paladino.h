#ifndef PALADINO_H
#define PALADINO_H

#include <string>
#include "Personagem.h"

class Paladino : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Paladino(std::string nome);
    ~Paladino();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // PALADINO_H
