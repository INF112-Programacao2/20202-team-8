#ifndef SACERDOTE_H
#define SACERDOTE_H

#include <string>
#include "Personagem.h"

class Sacerdote : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Sacerdote(std::string nome);
    ~Sacerdote();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // SACERDOTE_H
