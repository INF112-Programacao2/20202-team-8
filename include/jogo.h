#ifndef JOGO_H
#define JOGO_H

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

#include "inimigo/Inimigo.h"
#include "inimigo/Skull.h"
#include "inimigo/Slime.h"
#include "inimigo/Troll.h"
#include "inimigo/Witcher.h"
#include "inimigo/EquipeInimiga.h"

class Jogo{
private:
    Equipe _equipe_jogador;

    EquipeInimiga _equipe_torre1,_equipe_torre2,_equipe_torre3,_equipe_torre4,_equipe_torre5;
    EquipeInimiga _equipe_torre6,_equipe_torre7,_equipe_torre8,_equipe_torre9,_equipe_torre10;

    int ordena_batalha(Equipe equipe_jogador, EquipeInimiga equipe_torre);
    double acao(int numero, Equipe equipe_jogador, EquipeInimiga equipe_torre);
    void informacoes_jogador();
    void informacoes_inimigos(EquipeInimiga equipe_torre);

    void terminar_jogo();
public:
    Jogo();
    ~Jogo();

    void iniciar();
    void pre_batalha();
    void batalha();
};

#endif // JOGO_H
