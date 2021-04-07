#ifndef PERSONAGEM_H
#define PERSONAGEM_H

class Personagem {
protected:
    unsigned long long int _level;
    long double _forca_base;
    long double _constituicao_base;
    long double _inteligencia_base;
    long double _velocidade_base;
    long double _destreza_base;
    long double _forca_batalha;
    long double _constituicao_batalha;
    long double _inteligencia_batalha;
    long double _velocidade_batalha;
    long double _destreza_batalha;
public:
    Personagem();
    ~Personagem();
    unsigned long long int get_level();
    long double get_forca_base();
    long double get_constituicao_base();
    long double get_inteligencia_base();
    long double get_velocidade_base();
    long double get_destreza_base();
    long double get_forca_batalha();
    long double get_constituicao_batalha();
    long double get_inteligencia_batalha();
    long double get_velocidade_batalha();
    long double get_destreza_batalha();
    void set_level(unsigned long long int level);
    void set_forca_base(long double forca_base);
    void set_constituicao_base(long double constituicao_base);
    void set_inteligencia_base(long double inteligencia_base);
    void set_velocidade_base(long double velocidade_base);
    void set_destreza_base(long double destreza_base);
    void set_forca_batalha(long double forca_batalha);
    void set_constituicao_batalha(long double constituicao_batalha);
    void set_inteligencia_batalha(long double inteligencia_batalha);
    void set_velocidade_batalha(long double velocidade_batalha);
    void set_destreza_batalha(long double destreza_batalha);
    void level_up();
    void add_pontos_extra(long double forca_extra, long double constituicao_extra, long double inteligencia_extra, long double velocidade_extra, long double destreza_extra);
};

#endif // PERSONAGEM_H
