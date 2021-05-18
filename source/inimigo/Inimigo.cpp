#include "../../include/inimigo/Inimigo.h"

// CONSTRUTOR
Inimigo::Inimigo(int nivel){
    _nivel=nivel;
}

// DESTRUTOR
Inimigo::~Inimigo(){}

// GET NOME
std::string Inimigo::get_nome(){
    return this->_nome;
}

// GET & SET STATS
double Inimigo::get_ataque(){
    return this->_ataque;
}

double Inimigo::get_defesa(){
    return this->_defesa;
}

double Inimigo::get_vida(){
    return this->_vida;
}

double Inimigo::get_mana(){
    return this->_mana;
}

double Inimigo::get_dano_magico(){
    return this->_dano_magico;
}

double Inimigo::get_acerto(){
    return this->_acerto;
}

double Inimigo::get_velocidade(){
    return this->_velocidade;
}

void Inimigo::set_ataque(double ataque){
    _ataque=ataque;
}

void Inimigo::set_defesa(double defesa){
    _defesa=defesa;
}

void Inimigo::set_vida(double vida){
    _vida=vida;
}

void Inimigo::set_mana(double mana){
    _mana=mana;
}

void Inimigo::set_dano_magico(double dano_magico){
    _dano_magico=dano_magico;
}

void Inimigo::set_acerto(double acerto){
    _acerto=acerto;
}

void Inimigo::set_velocidade(double velocidade){
    _velocidade=velocidade;
}

// ATAQUE NORMAL
double Inimigo::atacar(){
    return this->_ataque;
}

// ATAQUE ESPECIAL
double Inimigo::ataque_especial(){
    set_mana(_mana-5.0);
    return this->_dano_magico*2.0;
}
