#include <iostream>
#include <vector>
#include "Inimigo.h"
#include "Slime.h"
#include "Skull.h"
#include "Troll.h"
#include "Witcher.h"
#include "EquipeInimiga.h"

void InformacoesTeste(EquipeInimiga &jogador){

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

int main(){

    Slime slime(3);
    Skull skull(1);
    Witcher witcher(2);
    Troll troll(3);

    EquipeInimiga equipe_inimiga(slime,skull,witcher,troll);
    
    InformacoesTeste(equipe_inimiga);

    //MATEI 2 PERSONAGENS (SKULL E TROLL)
    equipe_inimiga.get_inimigo(1)->set_vida(0);
    equipe_inimiga.get_inimigo(3)->set_vida(0);

    //TESTE
    InformacoesTeste(equipe_inimiga);
    
    return 0;
}