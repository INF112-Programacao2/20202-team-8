#ifndef BARDO_H
#define BARDO_H

#include <string>
#include "Personagem.h"

class Bardo : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Bardo(std::string nome);
    ~Bardo();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // BARDO_H
