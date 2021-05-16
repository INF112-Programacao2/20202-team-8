#ifndef WITCHER_H
#define WITCHER_H

#include "Inimigo.h"

class Witcher : public Inimigo {
private:
    bool _Transformada = false;
public:
    Witcher(int nivel);
    ~Witcher();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    //COMANDOS PARA HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
    virtual double ataque_3() override;
    virtual double ataque_4() override;


};

#endif // WITCHER_H
