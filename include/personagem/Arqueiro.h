#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <string>
#include "Personagem.h"

class Arqueiro : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Arqueiro(std::string nome);
    ~Arqueiro();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // ARQUEIRO_H
