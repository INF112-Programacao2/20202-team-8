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
#include "../include/inimigo/Inimigo.h"
#include "../include/inimigo/Skull.h"
#include "../include/inimigo/Slime.h"
#include "../include/inimigo/Troll.h"
#include "../include/inimigo/Witcher.h"
#include "../include/inimigo/EquipeInimiga.h"
#include "../include/ExceptionRPG.h"
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Jogo::informacoes_jogador(){
    std::cout<<std::endl;
    std::cout<<"--------------------------------------------INFORMACOES--------------------------------------------"<<std::endl;
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Nome:"<<std::setw(17)<<_equipe_jogador.get_personagem(i)->get_nome()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Classe:"<<std::setw(15)<<_equipe_jogador.get_personagem(i)->get_classe()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Ataque:"<<fixed<<setprecision(2)<<std::setw(15)<<_equipe_jogador.get_personagem(i)->get_ataque_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Defesa:"<<fixed<<setprecision(2)<<std::setw(15)<<_equipe_jogador.get_personagem(i)->get_defesa_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Vida:"<<fixed<<setprecision(2)<<std::setw(17)<<_equipe_jogador.get_personagem(i)->get_vida_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Mana:"<<fixed<<setprecision(2)<<std::setw(17)<<_equipe_jogador.get_personagem(i)->get_mana_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Dano Magico:"<<fixed<<setprecision(2)<<std::setw(10)<<_equipe_jogador.get_personagem(i)->get_dano_magico_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Acerto:"<<fixed<<setprecision(2)<<std::setw(15)<<_equipe_jogador.get_personagem(i)->get_acerto_batalha()<<" | ";
    std::cout<<std::endl;

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe(); i++)
        std::cout<<"Velocidade:"<<fixed<<setprecision(2)<<std::setw(11)<<_equipe_jogador.get_personagem(i)->get_velocidade_batalha()<<" | ";
    std::cout<<std::endl<<std::endl;
}

