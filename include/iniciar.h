#ifndef INICIAR_H
#define INICIAR_H

#include "personagem/Personagem.h"
#include "personagem/Arqueiro.h"
#include "personagem/Barbaro.h"
#include "personagem/Bardo.h"
#include "personagem/Guerreiro.h"
#include "personagem/Ladino.h"
#include "personagem/Mago.h"
#include "personagem/Paladino.h"
#include "personagem/Sacerdote.h"
#include "personagem/Equipe.h"

class Iniciar{
public:
  Equipe _equipe_jogador(personagem a("nome",0,0,0,0),personagem b("nome",0,0,0,0),personagem c("nome",0,0,0,0),personagem d("nome",0,0,0,0));
    Iniciar();
    ~Iniciar();
};

#endif // INICIAR_H
