#include <string>
#include <iostream>
#include "../../include/personagem/Personagem.h"

//CONSTRUTOR E DESTRUTOR
Personagem::Personagem(std::string nome, int forca, int destreza, int constituicao, int inteligencia):
    _nome(nome), _forca(forca), _destreza(destreza), _constituicao(constituicao), _inteligencia(inteligencia) {}
Personagem::~Personagem(){}

//GET NOME
std::string Personagem::get_nome(){
    return _nome;
}

//GET & SET MODIFICADORES
int Personagem::get_forca(){
    return _forca;
}
int Personagem::get_destreza(){
    return _destreza;
}
int Personagem::get_constituicao(){
    return _constituicao;
}
int Personagem::get_inteligencia(){
    return _inteligencia;
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
    return _ataque;
}
int Personagem::get_defesa(){
    return _defesa;
}
int Personagem::get_vida(){
    return _vida;
}
int Personagem::get_mana(){
    return _mana;
}
int Personagem::get_dano_magico(){
    return _dano_magico;
}
int Personagem::get_acerto(){
    return _acerto;
}
int Personagem::get_velocidade(){
    return _velocidade;
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
    return _ataque_base;
}
int Personagem::get_defesa_base(){
    return _defesa_base;
}
int Personagem::get_vida_base(){
    return _vida_base;
}
int Personagem::get_mana_base(){
    return _mana_base;
}
int Personagem::get_dano_magico_base(){
    return _dano_magico_base;
}
int Personagem::get_acerto_base(){
    return _acerto_base;
}
int Personagem::get_velocidade_base(){
    return _velocidade_base;
}

//GET & SET STATS (BATALHA)
int Personagem::get_ataque_batalha(){
    return _ataque_batalha;
}
int Personagem::get_defesa_batalha(){
    return _defesa_batalha;
}
int Personagem::get_vida_batalha(){
    return _vida_batalha;
}
int Personagem::get_mana_batalha(){
    return _mana_batalha;
}
int Personagem::get_dano_magico_batalha(){
    return _dano_magico_batalha;
}
int Personagem::get_acerto_batalha(){
    return _acerto_batalha;
}
int Personagem::get_velocidade_batalha(){
    return _velocidade_batalha;
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

//COMANDO PARA ATACAR E DEFENDER
/*int Personagem::acao(){

    int op;
    std::cout<<"-----------------------------------------------------------------------"<<std::endl;
    std::cout<<"Turno de *"<<_nome<<"* , realize uma acao!"<<std::endl;
    std::cout<<"1) Atacar: "<<std::endl;
    std::cout<<"2) Defender: "<<std::endl;
    std::cout<<"3) Usar Habilidade: "<<std::endl;
    std::cout<<"-----------------------------------------------------------------------"<<std::endl;
    std::cin>>op;

    switch (op)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    default:
        break;
    }
}*/
int Personagem::atacar(){
    return 0;
}
int Personagem::defender(){
    return 0;
}
