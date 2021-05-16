#include <string>
#include <iostream>
#include "../../include/personagem/Personagem.h"

//CONSTRUTOR E DESTRUTOR
Personagem::Personagem(std::string nome):
    _nome(nome) {
    _classe="Personagem";
}

Personagem::~Personagem(){}

//GET NOME
std::string Personagem::get_nome(){
    return this->_nome;
}

//GET CLASSE
std::string Personagem::get_classe(){
    return this->_classe;
}

//GET & SET MODIFICADORES
int Personagem::get_forca(){
    return this->_forca;
}
int Personagem::get_destreza(){
    return this->_destreza;
}
int Personagem::get_constituicao(){
    return this->_constituicao;
}
int Personagem::get_inteligencia(){
    return this->_inteligencia;
}
void Personagem::set_forca(int forca){
    _forca=forca;
}
void Personagem::set_destreza(int destreza){
    _destreza=destreza;
}
void Personagem::set_constituicao(int constituicao){
    _constituicao=constituicao;
}
void Personagem::set_inteligencia(int inteligencia){
    _inteligencia=inteligencia;
}

//GET & SET STATS 
int Personagem::get_ataque(){
    return this->_ataque;
}
int Personagem::get_defesa(){
    return this->_defesa;
}
int Personagem::get_vida(){
    return this->_vida;
}
int Personagem::get_mana(){
    return this->_mana;
}
int Personagem::get_dano_magico(){
    return this->_dano_magico;
}
int Personagem::get_acerto(){
    return this->_acerto;
}
int Personagem::get_velocidade(){
    return this->_velocidade;
}
void Personagem::set_ataque(double ataque){
    _ataque=ataque;
}
void Personagem::set_defesa(double defesa){
    _defesa=defesa;
}
void Personagem::set_vida(double vida){
    _vida=vida;
}
void Personagem::set_mana(double mana){
    _mana=mana;
}
void Personagem::set_dano_magico(double dano_magico){
    _dano_magico=dano_magico;
}
void Personagem::set_acerto(double acerto){
    _acerto=acerto;
}
void Personagem::set_velocidade(double velocidade){
    _velocidade=velocidade;
}

//GET STATS (BASE)
int Personagem::get_ataque_base(){
    return this->_ataque_base;
}
int Personagem::get_defesa_base(){
    return this->_defesa_base;
}
int Personagem::get_vida_base(){
    return this->_vida_base;
}
int Personagem::get_mana_base(){
    return this->_mana_base;
}
int Personagem::get_dano_magico_base(){
    return this->_dano_magico_base;
}
int Personagem::get_acerto_base(){
    return this->_acerto_base;
}
int Personagem::get_velocidade_base(){
    return this->_velocidade_base;
}

//GET & SET STATS (BATALHA)
int Personagem::get_ataque_batalha(){
    return this->_ataque_batalha;
}
int Personagem::get_defesa_batalha(){
    return this->_defesa_batalha;
}
int Personagem::get_vida_batalha(){
    return this->_vida_batalha;
}
int Personagem::get_mana_batalha(){
    return this->_mana_batalha;
}
int Personagem::get_dano_magico_batalha(){
    return this->_dano_magico_batalha;
}
int Personagem::get_acerto_batalha(){
    return this->_acerto_batalha;
}
int Personagem::get_velocidade_batalha(){
    return this->_velocidade_batalha;
}
void Personagem::set_ataque_batalha(double ataque_batalha){
    _ataque_batalha=ataque_batalha;
}
void Personagem::set_defesa_batalha(double defesa_batalha){
    _defesa_batalha=defesa_batalha;
}
void Personagem::set_vida_batalha(double vida_batalha){
    _vida_batalha=vida_batalha;
}
void Personagem::set_mana_batalha(double mana_batalha){
    _mana_batalha=mana_batalha;
}
void Personagem::set_dano_magico_batalha(double dano_magico_batalha){
    _dano_magico_batalha=dano_magico_batalha;
}
void Personagem::set_acerto_batalha(double acerto_batalha){
    _acerto_batalha=acerto_batalha;
}
void Personagem::set_velocidade_batalha(double velocidade_batalha){
    _velocidade_batalha=velocidade_batalha;
}

int Personagem::atacar(){
    return 0;
}
int Personagem::defender(){
    return 0;
}

//COMANDOS PARA HABILIDADES ESPECIAIS
double Personagem::ataque_1(){
    return 0.0;
}

double Personagem::ataque_2(){
    return 0.0;
}
