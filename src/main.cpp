#include <iostream>
#include <vector>
#include "../include/personagem/Personagem.h"
#include "../include/personagem/Arqueiro.h"
#include "../include/personagem/Barbaro.h"
#include "../include/personagem/Bardo.h"
#include "../include/personagem/Guerreiro.h"
#include "../include/personagem/Ladino.h"
#include "../include/personagem/Mago.h"
#include "../include/personagem/Paladino.h"
#include "../include/personagem/Sacerdote.h"
#include "../include/personagem/Equipe.h"
#include "../include/PosBatalha.h"
#include "../include/inimigo/Inimigo.h"
#include "../include/inimigo/Slime.h"
#include "../include/inimigo/Skull.h"
#include "../include/inimigo/Troll.h"
#include "../include/inimigo/Witcher.h"
#include "../include/inimigo/EquipeInimiga.h"

void InformacoesTestePersonagens(Equipe &jogador){

    jogador.IfPersonagem_morrer();
    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<jogador.get_tamanho_equipe(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<jogador.get_personagem(i)->get_nome()<<std::endl;
        std::cout<<"Ataque: "<<jogador.get_personagem(i)->get_ataque()<<std::endl;
        std::cout<<"Defesa: "<<jogador.get_personagem(i)->get_defesa()<<std::endl;
        std::cout<<"Vida: "<<jogador.get_personagem(i)->get_vida()<<std::endl;
        std::cout<<"Mana: "<<jogador.get_personagem(i)->get_mana()<<std::endl;
        std::cout<<"Dano Magico: "<<jogador.get_personagem(i)->get_dano_magico()<<std::endl;
        std::cout<<"Acerto: "<<jogador.get_personagem(i)->get_acerto()<<std::endl;
        std::cout<<"Velocidade: "<<jogador.get_personagem(i)->get_velocidade()<<std::endl;
        std::cout<<std::endl;
    }

}

void InformacoesTesteInimigos(EquipeInimiga &jogador){

    jogador.IfInimigo_morrer();
    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<jogador.get_tamanho_equipe_inimiga(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<jogador.get_inimigo(i)->get_nome()<<std::endl;
        std::cout<<"Ataque: "<<jogador.get_inimigo(i)->get_ataque()<<std::endl;
        std::cout<<"Defesa: "<<jogador.get_inimigo(i)->get_defesa()<<std::endl;
        std::cout<<"Vida: "<<jogador.get_inimigo(i)->get_vida()<<std::endl;
        std::cout<<"Mana: "<<jogador.get_inimigo(i)->get_mana()<<std::endl;
        std::cout<<"Dano Magico: "<<jogador.get_inimigo(i)->get_dano_magico()<<std::endl;
        std::cout<<"Acerto: "<<jogador.get_inimigo(i)->get_acerto()<<std::endl;
        std::cout<<"Velocidade: "<<jogador.get_inimigo(i)->get_velocidade()<<std::endl;
        std::cout<<std::endl;
    }

}

int main(int argc, char** argv){

    Paladino paladin("Paladino",0,0,0,0);
    Barbaro barbarian("Barbaro",0,0,0,0);
    Guerreiro warrior("Guerreiro",0,0,0,0);
    Sacerdote cleric("Sacerdote",0,0,0,0);
    Bardo bard("Bardo",0,0,0,0);
    Mago mage("Mago",0,0,0,0);
    Arqueiro ranger("Arqueiro",0,0,0,0);
    Ladino rougue("Ladino",0,0,0,0);
    Equipe equipe_jogador(paladin,cleric,mage,ranger);

    
    InformacoesTestePersonagens(equipe_jogador);

    //testando pos batalha
    PosBatalha batalha1(equipe_jogador);

    //2 PERSONAGENS MORRERAM NA BATALHA

    equipe_jogador.get_personagem(0)->set_vida_batalha(0);
    equipe_jogador.get_personagem(1)->set_vida_batalha(0);

    //teste 2
    InformacoesTestePersonagens(equipe_jogador);
    
    // TESTE COM OS INIMIGOS
    Slime slime(3);
    Skull skull(1);
    Witcher witcher(2);
    Troll troll(3);

    EquipeInimiga equipe_inimiga(slime,skull,witcher,troll);

    InformacoesTesteInimigos(equipe_inimiga);

    //MATEI 2 PERSONAGENS (SKULL E TROLL)
    equipe_inimiga.get_inimigo(1)->set_vida(0);
    equipe_inimiga.get_inimigo(3)->set_vida(0);

    //TESTE
    InformacoesTesteInimigos(equipe_inimiga);

    return 0;
}
