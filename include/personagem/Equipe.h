#ifndef EQUIPE_H
#define EQUIPE_H

#include <vector>
#include <string>
#include "Personagem.h"

class Equipe{
private:
    int _tamanho;
    void cria_personagem(int personagem, std::string nome);
public:
    std::vector<Personagem> _equipe;
    Equipe(){};
    Equipe(int personagem1,std::string nome1,int personagem2,std::string nome2,int personagem3,std::string nome3,int personagem4,std::string nome4);
    ~Equipe();

    int get_tamanho_equipe();
    Personagem* get_personagem(int ordem);
    void IfPersonagem_morrer();
};

#endif // EQUIPE_H
