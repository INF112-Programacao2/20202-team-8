#ifndef LADINO_H
#define LADINO_H

#include <string>
#include "Personagem.h"

class Ladino : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Ladino(std::string nome);
    ~Ladino();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // LADINO_H
