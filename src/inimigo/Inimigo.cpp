#include "../../include/inimigo/Inimigo.h"

Inimigo::Inimigo(int nivel){
    _nivel=nivel;
}
Inimigo::~Inimigo(){}

//GET NOME
std::string Inimigo::get_nome(){
    return _nome;
}

//GET & SET STATS 
int Inimigo::get_ataque(){
    return _ataque;
}
int Inimigo::get_defesa(){
    return _defesa;
}
int Inimigo::get_vida(){
    return _vida;
}
int Inimigo::get_mana(){
    return _mana;
}
int Inimigo::get_dano_magico(){
    return _dano_magico;
}
int Inimigo::get_acerto(){
    return _acerto;
}
int Inimigo::get_velocidade(){
    return _velocidade;
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

//COMANDO PARA ATACAR E DEFENDER
int Inimigo::atacar(){
    return 0;
}
int Inimigo::defender(){
    return 0;
}

//COMANDOS PARA HABILIDADES ESPECIAIS
double Inimigo::ataque_1(){
    return 0.0;
}
double Inimigo::ataque_2(){
    return 0.0;
}
double Inimigo::ataque_3(){
    return 0.0;
}
double Inimigo::ataque_4(){
    return 0.0;
}
