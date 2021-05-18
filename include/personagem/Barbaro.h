#ifndef BARBARO_H
#define BARBARO_H

#include <string>
#include "Personagem.h"

class Barbaro : public Personagem {
public:
    // CONSTRUTOR E DESTRUTOR
    Barbaro(std::string nome);
    ~Barbaro();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // BARBARO_H
