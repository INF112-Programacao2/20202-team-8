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
    // JOGADOR
    Equipe _equipe_jogador;

    // INIMIGOS
    EquipeInimiga _equipe_torre1,_equipe_torre2,_equipe_torre3,_equipe_torre4,_equipe_torre5;

    // METODOS PRIVADOS PARA COMPACTAR O CODIGO
    // METODO INICIAR
    void trata_excecao_classe(int& p, int aux);
    void texto_inicial();

    // METODO PRE_BATALHA
    void trata_excecao_modificador(int&op);
    int ordena_batalha(EquipeInimiga &equipe_torre);
    void acao(int numero,EquipeInimiga &equipe_torre);
    void informacoes_jogador();
    void informacoes_inimigos(EquipeInimiga equipe_torre);
    void ataque_inimigo(EquipeInimiga &equipe_torre, int posicao_inimigo, int posicao_jogador);

public:
    Jogo();
    ~Jogo();

    void iniciar();
    void pre_batalha();
    void batalha(EquipeInimiga &equipe_inimiga);
    void ciclo();

};

#endif // JOGO_H
