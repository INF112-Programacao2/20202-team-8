#include <iostream>
#include <vector>
#include "Personagem.h"
#include "Arqueiro.h"
#include "Barbaro.h"
#include "Bardo.h"
#include "Guerreiro.h"
#include "Ladino.h"
#include "Mago.h"
#include "Paladino.h"
#include "Sacerdote.h"
#include "Equipe.h"
#include "PosBatalha.h"

void InformacoesTeste(Equipe &jogador){

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

int main(){

    Paladino paladin("Paladino",0,0,0,0);
    Barbaro barbarian("Barbaro",0,0,0,0);
    Guerreiro warrior("Guerreiro",0,0,0,0);
    Sacerdote cleric("Sacerdote",0,0,0,0);
    Bardo bard("Bardo",0,0,0,0);
    Mago mage("Mago",0,0,0,0);
    Arqueiro ranger("Arqueiro",0,0,0,0);
    Ladino rougue("Ladino",0,0,0,0);
    Equipe equipe_jogador(paladin,cleric,mage,ranger);

    
    InformacoesTeste(equipe_jogador);

    //testando pos batalha
    PosBatalha batalha1(equipe_jogador);

    //2 PERSONAGENS MORRERAM NA BATALHA

    equipe_jogador.get_personagem(0)->set_vida_batalha(0);
    equipe_jogador.get_personagem(1)->set_vida_batalha(0);

    //teste 2
    InformacoesTeste(equipe_jogador);
    
    
    return 0;
}