void Jogo::informacoes_inimigos(EquipeInimiga equipe_torre){
    equipe_torre.IfInimigo_morrer();

    std::cout<<std::endl;
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

int Jogo::ordena_batalha(EquipeInimiga &equipe_torre){
    int velocidade_a=0,velocidade_b=0;

    for(int i = 0; i < _equipe_jogador.get_tamanho_equipe(); i++){
            velocidade_a += _equipe_jogador.get_personagem(i)->get_velocidade_batalha();
        }
     for(int i = 0; i < equipe_torre.get_tamanho_equipe_inimiga(); i++){
            velocidade_b += equipe_torre.get_inimigo(i)->get_velocidade();
        }
        if(velocidade_a > velocidade_b)
            return 1;
        else
            return 2;
}

void Jogo::acao(int numero, EquipeInimiga &equipe_torre){

    srand (time(NULL));

    double op;
    int _verifica;
    string teste;
    char escolha[20];

    do{
        _verifica = 0;

        std::cout<<"*-----------------------------------------------------------------------"<<std::endl;
        std::cout<<"*Turno de *"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* , realize uma acao!"<< std::endl;
        std::cout<<"*1) Atacar(digite 1)"<<std::endl;
        std::cout<<"*2) Defender(digite 2)"<<std::endl;
        std::cout<<"*3) Usar Habilidade 1(digite 3)"<<std::endl;
        std::cout<<"*4) Usar Habilidade 2(digite 4)"<<std::endl;
        std::cout<<"*-----------------------------------------------------------------------"<<std::endl;

        do
        {
            std::cin >> escolha;
            teste = escolha;

            for(int i=0; escolha[i] != '\0'; i++)
            {
                if(teste == "exit")
                {
                    std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                    exit(0);
                }

                if(escolha[i] >= 'a' && escolha[i] <= 'z' || escolha[i] >= 'A' && escolha[i] <= 'Z')
                {
                    try
                    {
                        //Erro de digitar letra
                        throw (ExcecaoRPG());
                    }

                    catch (ExcecaoRPG OP)
                    {
                        OP.acao_letra();
                        break;
                    }
                }
                else if(escolha[i+1] == '\0')
                    {
                        op = atoi(escolha);

                        if(op < 1 || op > 4)
                        {
                            try
                            {
                                //Erro de digitar letra
                                throw (ExcecaoRPG());
                            }

                            catch (ExcecaoRPG OPN)
                            {
                                OPN.acao_numero();
                                break;
                            }
                        }
                    }
            }
        }while(op < 1 || op > 4);

        if(op == 3){
            if((_equipe_jogador.get_personagem(numero)->get_mana_batalha() - 2) < 0){
                _verifica = -1;
                std::cout << "Voce nao tem mana para usar essa habilidade, por favor escolha outra" << std::endl;
                std::cout<<"-----------------------------------------------------------------------"<<std::endl;
                std::cout<<std::endl;
            }
        }

        if(op == 4){
            if((_equipe_jogador.get_personagem(numero)->get_mana_batalha() - 4) < 0){
                _verifica = -1;
                std::cout << "Voce nao tem mana para usar essa habilidade, por favor escolha outra" << std::endl;
                std::cout<<"-----------------------------------------------------------------------"<<std::endl;
                std::cout<<std::endl;
            }
        }

    }while(_verifica == -1);

    _equipe_jogador.get_personagem(numero)->set_defesa_batalha(_equipe_jogador.get_personagem(numero)->get_defesa());

    double alvo;
    double posicao_inimigo = equipe_torre.get_tamanho_equipe_inimiga();

    if(op != 2){

        if(_equipe_jogador.get_personagem(numero)->get_classe() != "Sacerdote" || op==1){

            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<"Quem voce deseja atacar?"<< std::endl;
            if(posicao_inimigo > 0)
                std::cout<<"1)"<<equipe_torre.get_inimigo(0)->get_nome()<<std::endl;
            if(posicao_inimigo > 1)
                std::cout<<"2)"<<equipe_torre.get_inimigo(1)->get_nome()<<std::endl;
            if(posicao_inimigo > 2)
                std::cout<<"3)"<<equipe_torre.get_inimigo(2)->get_nome()<<std::endl;
            if(posicao_inimigo > 3)
                std::cout<<"4)"<<equipe_torre.get_inimigo(3)->get_nome()<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;

            do
            {
            std::cin >> escolha;
            teste = escolha;

            for(int i=0; escolha[i] != '\0'; i++)
            {
                if(teste == "exit")
                {
                    std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                    exit(0);
                }

                if(escolha[i] >= 'a' && escolha[i] <= 'z' || escolha[i] >= 'A' && escolha[i] <= 'Z')
                {
                    try
                    {
                        //Erro de digitar letra
                        throw (ExcecaoRPG());
                    }

                    catch (ExcecaoRPG OP)
                    {
                        OP.acao_letra();
                        break;
                    }
                }
                else if(escolha[i+1] == '\0')
                    {
                        posicao_inimigo = atoi(escolha);

                        if(posicao_inimigo < 1 || posicao_inimigo > 4)
                        {
                            try
                            {
                                //Erro de digitar letra
                                throw (ExcecaoRPG());
                            }

                            catch (ExcecaoRPG OPN)
                            {
                                OPN.acao_numero();
                                break;
                            }
                        }
                    }
             }
            }while(posicao_inimigo < 1 || posicao_inimigo > 4);


        }else{

            double _tamanho_jogador = _equipe_jogador.get_tamanho_equipe();

            if(op == 4){}

            else{
                std::cout<<"-----------------------------------------------------------------------"<<std::endl;
                std::cout<<"Quem voce deseja curar?"<< std::endl;
                if(_tamanho_jogador > 0)
                std::cout<<"1)"<<_equipe_jogador.get_personagem(0)->get_nome()<<std::endl;
                if(_tamanho_jogador > 1)
                std::cout<<"2)"<<_equipe_jogador.get_personagem(1)->get_nome()<<std::endl;
                if(_tamanho_jogador > 2)
                std::cout<<"3)"<<_equipe_jogador.get_personagem(2)->get_nome()<<std::endl;
                if(_tamanho_jogador > 3)
                std::cout<<"4)"<<_equipe_jogador.get_personagem(3)->get_nome()<<std::endl;
                std::cout<<"-----------------------------------------------------------------------"<<std::endl;

                do
                {
                    std::cin >> escolha;
                    teste = escolha;

                    for(int i=0; escolha[i] != '\0'; i++)
                    {
                        if(teste == "exit")
                        {
                            std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                            exit(0);
                        }

                        if(escolha[i] >= 'a' && escolha[i] <= 'z' || escolha[i] >= 'A' && escolha[i] <= 'Z')
                        {
                            try
                            {
                                //Erro de digitar letra
                                throw (ExcecaoRPG());
                            }

                            catch (ExcecaoRPG OP)
                            {
                                OP.acao_letra();
                                break;
                            }
                        }
                        else if(escolha[i+1] == '\0')
                            {
                                alvo = atoi(escolha);

                                if(alvo < 1 || alvo > 4)
                                {
                                    try
                                    {
                                        //Erro de digitar letra
                                        throw (ExcecaoRPG());
                                    }

                                    catch (ExcecaoRPG OPN)
                                    {
                                        OPN.acao_numero();
                                        break;
                                    }
                                }
                            }
                    }
                }while(alvo < 1 || alvo > 4);
            }
        }
    }

    if(op == 1){

        double vida_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_vida();
        double ataque_personagem=_equipe_jogador.get_personagem(numero)->atacar();
        double acerto_personagem=_equipe_jogador.get_personagem(numero)->get_acerto();
        double defesa_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_defesa();
        double dano=ataque_personagem/(1.0+defesa_inimigo/10);
        int dado_ataque= rand() % 20;
        int dado_defesa= rand() % 20;

        if(dado_ataque==0){
            dano=0;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout <<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* ERROU!" << std::endl;
        }
        else if(dado_ataque==19){
            dano*=2;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout <<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CRITOU!" << std::endl;
        }
        else if(dado_ataque+acerto_personagem<dado_defesa){
            dano/=2;
        }

        vida_inimigo-=dano;
        equipe_torre.get_inimigo(posicao_inimigo-1)->set_vida(vida_inimigo);
        std::cout<<std::endl;
        std::cout <<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CAUSOU *"<<fixed<<setprecision(2)<<dano<<" DE DANO EM *" <<equipe_torre.get_inimigo(posicao_inimigo-1)->get_nome()<<"* !"<< std::endl;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
    }

    else if(op == 2){

        _equipe_jogador.get_personagem(numero)->defender();

        std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* PREFERIU SE DEFENDER! "<<std::endl;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout<<std::endl;
    }

    else if(op == 3){

        if(_equipe_jogador.get_personagem(numero)->get_classe() == "Bardo"){

            for(int i = 0; i < _equipe_jogador.get_tamanho_equipe(); i++){
                double _auxiliar;
                _auxiliar = _equipe_jogador.get_personagem(i)->get_ataque_batalha();
                _equipe_jogador.get_personagem(i)->set_ataque_batalha(_auxiliar * 1.1);
            }

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* AUMENTOU O ATAQUE DA EQUIPE EM 10%! "<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;
        }

        if(_equipe_jogador.get_personagem(numero)->get_classe() == "Sacerdote"){

            double _auxiliar;
            double _cura;

            _cura = _equipe_jogador.get_personagem(numero)->ataque_1();
            _auxiliar = _equipe_jogador.get_personagem(alvo-1)->get_vida_batalha();
            _equipe_jogador.get_personagem(alvo-1)->set_vida_batalha(_auxiliar + _cura);

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CUROU O ALVO EM "<<fixed<<setprecision(2)<<_cura<<" PONTOS DE VIDA!"<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;
        }

        else{

            double vida_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_vida();
            double ataque_personagem=_equipe_jogador.get_personagem(numero)->ataque_1();
            double defesa_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_defesa();
            double dano=ataque_personagem/(1.0+defesa_inimigo/10);
            vida_inimigo-=dano;
            equipe_torre.get_inimigo(posicao_inimigo-1)->set_vida(vida_inimigo);

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CAUSOU "<<fixed<<setprecision(2)<<dano<<" DE DANO EM *"<<equipe_torre.get_inimigo(posicao_inimigo-1)->get_nome()<<"*"<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;

        }

    }

    else if(op == 4){

        if(_equipe_jogador.get_personagem(numero)->get_classe() == "Bardo"){

            for(int i = 0; i < _equipe_jogador.get_tamanho_equipe(); i++){
                double _auxiliar;
                _auxiliar = _equipe_jogador.get_personagem(i)->get_acerto_batalha();
                _equipe_jogador.get_personagem(i)->set_acerto_batalha(_auxiliar + 1);

            }

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* AUMENTOU O ACERTO DA EQUIPE EM 1! "<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;
        }

        if(_equipe_jogador.get_personagem(numero)->get_classe() == "Sacerdote"){

            double _auxiliar;
            double _cura;
            _cura = _equipe_jogador.get_personagem(numero)->ataque_2();

            for(int i = 0; i < _equipe_jogador.get_tamanho_equipe(); i++){
                _auxiliar = _equipe_jogador.get_personagem(i)->get_vida_batalha();
                _equipe_jogador.get_personagem(i)->set_vida_batalha(_auxiliar + _cura);
            }

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CUROU A EQUIPE EM "<<fixed<<setprecision(2)<<_cura<<" PONTOS DE VIDA!"<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;
        }

        else{

            double vida_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_vida();
            double ataque_personagem=_equipe_jogador.get_personagem(numero)->ataque_2();
            double defesa_inimigo=equipe_torre.get_inimigo(posicao_inimigo-1)->get_defesa();
            double dano=ataque_personagem/(1.0+defesa_inimigo/10);
            vida_inimigo-=dano;
            equipe_torre.get_inimigo(posicao_inimigo-1)->set_vida(vida_inimigo);

            std::cout<<"*"<<_equipe_jogador.get_personagem(numero)->get_nome()<<"* CAUSOU "<<fixed<<setprecision(2)<<dano<<" DE DANO EM *"<<equipe_torre.get_inimigo(posicao_inimigo-1)->get_nome()<<"*"<<std::endl;
            std::cout<<"-----------------------------------------------------------------------"<<std::endl;
            std::cout<<std::endl;
        }

    }

}

Jogo::Jogo(){

    //1 andar da torre
    Slime slime1_1(1),slime1_2(1),slime1_3(1),slime1_4(1);
    EquipeInimiga equipe_torre1(slime1_1,slime1_2,slime1_3,slime1_4);
    this->_equipe_torre1 = equipe_torre1;

    //2 andar da torre
    Skull skull2_1(4),skull2_2(4),skull2_3(4),skull2_4(4);
    EquipeInimiga equipe_torre2(skull2_1,skull2_2,skull2_3,skull2_4);
    this->_equipe_torre2 = equipe_torre2;

    //3 andar da torre
    Troll troll3_1(6),troll3_2(6),troll3_3(6),troll3_4(6);
    EquipeInimiga equipe_torre3(troll3_1,troll3_2,troll3_3,troll3_4);
    this->_equipe_torre3 = equipe_torre3;


    //4 andar da torre
    Slime slime4_1(9);
    Skull skull4_1(9);
    Troll troll4_1(9);
    Witcher witcher4_1(9);
    EquipeInimiga equipe_torre4(slime4_1,skull4_1,troll4_1,witcher4_1);
    this->_equipe_torre4 = equipe_torre4;

    //5 andar da torre
    Skull skull5_1(10);
    Troll troll5_1(10),troll10_2(10);
    Witcher witcher5_1(10);
    EquipeInimiga equipe_torre5(skull5_1,troll5_1,troll5_1,witcher5_1);
    this->_equipe_torre5 = equipe_torre5;
}

Jogo::~Jogo(){}

void Jogo::iniciar(){

    char p0[20];
    std::string teste;
    int p1,p2,p3,p4; //classes dos personagens
    std::string n1,n2,n3,n4; //nomes dos personagens

    std::cout << std::endl << "BEM VINDO A TEXT RPG " << std::endl << "Nesse jogo voce ira escolher uma equipe de 4 personagens para desbravar uma torre.";
    std::cout << std::endl;

    std::cout << "CASO QUEIRA PARAR DE JOGAR, DIGITE 'exit' (NAO FUNCIONA DURANTE A ESCOLHA DO NOME DO PERSONAGEM)" << std::endl;

    std::cout << std::endl << "********************************************************************************************************************************";
    std::cout << std::endl << "* 1 - Arqueiro                   2 - Barbaro                    3 - Bardo                      4 - Guerreiro                   *";
    std::cout << std::endl << "* Ataque Base: 7.0               Ataque Base: 12.0              Ataque Base: 2.0               Ataque Base 10.0                *";
    std::cout << std::endl << "* Defesa Base: 5.0               Defesa Base: 7.0               Defesa Base: 3.0               Defesa Base 7.0                 *";
    std::cout << std::endl << "* Vida Base: 20.0                Vida Base: 36.0                Vida Base: 24.0                Vida Base 30.0                  *";
    std::cout << std::endl << "* Mana Base: 8.0                 Mana Base: 4.0                 Mana Base: 10.0                Mana Base 5.0                   *";
    std::cout << std::endl << "* Dano Magico Base: 3.0          Dano Magico Base: 0.0          Dano Magico Base: 5.0          Dano Magico Base 4.0            *";
    std::cout << std::endl << "* Acerto Base: 0.0               Acerto Base: 0.0               Acerto Base: 0.0               Acerto Base 0.0                 *";
    std::cout << std::endl << "* Velocidade Base: 6.0           Velocidade Base: 4.0           Velocidade Base: 4.0           Velocidade Base 5.0             *";
    std::cout << std::endl << "*                                                                                                                              *";
    std::cout << std::endl << "*                                                                                                                              *";
    std::cout << std::endl << "* 5 - Ladino                     6 - Mago                        7 - Paladino                   8 - Sacerdote                  *";
    std::cout << std::endl << "* Ataque Base: 6.0               Ataque Base: 3.0                Ataque Base: 8.0               Ataque Base 3.0                *";
    std::cout << std::endl << "* Defesa Base: 5.0               Defesa Base: 2.0                Defesa Base: 9.0               Defesa Base 4.0                *";
    std::cout << std::endl << "* Vida Base: 24.0                Vida Base: 18.0                 Vida Base: 30.0                Vida Base 24.0                 *";
    std::cout << std::endl << "* Mana Base: 8.0                 Mana Base: 12.0                 Mana Base: 7.0                 Mana Base 10.0                 *";
    std::cout << std::endl << "* Dano Magico Base: 3.0          Dano Magico Base: 10.0          Dano Magico Base: 4.0          Dano Magico Base 5.0           *";
    std::cout << std::endl << "* Acerto Base: 0.0               Acerto Base: 0.0                Acerto Base: 0.0               Acerto Base 0.0                *";
    std::cout << std::endl << "* Velocidade Base: 6.0           Velocidade Base: 3.0            Velocidade Base: 5.0           Velocidade Base 2.0            *";
    std::cout << std::endl << "********************************************************************************************************************************";
    std::cout << std::endl;

    std::cout << std::endl << "Digite os nomes das classes ou os seus numeros para selecionar os personagens que voce ira usar.";

    do
    {
        std::cout << std::endl << "Classe do personagem 1: ";
        std::cin >> p0;
        teste = p0;

        for(int i=0; p0[i] != '\0'; i++)
        {
            if(teste == "exit")
            {
                std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                exit(0);
            }

            if(teste == "Arqueiro" || teste == "arqueiro"){
                p1 = 1;
                break;
            }
            else if(teste == "Barbaro" || teste == "barbaro"){
                p1 = 2;
                break;
            }
            else if(teste == "Bardo" || teste == "bardo"){
                p1 = 3;
                break;
            }
            else if(teste == "Guerreiro" || teste == "guerreiro"){
                p1 = 4;
                break;
            }
            else if(teste == "Ladino" || teste == "ladino"){
                p1 = 5;
                break;
            }
            else if(teste == "Mago" || teste == "mago"){
                p1 = 6;
                break;
            }
            else if(teste == "Paladino" || teste == "paladino"){
                p1 = 7;
                break;
            }
            else if(teste == "Sacerdote" || teste == "sacerdote"){
                p1 = 8;
                break;
            }

            else if(p0[i] >= 'a' && p0[i] <= 'z' || p0[i] >= 'A' && p0[i] <= 'Z')
            {
                try
                {
                    //Erro de digitar letra
                    throw (ExcecaoRPG());
                }

                catch (ExcecaoRPG L)
                {
                    L.letra();
                    break;
                }
            }
            else if(p0[i+1] == '\0')
                {
                    p1 = atoi(p0);

                    if(p1 < 1 || p1 > 8)
                    {
                        try
                        {
                            //Erro de digitar letra
                            throw (ExcecaoRPG());
                        }

                        catch (ExcecaoRPG N)
                        {
                            N.valor_personagem();
                            break;
                        }
                    }
                }
        }
    }while(p1 < 1 || p1 > 8);

    std::cout << "Digite o nome do personagem: ";
    std::cin.ignore();
    std::getline (std::cin,n1);


    do
    {
        std::cout << std::endl << "Classe do personagem 2: ";
        std::cin >> p0;
        teste = p0;

        for(int i=0; p0[i] != '\0'; i++)
        {
            if(teste == "exit")
            {
                std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                exit(0);
            }

            if(teste == "Arqueiro" || teste == "arqueiro"){
                p2 = 1;
                break;
            }
            else if(teste == "Barbaro" || teste == "barbaro"){
                p2 = 2;
                break;
            }
            else if(teste == "Bardo" || teste == "bardo"){
                p2 = 3;
                break;
            }
            else if(teste == "Guerreiro" || teste == "guerreiro"){
                p2 = 4;
                break;
            }
            else if(teste == "Ladino" || teste == "ladino"){
                p2 = 5;
                break;
            }
            else if(teste == "Mago" || teste == "mago"){
                p2 = 6;
                break;
            }
            else if(teste == "Paladino" || teste == "paladino"){
                p2 = 7;
                break;
            }
            else if(teste == "Sacerdote" || teste == "sacerdote"){
                p2 = 8;
                break;
            }

            else if(p0[i] >= 'a' && p0[i] <= 'z' || p0[i] >= 'A' && p0[i] <= 'Z')
            {
                try
                {
                    //Erro de digitar letra
                    throw (ExcecaoRPG());
                }

                catch (ExcecaoRPG L)
                {
                    L.letra();
                    break;
                }
            }
            else if(p0[i+1] == '\0')
                {
                    p2 = atoi(p0);

                    if(p2 < 1 || p2 > 8)
                    {
                        try
                        {
                            //Erro de digitar letra
                            throw (ExcecaoRPG());
                        }

                        catch (ExcecaoRPG N)
                        {
                            N.valor_personagem();
                            break;
                        }
                    }
                }
        }
    }while(p2 < 1 || p2 > 8);

    std::cout << "Digite o nome do personagem: ";
    std::cin.ignore();
    std::getline (std::cin,n2);


    do
    {
        std::cout << std::endl << "Classe do personagem 3: ";
        std::cin >> p0;
        teste = p0;

        for(int i=0; p0[i] != '\0'; i++)
        {
            if(teste == "exit")
            {
                std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                exit(0);
            }

            if(teste == "Arqueiro" || teste == "arqueiro"){
                p3 = 1;
                break;
            }
            else if(teste == "Barbaro" || teste == "barbaro"){
                p3 = 2;
                break;
            }
            else if(teste == "Bardo" || teste == "bardo"){
                p3 = 3;
                break;
            }
            else if(teste == "Guerreiro" || teste == "guerreiro"){
                p3 = 4;
                break;
            }
            else if(teste == "Ladino" || teste == "ladino"){
                p3 = 5;
                break;
            }
            else if(teste == "Mago" || teste == "mago"){
                p3 = 6;
                break;
            }
            else if(teste == "Paladino" || teste == "paladino"){
                p3 = 7;
                break;
            }
            else if(teste == "Sacerdote" || teste == "sacerdote"){
                p3 = 8;
                break;
            }

            else if(p0[i] >= 'a' && p0[i] <= 'z' || p0[i] >= 'A' && p0[i] <= 'Z')
            {
                try
                {
                    //Erro de digitar letra
                    throw (ExcecaoRPG());
                }

                catch (ExcecaoRPG L)
                {
                    L.letra();
                    break;
                }
            }
            else if(p0[i+1] == '\0')
                {
                    p3 = atoi(p0);

                    if(p3 < 1 || p3 > 8)
                    {
                        try
                        {
                            //Erro de digitar letra
                            throw (ExcecaoRPG());
                        }

                        catch (ExcecaoRPG N)
                        {
                            N.valor_personagem();
                            break;
                        }
                    }
                }
        }
    }while(p3 < 1 || p3 > 8);

    std::cout << "Digite o nome do personagem: ";
    std::cin.ignore();
    std::getline (std::cin,n3);

    do
    {

        std::cout << std::endl << "Classe do personagem 4: ";
        std::cin >> p0;
        teste = p0;

        for(int i=0; p0[i] != '\0'; i++)
        {
            if(teste == "exit")
            {
                std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                exit(0);
            }

            if(teste == "Arqueiro" || teste == "arqueiro"){
                p4 = 1;
                break;
            }
            else if(teste == "Barbaro" || teste == "barbaro"){
                p4 = 2;
                break;
            }
            else if(teste == "Bardo" || teste == "bardo"){
                p4 = 3;
                break;
            }
            else if(teste == "Guerreiro" || teste == "guerreiro"){
                p4 = 4;
                break;
            }
            else if(teste == "Ladino" || teste == "ladino"){
                p4 = 5;
                break;
            }
            else if(teste == "Mago" || teste == "mago"){
                p4 = 6;
                break;
            }
            else if(teste == "Paladino" || teste == "paladino"){
                p4 = 7;
                break;
            }
            else if(teste == "Sacerdote" || teste == "sacerdote"){
                p4 = 8;
                break;
            }

            else if(p0[i] >= 'a' && p0[i] <= 'z' || p0[i] >= 'A' && p0[i] <= 'Z')
            {
                try
                {
                    //Erro de digitar letra
                    throw (ExcecaoRPG());
                }

                catch (ExcecaoRPG L)
                {
                    L.letra();
                    break;
                }
            }
            else if(p0[i+1] == '\0')
                {
                    p4 = atoi(p0);

                    if(p4 < 1 || p4 > 8)
                    {
                        try
                        {
                            //Erro de digitar letra
                            throw (ExcecaoRPG());
                        }

                        catch (ExcecaoRPG N)
                        {
                            N.valor_personagem();
                            break;
                        }
                    }
                }
        }
    }while(p4 < 1 || p4 > 8);

    std::cout << "Digite o nome do personagem: ";
    std::cin.ignore();
    std::getline (std::cin,n4);

    Equipe equipe_jogador(p1,n1,p2,n2,p3,n3,p4,n4);

    std::cout<<"------------INFORMACOES------------"<<std::endl;
    for(int i=0; i<equipe_jogador.get_tamanho_equipe(); i++){

        std::cout<<std::endl;
        std::cout<<"Nome: "<<equipe_jogador.get_personagem(i)->get_nome()<<std::endl;
        std::cout<<"Classe: "<<equipe_jogador.get_personagem(i)->get_classe()<<std::endl;
        std::cout<<"Ataque: "<<equipe_jogador.get_personagem(i)->get_ataque()<<std::endl;
        std::cout<<"Defesa: "<<equipe_jogador.get_personagem(i)->get_defesa()<<std::endl;
        std::cout<<"Vida: "<<equipe_jogador.get_personagem(i)->get_vida()<<std::endl;
        std::cout<<"Mana: "<<equipe_jogador.get_personagem(i)->get_mana()<<std::endl;
        std::cout<<"Dano Magico: "<<equipe_jogador.get_personagem(i)->get_dano_magico()<<std::endl;
        std::cout<<"Acerto: "<<equipe_jogador.get_personagem(i)->get_acerto()<<std::endl;
        std::cout<<"Velocidade: "<<equipe_jogador.get_personagem(i)->get_velocidade()<<std::endl;
        std::cout<<std::endl;
    }

    this->_equipe_jogador = equipe_jogador;

    //informacoes_inimigos(_equipe_torre1);

    informacoes_jogador();
}

void Jogo::pre_batalha(){

    int op,nova_forca,nova_destreza,nova_constituicao,nova_inteligencia;
    double novo_ataque, nova_vida, nova_mana, novo_dano_magico, novo_acerto, nova_velocidade;
    string teste;
    char ponto[20];

    for(int i=0; i<_equipe_jogador.get_tamanho_equipe();i++){

        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout<<"Voce recebeu 3 pontos de maestria com *"<<_equipe_jogador.get_personagem(i)->get_nome()<<"* !"<<std::endl;
        std::cout<<"Escolha em quais atributos quer adiciona-los"<<std::endl;
        std::cout<<"1) Forca: "<<_equipe_jogador.get_personagem(i)->get_forca()<<std::endl;
        std::cout<<"2) Destreza: "<<_equipe_jogador.get_personagem(i)->get_destreza()<<std::endl;
        std::cout<<"3) Constituicao: "<<_equipe_jogador.get_personagem(i)->get_constituicao()<<std::endl;
        std::cout<<"4) Inteligencia: "<<_equipe_jogador.get_personagem(i)->get_inteligencia()<<std::endl;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;

        for(int j=0; j<3; j++){

            do
            {
            std::cout<<"Digite a destinaçao do ponto: ";
            std::cin>>ponto;
            teste = ponto;

            for(int i=0; ponto[i] != '\0'; i++)
            {
                if(teste == "exit")
                {
                    std::cout<<"Obrigado por jogar :) !!"<<std::endl;
                    exit(0);
                }

                if(teste == "Forca" || teste == "forca"){
                    op = 1;
                    break;
                }
                else if(teste == "Destreza" || teste == "destreza"){
                    op = 2;
                    break;
                }
                else if(teste == "Constituicao" || teste == "constituicao"){
                    op = 3;
                    break;
                }
                else if(teste == "Inteligencia" || teste == "inteligencia"){
                    op = 4;
                    break;
                }

                else if(ponto[i] >= 'a' && ponto[i] <= 'z' || ponto[i] >= 'A' && ponto[i] <= 'Z')
                {
                    try
                    {
                        //Erro de digitar letra
                        throw (ExcecaoRPG());
                    }

                    catch (ExcecaoRPG A)
                    {
                        A.atributo_texto();
                        break;
                    }
                }
                else if(ponto[i+1] == '\0')
                    {
                        op = atoi(ponto);

                        if(op < 1 || op > 4)
                        {
                            try
                            {
                                //Erro de digitar letra
                                throw (ExcecaoRPG());
                            }

                            catch (ExcecaoRPG AN)
                            {
                                AN.atributo_numero();
                                break;
                            }
                        }
                    }
            }
            }while(op < 1 || op > 4);


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
    }

    informacoes_jogador();
}

void Jogo::batalha(EquipeInimiga &equipe_inimiga){

    int ordem;
    int tamanho = _equipe_jogador.get_tamanho_equipe();

    srand (time(NULL));

    do{

        ordem = ordena_batalha(equipe_inimiga);

            if(ordem == 1){

                int i=0,j=0;

                while(_equipe_jogador.get_tamanho_equipe() != 0 && equipe_inimiga.get_tamanho_equipe_inimiga() != 0){

                    //PERSONAGEM
                    acao(i,equipe_inimiga);

                    if(equipe_inimiga.get_inimigo(0)->get_vida() <= 0){
                        j--;
                    }
                    else if(j == 1 && (equipe_inimiga.get_inimigo(0)->get_vida() <= 0 || equipe_inimiga.get_inimigo(1)->get_vida() <= 0)){
                        j--;
                    }
                    else if(j == 2 && (equipe_inimiga.get_inimigo(0)->get_vida() <= 0 || equipe_inimiga.get_inimigo(1)->get_vida() <= 0 || equipe_inimiga.get_inimigo(2)->get_vida() <= 0)){
                        j--;
                    }
                    else if(j == 3 && equipe_inimiga.get_inimigo(3)->get_vida() <= 0){
                        j = 0;
                    }
                    equipe_inimiga.IfInimigo_morrer();


                    if(equipe_inimiga.get_tamanho_equipe_inimiga()==0)
                        break;


                    //INIMIGO
                    int alvo0 = rand() % tamanho;
                    ataque_inimigo(equipe_inimiga,j,alvo0);
                    if(_equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0){
                        i--;
                    }
                    else if(i == 1 && (_equipe_jogador.get_personagem(1)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0)){
                        i--;
                    }
                    else if(i == 2 && (_equipe_jogador.get_personagem(1)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(2)->get_vida_batalha() <= 0)){
                        i--;
                    }
                    else if(i == 3 && _equipe_jogador.get_personagem(3)->get_vida_batalha() <= 0){
                        i = 0;
                    }
                    _equipe_jogador.IfPersonagem_morrer();

                    if(_equipe_jogador.get_tamanho_equipe()==0)
                        break;

                    tamanho = _equipe_jogador.get_tamanho_equipe();
                    informacoes_jogador();

                    //FIM
                    i++;
                    j++;

                    if(i >= _equipe_jogador.get_tamanho_equipe())
                        i = 0;
                    if(j >= equipe_inimiga.get_tamanho_equipe_inimiga())
                        j = 0;
                }
            }else{

                int i=0,j=0;

                while(_equipe_jogador.get_tamanho_equipe() != 0 && equipe_inimiga.get_tamanho_equipe_inimiga() != 0){

                    //INIMIGO
                    int alvo0 = rand() % tamanho;
                    ataque_inimigo(equipe_inimiga,j,alvo0);
                    if(_equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0){
                        i--;
                    }
                    else if(i == 1 && (_equipe_jogador.get_personagem(1)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0)){
                        i--;
                    }
                    else if(i == 2 && (_equipe_jogador.get_personagem(1)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(0)->get_vida_batalha() <= 0 || _equipe_jogador.get_personagem(2)->get_vida_batalha() <= 0)){
                        i--;
                    }
                    else if(i == 3 && _equipe_jogador.get_personagem(3)->get_vida_batalha() <= 0){
                        i = 0;
                    }
                    _equipe_jogador.IfPersonagem_morrer();

                    if(_equipe_jogador.get_tamanho_equipe()==0)
                        break;


                    tamanho = _equipe_jogador.get_tamanho_equipe();
                    informacoes_jogador();

                    //PERSONAGEM
                    acao(i,equipe_inimiga);

                    if(equipe_inimiga.get_inimigo(0)->get_vida() <= 0){
                        j--;
                    }
                    else if(j == 1 && (equipe_inimiga.get_inimigo(0)->get_vida() <= 0 || equipe_inimiga.get_inimigo(1)->get_vida() <= 0)){
                        j--;
                    }
                    else if(j == 2 && (equipe_inimiga.get_inimigo(0)->get_vida() <= 0 || equipe_inimiga.get_inimigo(1)->get_vida() <= 0 || equipe_inimiga.get_inimigo(2)->get_vida() <= 0)){
                        j--;
                    }
                    else if(j == 3 && equipe_inimiga.get_inimigo(3)->get_vida() <= 0){
                        j = 0;
                    }
                    equipe_inimiga.IfInimigo_morrer();

                    if(equipe_inimiga.get_tamanho_equipe_inimiga()==0)
                        break;

                    if(equipe_inimiga.get_tamanho_equipe_inimiga()==0)
                        break;



                    //FIM
                    i++;
                    j++;

                    if(i >= _equipe_jogador.get_tamanho_equipe())
                        i = 0;
                    if(j >= equipe_inimiga.get_tamanho_equipe_inimiga())
                        j = 0;
                }

            }

    }while(_equipe_jogador.get_tamanho_equipe() != 0 && equipe_inimiga.get_tamanho_equipe_inimiga() != 0);

    std::cout<<std::endl;
    std::cout<<std::endl;
}

void Jogo::ataque_inimigo(EquipeInimiga &equipe_torre, int posicao_inimigo, int posicao_jogador){

    double vida_personagem = _equipe_jogador.get_personagem(posicao_jogador)->get_vida_batalha();
    double defesa_personagem = _equipe_jogador.get_personagem(posicao_jogador)->get_defesa_batalha();
    double acerto_inimigo = equipe_torre.get_inimigo(posicao_inimigo)->get_acerto();
    double ataque_inimigo, dano;

    if(equipe_torre.get_inimigo(posicao_inimigo)->get_mana()>=5){

        int chance_ataque = rand() % 10 + 1;

        if( chance_ataque >6 ){

            ataque_inimigo= equipe_torre.get_inimigo(posicao_inimigo)->ataque_especial();

        }else{

            ataque_inimigo = equipe_torre.get_inimigo(posicao_inimigo)->atacar();

        }
    }else{

        ataque_inimigo = equipe_torre.get_inimigo(posicao_inimigo)->atacar();

    }

    //Verificando o acerto e aplicando o dano

    dano =ataque_inimigo/(1.0+defesa_personagem/10);

    int dado_ataque= rand() % 20;
    int dado_defesa= rand() % 20;

    if(dado_ataque==0){
        dano=0;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout << "O INIMIGO ERROU!" << std::endl;
    }
    else if(dado_ataque==19){
        dano*=2;
        std::cout<<"-----------------------------------------------------------------------"<<std::endl;
        std::cout << "O INIMIGO CRITOU!" << std::endl;
    }
    else if(dado_ataque+acerto_inimigo<dado_defesa){
        dano/=2;
    }

    vida_personagem-=dano;

    std::cout<<std::endl;
    std::cout <<"*"<<equipe_torre.get_inimigo(posicao_inimigo)->get_nome()<<"* CAUSOU *"<<dano<<" DE DANO EM *" << _equipe_jogador.get_personagem(posicao_jogador)->get_nome() <<"* !"<< std::endl;
    std::cout<<"-----------------------------------------------------------------------"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    _equipe_jogador.get_personagem(posicao_jogador)->set_vida_batalha(vida_personagem);

    return;
}

void Jogo::ciclo(){

    iniciar();

    //1 ANDAR
    pre_batalha();
    batalha(_equipe_torre1);
    if(_equipe_jogador.get_tamanho_equipe()==0){
        return;
    }

    //2 ANDAR
    std::cout<<"           *****VITORIA!!*****"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" SEUS HEROIS SOBEM PARA O 2º ANDAR DA TORRE !! "<<std::endl;
    pre_batalha();
    batalha(_equipe_torre2);
    if(_equipe_jogador.get_tamanho_equipe()==0){
        std::cout<<"PERDEU"<<std::endl;
        return;
    }

    //3 ANDAR
    std::cout<<"           *****VITORIA!!*****"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" SEUS HEROIS SOBEM PARA O 3º ANDAR DA TORRE !! "<<std::endl;
    pre_batalha();
    batalha(_equipe_torre3);
    if(_equipe_jogador.get_tamanho_equipe()==0){
        std::cout<<"PERDEU"<<std::endl;
        return;
    }

    //4 ANDAR
    std::cout<<"           *****VITORIA!!*****"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" SEUS HEROIS SOBEM PARA O 4º ANDAR DA TORRE !! "<<std::endl;
    pre_batalha();
    batalha(_equipe_torre4);
    if(_equipe_jogador.get_tamanho_equipe()==0){
        std::cout<<"PERDEU"<<std::endl;
        return;
    }

    //5 ANDAR
    std::cout<<"           *****VITORIA!!*****"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" SEUS HEROIS SOBEM PARA O 5º ANDAR DA TORRE !! "<<std::endl;
    pre_batalha();
    batalha(_equipe_torre5);
    if(_equipe_jogador.get_tamanho_equipe()==0){
        std::cout<<"PERDEU"<<std::endl;
        return;
    }

    std::cout<<"VOCE GANHOU"<<std::endl;

    return;
}
