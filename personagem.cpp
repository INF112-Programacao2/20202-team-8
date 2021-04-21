#include "personagem.h"

Personagem::Personagem(){
    _level = 1;
    _forca_base = 1.0;
    _constituicao_base = 1.0;
    _inteligencia_base = 1.0;
    _velocidade_base = 1.0;
    _forca_batalha = _forca_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;
    _velocidade_batalha = _velocidade_base;
}

Personagem::~Personagem(){}

unsigned long long int Personagem::get_level(){
    return this->_level;
}

long double Personagem::get_forca_base(){
    return this->_forca_base;
}

long double Personagem::get_constituicao_base(){
    return this->_constituicao_base;
}

long double Personagem::get_inteligencia_base(){
    return this->_inteligencia_base;
}

long double Personagem::get_velocidade_base(){
    return this->_velocidade_base;
}

long double Personagem::get_destreza_base(){
    return this->_destreza_batalha;
}

long double Personagem::get_forca_batalha(){
    return this->_forca_batalha;
}

long double Personagem::get_constituicao_batalha(){
    return this->_constituicao_batalha;
}

long double Personagem::get_inteligencia_batalha(){
    return this->_inteligencia_batalha;
}

long double Personagem::get_velocidade_batalha(){
    return this->_velocidade_batalha;
}

long double Personagem::get_destreza_batalha(){
    return this->_destreza_batalha;
}

void Personagem::set_level(unsigned long long level){
    _level = level;
}

void Personagem::set_forca_base(long double forca_base){
    _forca_base = forca_base;
    _forca_batalha = _forca_base;
}

void Personagem::set_constituicao_base(long double constituicao_base){
    _constituicao_base = constituicao_base;
    _constituicao_batalha = _constituicao_base;
}

void Personagem::set_inteligencia_base(long double inteligencia_base){
    _inteligencia_base = inteligencia_base;
    _inteligencia_batalha = _inteligencia_base;
}

void Personagem::set_velocidade_base(long double velocidade_base){
    _velocidade_base = velocidade_base;
    _velocidade_batalha = _velocidade_base;
}

void Personagem::set_destreza_base(long double destreza_base){
    _destreza_base = destreza_base;
    _destreza_batalha = _destreza_base;
}

void Personagem::set_forca_batalha(long double forca_batalha){
    _forca_batalha = forca_batalha;
}

void Personagem::set_constituicao_batalha(long double constituicao_batalha){
    _constituicao_batalha = constituicao_batalha;
}

void Personagem::set_inteligencia_batalha(long double inteligencia_batalha){
    _inteligencia_batalha = inteligencia_batalha;
}

void Personagem::set_velocidade_batalha(long double velocidade_batalha){
    _velocidade_batalha = velocidade_batalha;
}

void Personagem::set_destreza_batalha(long double destreza_batalha){
    _destreza_batalha = destreza_batalha;
}

void Personagem::level_up(){
    _level++;
    _forca_base += 5;
    _constituicao_base += 5;
    _inteligencia_base += 5;
    _velocidade_base += 5;
    _destreza_base += 5;
    _forca_batalha = _forca_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;
    _velocidade_batalha = _velocidade_base;
    _destreza_batalha = _destreza_base;
}

void Personagem::add_pontos_extra(long double forca_extra, long double constituicao_extra, long double inteligencia_extra, long double velocidade_extra, long double destreza_extra){
    _forca_base += forca_extra;
    _constituicao_base += constituicao_extra;
    _inteligencia_base += inteligencia_extra;
    _velocidade_base += velocidade_extra;
    _destreza_base += destreza_extra;
    _forca_batalha = _forca_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;
    _velocidade_batalha = _velocidade_base;
    _destreza_batalha = _destreza_base;
}

void Personagem::ataque_basico(){}
