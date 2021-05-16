cmake_minimum_required(VERSION 3.5)

project(INF112_ProjetoFinal LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(INF112_ProjetoFinal ../include/jogo.h ../include/inimigo/EquipeInimiga.h ../include/inimigo/Inimigo.h ../include/inimigo/Skull.h ../include/inimigo/Slime.h
  ../include/inimigo/Troll.h ../include/inimigo/Witcher.h ../include/personagem/Equipe.h ../include/personagem/Personagem.h ../include/personagem/Arqueiro.h ../include/personagem/Barbaro.h
  ../include/personagem/Bardo.h ../include/personagem/Guerreiro.h ../include/personagem/Ladino.h ../include/personagem/Mago.h ../include/personagem/Paladino.h ../include/personagem/Sacerdote.h ../src/jogo.cpp
  ../src/inimigo/EquipeInimiga.cpp ../src/inimigo/Inimigo.cpp ../src/inimigo/Skull.cpp ../src/inimigo/Slime.cpp ../src/inimigo/Troll.cpp ../src/inimigo/Witcher.cpp
  ../src/personagem/Equipe.cpp ../src/personagem/Personagem.cpp ../src/personagem/Arqueiro.cpp ../src/personagem/Barbaro.cpp ../src/personagem/Bardo.cpp ../src/personagem/Guerreiro.cpp
  ../src/personagem/Ladino.cpp ../src/personagem/Mago.cpp ../src/personagem/Paladino.cpp ../src/personagem/Sacerdote.cpp ../src/main.cpp)
