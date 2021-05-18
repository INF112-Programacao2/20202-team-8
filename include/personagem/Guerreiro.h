#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "Personagem.h"

class Guerreiro : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Guerreiro(std::string nome);
    ~Guerreiro();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // GUERREIRO_H
