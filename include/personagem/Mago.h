#ifndef MAGO_H
#define MAGO_H

#include <string>
#include "Personagem.h"

class Mago : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Mago(std::string nome);
    ~Mago();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // MAGO_H
