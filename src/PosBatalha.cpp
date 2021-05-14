#include <iostream>
#include <vector>
#include "../include/personagem/Equipe.h"
#include "../include/PosBatalha.h"

PosBatalha::PosBatalha(Equipe equipe){

    int op,nova_forca,nova_destreza,nova_constituicao,nova_inteligencia;
    double novo_ataque, nova_vida, nova_mana, novo_dano_magico, novo_acerto, nova_velocidade;

    for(int i=0; i<equipe.get_tamanho_equipe();i++){

        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout<<"Voce recebeu 1 ponto de maestria com *"<<equipe.get_personagem(i)->get_nome()<<"* por ganhar a batalha!"<<std::endl;
        std::cout<<"Escolha em qual atributo quer adiciona-la"<<std::endl;
        std::cout<<"1) Forca: "<<equipe.get_personagem(i)->get_forca()<<std::endl;
        std::cout<<"2) Destreza: "<<equipe.get_personagem(i)->get_destreza()<<std::endl;
        std::cout<<"3) Constituicao: "<<equipe.get_personagem(i)->get_constituicao()<<std::endl;
        std::cout<<"4) Inteligencia: "<<equipe.get_personagem(i)->get_inteligencia()<<std::endl;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cin>>op;

        //ADICIONANDO OS NOVOS MODIFICADORES
        switch (op){
        case 1:
            nova_forca=equipe.get_personagem(i)->get_forca()+1;
            equipe.get_personagem(i)->set_forca(nova_forca);
            std::cout<<"**  1 PONTO DE FORCA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 2:
            nova_destreza=equipe.get_personagem(i)->get_destreza()+1;
            equipe.get_personagem(i)->set_destreza(nova_destreza);
            std::cout<<"**  1 PONTO DE DESTREZA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 3:
            nova_constituicao=equipe.get_personagem(i)->get_constituicao()+1;
            equipe.get_personagem(i)->set_constituicao(nova_constituicao);
            std::cout<<"**  1 PONTO DE CONSTITUICAO FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 4:
            nova_inteligencia=equipe.get_personagem(i)->get_inteligencia()+1;
            equipe.get_personagem(i)->set_inteligencia(nova_inteligencia);
            std::cout<<"**  1 PONTO DE INTELIGENCIA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        default:
            break;
        }

        //REDEFININDO OS NOVOS VALORES DOS STATS
        novo_ataque= equipe.get_personagem(i)->get_ataque_base() + equipe.get_personagem(i)->get_forca();
        nova_vida= equipe.get_personagem(i)->get_vida_base() + equipe.get_personagem(i)->get_constituicao();
        nova_mana= equipe.get_personagem(i)->get_mana_base() + 2*equipe.get_personagem(i)->get_inteligencia();
        novo_dano_magico= equipe.get_personagem(i)->get_dano_magico_base() + equipe.get_personagem(i)->get_inteligencia();
        novo_acerto= equipe.get_personagem(i)->get_acerto_base() + equipe.get_personagem(i)->get_destreza();
        nova_velocidade= equipe.get_personagem(i)->get_velocidade_base() + equipe.get_personagem(i)->get_destreza();

        equipe.get_personagem(i)->set_ataque(novo_ataque);
        equipe.get_personagem(i)->set_vida(nova_vida);
        equipe.get_personagem(i)->set_mana(nova_mana);
        equipe.get_personagem(i)->set_dano_magico(novo_dano_magico);
        equipe.get_personagem(i)->set_acerto(novo_acerto);
        equipe.get_personagem(i)->set_velocidade(nova_velocidade);

        //REINICIANDO OS VALORES DOS STATS DE BATALHA
        equipe.get_personagem(i)->set_ataque_batalha(novo_ataque);
        equipe.get_personagem(i)->set_vida_batalha(nova_vida);
        equipe.get_personagem(i)->set_mana_batalha(nova_mana);
        equipe.get_personagem(i)->set_dano_magico_batalha(novo_dano_magico);
        equipe.get_personagem(i)->set_acerto_batalha(novo_acerto);
        equipe.get_personagem(i)->set_velocidade_batalha(nova_velocidade);

    }

}

PosBatalha::~PosBatalha(){}

