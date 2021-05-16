#include "../include/jogo.h"
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
#include <string>
#include <iostream>
#include <vector>

void Jogo::informacoes_jogador(){
    _equipe_jogador.IfPersonagem_morrer();
    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<_equipe_jogador.get_personagem(i)->get_nome()<<std::endl;
        std::cout<<"Classe: "<<_equipe_jogador.get_personagem(i)->get_classe()<<std::endl;
        std::cout<<"Ataque: "<<_equipe_jogador.get_personagem(i)->get_ataque()<<std::endl;
        std::cout<<"Defesa: "<<_equipe_jogador.get_personagem(i)->get_defesa()<<std::endl;
        std::cout<<"Vida: "<<_equipe_jogador.get_personagem(i)->get_vida()<<std::endl;
        std::cout<<"Mana: "<<_equipe_jogador.get_personagem(i)->get_mana()<<std::endl;
        std::cout<<"Dano Magico: "<<_equipe_jogador.get_personagem(i)->get_dano_magico()<<std::endl;
        std::cout<<"Acerto: "<<_equipe_jogador.get_personagem(i)->get_acerto()<<std::endl;
        std::cout<<"Velocidade: "<<_equipe_jogador.get_personagem(i)->get_velocidade()<<std::endl;
        std::cout<<std::endl;
    }
}

void Jogo::informacoes_inimigos(EquipeInimiga equipe_torre){

    equipe_torre.IfInimigo_morrer();
    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<equipe_torre.get_tamanho_equipe_inimiga(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<equipe_torre.get_inimigo(i)->get_nome()<<std::endl;
        std::cout<<"Ataque: "<<equipe_torre.get_inimigo(i)->get_ataque()<<std::endl;
        std::cout<<"Defesa: "<<equipe_torre.get_inimigo(i)->get_defesa()<<std::endl;
        std::cout<<"Vida: "<<equipe_torre.get_inimigo(i)->get_vida()<<std::endl;
        std::cout<<"Mana: "<<equipe_torre.get_inimigo(i)->get_mana()<<std::endl;
        std::cout<<"Dano Magico: "<<equipe_torre.get_inimigo(i)->get_dano_magico()<<std::endl;
        std::cout<<"Acerto: "<<equipe_torre.get_inimigo(i)->get_acerto()<<std::endl;
        std::cout<<"Velocidade: "<<equipe_torre.get_inimigo(i)->get_velocidade()<<std::endl;
        std::cout<<std::endl;
    }
}

Jogo::Jogo(){

    //1 andar da torre
    Slime slime1_1(1),slime1_2(1),slime1_3(1),slime1_4(1);
    EquipeInimiga equipe_torre1(slime1_1,slime1_2,slime1_3,slime1_4);
    this->_equipe_torre1 = equipe_torre1;

    //2 andar da torre
    Slime slime2_1(2),slime2_2(2),slime2_3(2),slime2_4(2);
    EquipeInimiga equipe_torre2(slime2_1,slime2_2,slime2_3,slime2_4);
    this->_equipe_torre2 = equipe_torre2;

        //3 andar da torre
    Slime slime3_1(3),slime3_2(3);
    Skull skull3_1(3),skull3_2(3);
    EquipeInimiga equipe_torre3(slime3_1,slime3_2,skull3_1,skull3_2);
    this->_equipe_torre3 = equipe_torre3;

     //4 andar da torre
     Skull skull4_1(4),skull4_2(4),skull4_3(4),skull4_4(4);
     EquipeInimiga equipe_torre4(skull4_1,skull4_2,skull4_3,skull4_4);
     this->_equipe_torre4 = equipe_torre4;

     //5 andar da torre
     Skull skull5_1(5),skull5_2(5);
     Troll troll5_1(5),troll1_2(5);
     EquipeInimiga equipe_torre5(skull5_1,skull5_2,troll5_1,troll1_2);
     this->_equipe_torre5 = equipe_torre5;

     //6 andar da torre
     Troll troll6_1(6),troll6_2(6),troll6_3(6),troll6_4(6);
     EquipeInimiga equipe_torre6(troll6_1,troll6_2,troll6_3,troll6_4);
     this->_equipe_torre6 = equipe_torre6;

     //7 andar da torre
     Slime slime7_1(7);
     Skull skull7_1(7);
     Troll troll7_1(7),troll7_2(7);
     EquipeInimiga equipe_torre7(slime7_1,skull7_1,troll7_1,troll7_2);
     this->_equipe_torre7 = equipe_torre7;

     //8 andar da torre
     Skull skull8_1(8), skull8_2(8);
     Troll troll8_1(8),troll8_2(8);
     EquipeInimiga equipe_torre8(skull8_1,skull8_2,troll8_1,troll8_2);
     this->_equipe_torre8 = equipe_torre8;

     //9 andar da torre
     Slime slime9_1(9);
     Skull skull9_1(9);
     Troll troll9_1(9);
     Witcher witcher9_1(9);
     EquipeInimiga equipe_torre9(slime9_1,skull9_1,troll9_1,witcher9_1);
     this->_equipe_torre9 = equipe_torre9;

     //10 andar da torre
     Skull skull10_1(10);
     Troll troll10_1(10),troll10_2(10);
     Witcher witcher10_1(10);
     EquipeInimiga equipe_torre10(skull10_1,troll10_1,troll10_1,witcher10_1);
     this->_equipe_torre10 = equipe_torre10;
}

