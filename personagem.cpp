#include <string>
#include "personagem.h"

// CONSTRUTOR
Personagem::Personagem(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia):
    _nome(nome), _forca(forca), _destreza(destreza), _constituicao(constituicao), _inteligencia(inteligencia),
    _ataque_base(0.0 + forca), _defesa_base(0.0), _vida_base(0.0 + constituicao), _mana_base(0.0 + inteligencia),
    _dano_magico_base(0.0 + inteligencia), _acerto_base(0.0 + destreza), _velocidade_base(0.0 + destreza),
    _ataque_batalha(0.0 + forca), _defesa_batalha(0.0), _vida_batalha(0.0 + constituicao), _mana_batalha(0.0 + inteligencia),
    _dano_magico_batalha(0.0 + inteligencia), _acerto_batalha(0.0 + destreza), _velocidade_batalha(0.0 + destreza) {}

// DESTRUTOR
Personagem::~Personagem(){}

// GET/SET NOME
std::string Personagem::get_nome(){
    return _nome;
}

void Personagem::set_nome(std::string nome){
    _nome = nome;
}

// GET/SET NIVEL
unsigned long long int Personagem::get_nivel(){
    return _nivel;
}

void Personagem::set_nivel(unsigned long long nivel){
    _nivel = nivel;
}

// GET/SET MODIFICADORES
long double Personagem::get_forca(){
    return _forca;
}

long double Personagem::get_destreza(){
    return _destreza;
}

long double Personagem::get_constituicao(){
    return _constituicao;
}

long double Personagem::get_inteligencia(){
    return _inteligencia;
}

void Personagem::set_forca(long double forca){
    _forca = forca;
}

void Personagem::set_destreza(long double destreza){
    _destreza = destreza;
}

void Personagem::set_constituicao(long double constituicao){
    _constituicao = constituicao;
}

void Personagem::set_inteligencia(long double inteligencia){
    _inteligencia = inteligencia;
}

// GET/SET STATS (BASE)
long double Personagem::get_ataque_base(){
    return _ataque_base;
}

long double Personagem::get_defesa_base(){
    return _defesa_base;
}

long double Personagem::get_vida_base(){
    return _vida_base;
}

long double Personagem::get_mana_base(){
    return _mana_base;
}

long double Personagem::get_dano_magico_base(){
    return _dano_magico_base;
}

long double Personagem::get_acerto_base(){
    return _acerto_base;
}

long double Personagem::get_velocidade_base(){
    return _velocidade_base;
}

void Personagem::set_ataque_base(long double ataque_base){
    _ataque_base = ataque_base;
}

void Personagem::set_defesa_base(long double defesa_base){
    _defesa_base = defesa_base;
}

void Personagem::set_vida_base(long double vida_base){
    _vida_base = vida_base;
}

void Personagem::set_mana_base(long double mana_base){
    _mana_base = mana_base;
}

void Personagem::set_dano_magico_base(long double dano_magico_base){
    _dano_magico_base = dano_magico_base;
}

void Personagem::set_acerto_base(long double acerto_base){
    _acerto_base = acerto_base;
}

void Personagem::set_velocidade_base(long double velocidade_base){
    _velocidade_base = velocidade_base;
}

// GET/SET STATS (BATALHA)
long double Personagem::get_ataque_batalha(){
    return _ataque_batalha;
}

long double Personagem::get_defesa_batalha(){
    return _defesa_batalha;
}

long double Personagem::get_vida_batalha(){
    return _vida_batalha;
}

long double Personagem::get_mana_batalha(){
    return _mana_batalha;
}

long double Personagem::get_dano_magico_batalha(){
    return _dano_magico_batalha;
}

long double Personagem::get_acerto_batalha(){
    return _acerto_batalha;
}

long double Personagem::get_velocidade_batalha(){
    return _velocidade_batalha;
}

void Personagem::set_ataque_batalha(long double ataque_batalha){
    _ataque_batalha = ataque_batalha;
}

void Personagem::set_defesa_batalha(long double defesa_batalha){
    _defesa_batalha = defesa_batalha;
}

void Personagem::set_vida_batalha(long double vida_batalha){
    _vida_batalha = vida_batalha;
}

void Personagem::set_mana_batalha(long double mana_batalha){
    _mana_batalha = mana_batalha;
}

void Personagem::set_dano_magico_batalha(long double dano_magico_batalha){
    _dano_magico_batalha = dano_magico_batalha;
}

void Personagem::set_acerto_batalha(long double acerto_batalha){
    _acerto_batalha = acerto_batalha;
}

void Personagem::set_velocidade_batalha(long double velocidade_batalha){
    _velocidade_batalha = velocidade_batalha;
}

void Personagem::level_up(long double forca_extra, long double destreza_extra, long double constituicao_extra, long double inteligencia_extra){
    _nivel++;
    // MODIFICADORES
    _forca += forca_extra;
    _destreza += destreza_extra;
    _constituicao += constituicao_extra;
    _inteligencia += inteligencia_extra;
    // STATS (BASE)
    _ataque_base += forca_extra;
    _vida_base += constituicao_extra;
    _mana_base += inteligencia_extra;
    _dano_magico_base += inteligencia_extra;
    _acerto_base += destreza_extra;
    _velocidade_base += destreza_extra;
    // STATS (BATALHA)
    _ataque_batalha = _ataque_base;
    _vida_batalha = _vida_base;
    _mana_batalha = _mana_base;
    _dano_magico_batalha = _dano_magico_base;
    _acerto_batalha = _acerto_base;
    _velocidade_batalha = _velocidade_base;
}

int Personagem::atacar(){
    return 0;
}

int Personagem::defender(){
    return 0;
}
