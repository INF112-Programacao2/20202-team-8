#include <vector>
#include <iostream>
#include "../../include/personagem/Equipe.h"
#include "../../include/personagem/Personagem.h"
#include "../../include/personagem/Arqueiro.h"
#include "../../include/personagem/Barbaro.h"
#include "../../include/personagem/Bardo.h"
#include "../../include/personagem/Guerreiro.h"
#include "../../include/personagem/Ladino.h"
#include "../../include/personagem/Mago.h"
#include "../../include/personagem/Paladino.h"
#include "../../include/personagem/Sacerdote.h"

// METODO PARA DIMINUIR O CONSTRUTOR
void Equipe::cria_personagem(int personagem, std::string nome){
    if(personagem==0){
        Personagem *a = new Personagem(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Arqueiro *a = new Arqueiro(nome);
        _equipe.push_back(a);
    }
    else if(personagem==2){
        Barbaro *a = new Barbaro(nome);
        _equipe.push_back(a);
    }
    else if(personagem==3){
        Bardo *a = new Bardo(nome);
        _equipe.push_back(a);
    }
    else if(personagem==4){
        Guerreiro *a = new Guerreiro(nome);
        _equipe.push_back(a);
    }
    else if(personagem==5){
        Ladino *a = new Ladino(nome);
        _equipe.push_back(a);
    }
    else if(personagem==6){
        Mago *a = new Mago(nome);
        _equipe.push_back(a);
    }
    else if(personagem==7){
        Paladino *a = new Paladino(nome);
        _equipe.push_back(a);
    }
    else if(personagem==8){
        Sacerdote *a = new Sacerdote(nome);
        _equipe.push_back(a);
    }
}

// METODO PARA DIMINUIR O CONSTRUTOR DE COPIA
void Equipe::realoca(const Equipe &eq){
    for(int i=0;i<eq._tamanho;i++){
        if(eq._equipe[i]->get_classe()=="Arqueiro"){
          Arqueiro *a = new Arqueiro("");
          *a = *((Arqueiro *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Barbaro"){
          Barbaro *a = new Barbaro("");
          *a = *((Barbaro *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Bardo"){
          Bardo *a = new Bardo("");
          *a = *((Bardo *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Guerreiro"){
          Guerreiro *a = new Guerreiro("");
          *a = *((Guerreiro *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Ladino"){
          Ladino *a = new Ladino("");
          *a = *((Ladino *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Mago"){
          Mago *a = new Mago("");
          *a = *((Mago *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Paladino"){
          Paladino *a = new Paladino("");
          *a = *((Paladino *)eq._equipe[i]);
          _equipe.push_back(a);
        }
        else if(eq._equipe[i]->get_classe()=="Sacerdote"){
          Sacerdote *a = new Sacerdote("");
          *a = *((Sacerdote *)eq._equipe[i]);
          _equipe.push_back(a);
        }
    }
}

// CONSTRUTOR
Equipe::Equipe(int personagem1,std::string nome1,int personagem2,std::string nome2,int personagem3,std::string nome3,int personagem4,std::string nome4){
    cria_personagem(personagem1,nome1);
    cria_personagem(personagem2,nome2);
    cria_personagem(personagem3,nome3);
    cria_personagem(personagem4,nome4);
    _tamanho = _equipe.size();
}

// CONSTRUTOR DE COPIA
Equipe::Equipe(const Equipe& eq) : _tamanho(eq._tamanho){
    _equipe.clear();
    realoca(eq);
}

// SOBRECARREGANDO O OPERADOR = PRA FAZER UMA COPIA MAIS ELABORADA
Equipe& Equipe::operator=(const Equipe &eq){
    _tamanho=eq._tamanho;
    _equipe.clear();
    realoca(eq);
    return *this;
}

// DESTRUTOR
Equipe::~Equipe(){
  for(Personagem *p : _equipe) {
    delete p;
  }
}

// GETS
int Equipe::get_tamanho_equipe(){
    return _tamanho;
}

Personagem* Equipe::get_personagem(int ordem){
    Personagem* aux;

    if(ordem==0){
        aux=_equipe[0];
        return aux;
    }else if(ordem==1){
        aux=_equipe[1];
        return aux;
    }else if(ordem==2){
        aux=_equipe[2];
        return aux;
    }else{
        aux=_equipe[3];
        return aux;
        }
}

// CHECA SE ALGUM PERSONAGEM MORREU
void Equipe::IfPersonagem_morrer(){
    std::vector<Personagem*> aux;

    for (Personagem* pers : _equipe) {
      if (pers->get_vida_batalha() > 0) {
        aux.push_back(pers);
      }
    }
    _equipe = aux;
    _tamanho = _equipe.size();
}