Jogo::~Jogo(){}

void Jogo::iniciar(){

    int p1,p2,p3,p4; //classes dos personagens
    std::string n1,n2,n3,n4; //nomes dos personagens

    std::cout << std::endl << "BEM VINDO A (NOME DO JOGO)" << std::endl << "Nesse jogo voce ira escolher uma equipe de 4 personagens para desbravar uma torre.";
    std::cout << std::endl;

    std::cout << std::endl << "1 - Arqueiro                   2 - Barbaro                    3 - Bardo                      4 - Guerreiro";
    std::cout << std::endl << "Ataque Base: 7.0               Ataque Base: 12.0              Ataque Base: 2.0               Ataque Base 10.0";
    std::cout << std::endl << "Defesa Base: 5.0               Defesa Base: 7.0               Defesa Base: 3.0               Defesa Base 7.0";
    std::cout << std::endl << "Vida Base: 20.0                Vida Base: 36.0                Vida Base: 24.0                Vida Base 30.0";
    std::cout << std::endl << "Mana Base: 8.0                 Mana Base: 0.0                 Mana Base: 10.0                Mana Base 5.0";
    std::cout << std::endl << "Dano Magico Base: 3.0          Dano Magico Base: 0.0          Dano Magico Base: 5.0          Dano Magico Base 4.0";
    std::cout << std::endl << "Acerto Base: 0.0               Acerto Base: 0.0               Acerto Base: 0.0               Acerto Base 0.0";
    std::cout << std::endl << "Velocidade Base: 6.0           Velocidade Base: 4.0           Velocidade Base: 4.0           Velocidade Base 5.0";
    std::cout << std::endl;

    std::cout << std::endl << "5 - Ladino                     6 - Mago                        7 - Paladino                   8 - Sacerdote";
    std::cout << std::endl << "Ataque Base: 6.0               Ataque Base: 3.0                Ataque Base: 8.0               Ataque Base 3.0";
    std::cout << std::endl << "Defesa Base: 5.0               Defesa Base: 2.0                Defesa Base: 9.0               Defesa Base 4.0";
    std::cout << std::endl << "Vida Base: 24.0                Vida Base: 18.0                 Vida Base: 30.0                Vida Base 24.0";
    std::cout << std::endl << "Mana Base: 8.0                 Mana Base: 12.0                 Mana Base: 7.0                 Mana Base 10.0";
    std::cout << std::endl << "Dano Magico Base: 3.0          Dano Magico Base: 10.0          Dano Magico Base: 4.0          Dano Magico Base 5.0";
    std::cout << std::endl << "Acerto Base: 0.0               Acerto Base: 0.0                Acerto Base: 0.0               Acerto Base 0.0";
    std::cout << std::endl << "Velocidade Base: 6.0           Velocidade Base: 3.0            Velocidade Base: 5.0           Velocidade Base 2.0";
    std::cout << std::endl;

    std::cout << std::endl << "Digite os numeros do personagens que voce ira usar.";
    std::cout << std::endl << "Classe do personagem 1: ";
    std::cin >> p1;
    while(p1<1||p1>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p1;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n1;
    std::cout << std::endl << "Classe do personagem 2: ";
    std::cin >> p2;
    while(p2<1||p2>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p2;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n2;
    std::cout << std::endl << "Classe do personagem 3: ";
    std::cin >> p3;
    while(p3<1||p3>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p3;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n3;
    std::cout << std::endl << "Classe do personagem 4: ";
    std::cin >> p4;
    while(p4<1||p4>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p4;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n4;

    Equipe equipe_jogador(p1,n1,p2,n2,p3,n3,p4,n4);
    this->_equipe_jogador = equipe_jogador;

    informacoes_inimigos(_equipe_torre1);
    informacoes_inimigos(_equipe_torre2);
    informacoes_inimigos(_equipe_torre3);
    informacoes_inimigos(_equipe_torre4);
    informacoes_inimigos(_equipe_torre5);
    informacoes_inimigos(_equipe_torre6);
    informacoes_inimigos(_equipe_torre7);
    informacoes_inimigos(_equipe_torre8);
    informacoes_inimigos(_equipe_torre9);
    informacoes_inimigos(_equipe_torre10);

    informacoes_jogador();
}

void Jogo::pre_batalha(){

    int op,nova_forca,nova_destreza,nova_constituicao,nova_inteligencia;
    double novo_ataque, nova_vida, nova_mana, novo_dano_magico, novo_acerto, nova_velocidade;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe();i++){

        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout<<"Voce recebeu 1 ponto de maestria com *"<<_equipe_jogador.get_personagem(i)->get_nome()<<"* por ganhar a batalha!"<<std::endl;
        std::cout<<"Escolha em qual atributo quer adiciona-la"<<std::endl;
        std::cout<<"1) Forca: "<<_equipe_jogador.get_personagem(i)->get_forca()<<std::endl;
        std::cout<<"2) Destreza: "<<_equipe_jogador.get_personagem(i)->get_destreza()<<std::endl;
        std::cout<<"3) Constituicao: "<<_equipe_jogador.get_personagem(i)->get_constituicao()<<std::endl;
        std::cout<<"4) Inteligencia: "<<_equipe_jogador.get_personagem(i)->get_inteligencia()<<std::endl;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cin>>op;

        //ADICIONANDO OS NOVOS MODIFICADORES
        switch (op){
        case 1:
            nova_forca=_equipe_jogador.get_personagem(i)->get_forca()+1;
            _equipe_jogador.get_personagem(i)->set_forca(nova_forca);
            std::cout<<"**  1 PONTO DE FORCA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 2:
            nova_destreza=_equipe_jogador.get_personagem(i)->get_destreza()+1;
            _equipe_jogador.get_personagem(i)->set_destreza(nova_destreza);
            std::cout<<"**  1 PONTO DE DESTREZA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 3:
            nova_constituicao=_equipe_jogador.get_personagem(i)->get_constituicao()+1;
            _equipe_jogador.get_personagem(i)->set_constituicao(nova_constituicao);
            std::cout<<"**  1 PONTO DE CONSTITUICAO FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        case 4:
            nova_inteligencia=_equipe_jogador.get_personagem(i)->get_inteligencia()+1;
            _equipe_jogador.get_personagem(i)->set_inteligencia(nova_inteligencia);
            std::cout<<"**  1 PONTO DE INTELIGENCIA FOI ADICIONADO!  **"<<std::endl;
            std::cout<<std::endl;
            break;
        default:
            break;
        }

        //REDEFININDO OS NOVOS VALORES DOS STATS
        novo_ataque= _equipe_jogador.get_personagem(i)->get_ataque_base() + _equipe_jogador.get_personagem(i)->get_forca();
        nova_vida= _equipe_jogador.get_personagem(i)->get_vida_base() + _equipe_jogador.get_personagem(i)->get_constituicao();
        nova_mana= _equipe_jogador.get_personagem(i)->get_mana_base() + 2*_equipe_jogador.get_personagem(i)->get_inteligencia();
        novo_dano_magico= _equipe_jogador.get_personagem(i)->get_dano_magico_base() + _equipe_jogador.get_personagem(i)->get_inteligencia();
        novo_acerto= _equipe_jogador.get_personagem(i)->get_acerto_base() + _equipe_jogador.get_personagem(i)->get_destreza();
        nova_velocidade= _equipe_jogador.get_personagem(i)->get_velocidade_base() + _equipe_jogador.get_personagem(i)->get_destreza();

        _equipe_jogador.get_personagem(i)->set_ataque(novo_ataque);
        _equipe_jogador.get_personagem(i)->set_vida(nova_vida);
        _equipe_jogador.get_personagem(i)->set_mana(nova_mana);
        _equipe_jogador.get_personagem(i)->set_dano_magico(novo_dano_magico);
        _equipe_jogador.get_personagem(i)->set_acerto(novo_acerto);
        _equipe_jogador.get_personagem(i)->set_velocidade(nova_velocidade);

        //REINICIANDO OS VALORES DOS STATS DE BATALHA
        _equipe_jogador.get_personagem(i)->set_ataque_batalha(novo_ataque);
        _equipe_jogador.get_personagem(i)->set_vida_batalha(nova_vida);
        _equipe_jogador.get_personagem(i)->set_mana_batalha(nova_mana);
        _equipe_jogador.get_personagem(i)->set_dano_magico_batalha(novo_dano_magico);
        _equipe_jogador.get_personagem(i)->set_acerto_batalha(novo_acerto);
        _equipe_jogador.get_personagem(i)->set_velocidade_batalha(nova_velocidade);


    }

    informacoes_jogador();
}

void Jogo::Batalha(){}
