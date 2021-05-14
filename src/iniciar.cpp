#include "../include/iniciar.h"
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
#include <iostream>
#include <string>

Iniciar::Iniciar(){
    int p1,p2,p3,p4;
    std::string n1,n2,n3,n4;

    std::cout << std::endl << "BEM VINDO A (NOME DO JOGO)" << std::endl << "Nesse jogo voce ira escolher uma equipe de 4 personagens para desbravar uma torre.";
    std::cout << std::endl;

    std::cout << std::endl << "1 - Arqueiro      2 - Barbaro     3 - Bardo     4 - Guerreiro";
    std::cout << std::endl << "Ataque Base: 7.0      Ataque Base: 12.0      Ataque Base: 2.0      Ataque Base 10.0";
    std::cout << std::endl << "Defesa Base: 5.0     Defesa Base: 7.0    Defesa Base: 3.0     Defesa Base 7.0";
    std::cout << std::endl << "Vida Base: 20.0         Vida Base: 36.0       Vida Base: 24.0      Vida Base 30.0";
    std::cout << std::endl << "Mana Base: 8.0           Mana Base: 0.0          Mana Base: 10.0         Mana Base 5.0";
    std::cout << std::endl << "Dano Magico Base: 3.0            Dano Magico Base: 0.0         Dano Magico Base: 5.0        Dano Magico Base 4.0";
    std::cout << std::endl << "Acerto Base: 0.0            Acerto Base: 0.0             Acerto Base: 0.0          Acerto Base 0.0";
    std::cout << std::endl << "Velocidade Base: 6.0           Velocidade Base: 4.0        Velocidade Base: 4.0          Velocidade Base 5.0";
    std::cout << std::endl;

    std::cout << std::endl << "5 - Ladino       6 - Mago         7 - Paladino       8 - Sacerdote";
    std::cout << std::endl << "Ataque Base: 6.0         Ataque Base: 3.0        Ataque Base: 8.0        Ataque Base 3.0";
    std::cout << std::endl << "Defesa Base: 5.0           Defesa Base: 2.0       Defesa Base: 9.0       Defesa Base 4.0";
    std::cout << std::endl << "Vida Base: 24.0        Vida Base: 18.0       Vida Base: 30.0         Vida Base 24.0";
    std::cout << std::endl << "Mana Base: 8.0         Mana Base: 12.0       Mana Base: 7.0       Mana Base 10.0";
    std::cout << std::endl << "Dano Magico Base: 3.0       Dano Magico Base: 10.0      Dano Magico Base: 4.0      Dano Magico Base 5.0";
    std::cout << std::endl << "Acerto Base: 0.0        Acerto Base: 0.0         Acerto Base: 0.0         Acerto Base 0.0";
    std::cout << std::endl << "Velocidade Base: 6.0         Velocidade Base: 3.0        Velocidade Base: 5.0         Velocidade Base 2.0";
    std::cout << std::endl;

    std::cout << std::endl << "Digite os numeros do personagens que voce ira usar.";
    std::cout << std::endl << "Classe do personagem 1: ";
    std::cin >> p1;
    while(p1<0||p1>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p1;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n1;
    std::cout << std::endl << "Classe do personagem 2: ";
    std::cin >> p2;
    while(p2<0||p2>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p2;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n2;
    std::cout << std::endl << "Classe do personagem 3: ";
    std::cin >> p3;
    while(p3<0||p3>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p3;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n3;
    std::cout << std::endl << "Classe do personagem 4: ";
    std::cin >> p4;
    while(p4<0||p4>8){
        std::cout << "Digite um numero entre 1 e 8. Tente novamente: ";
        std::cin >> p4;
    }
    std::cout << "Digite o nome do personagem: ";
    std::cin >> n4;

    //PERSONAGEM 1
    if(p1==1){
        Arqueiro a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==2){
        Barbaro a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==3){
        Bardo a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==4){
        Guerreiro a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==5){
        Ladino a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==6){
        Mago a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==7){
        Paladino a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    else if(p1==8){
        Sacerdote a(n1,0,0,0,0);
        _equipe_jogador[0] = a;
    }
    
    //PERSONAGEM 2
    if(p2==1){
        Arqueiro a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==2){
        Barbaro a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==3){
        Bardo a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==4){
        Guerreiro a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==5){
        Ladino a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==6){
        Mago a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==7){
        Paladino a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }
    else if(p2==8){
        Sacerdote a(n2,0,0,0,0);
        _equipe_jogador[1] = a;
    }

    //PERSONAGEM 3
    if(p3==1){
        Arqueiro a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==2){
        Barbaro a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==3){
        Bardo a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==4){
        Guerreiro a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==5){
        Ladino a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==6){
        Mago a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==7){
        Paladino a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }
    else if(p3==8){
        Sacerdote a(n3,0,0,0,0);
        _equipe_jogador[2] = a;
    }

    //PERSONAGEM 4
    Personagem aux4("nome",0,0,0,0);
    if(p4==1){
        Arqueiro a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==2){
        Barbaro a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==3){
        Bardo a(n4,0,0,0,0);
       _equipe_jogador[3] = a;
    }
    else if(p4==4){
        Guerreiro a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==5){
        Ladino a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==6){
        Mago a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==7){
        Paladino a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }
    else if(p4==8){
        Sacerdote a(n4,0,0,0,0);
        _equipe_jogador[3] = a;
    }

    _equipe_jogador.IfPersonagem_morrer();
    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<_equipe_jogador.get_personagem(i)->get_nome()<<std::endl;
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

Iniciar::~Iniciar(){}
