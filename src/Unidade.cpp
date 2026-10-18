#include "Unidade.hpp"

#include <random>

// Inicializa o poder de ataque base e zera o registro de destruições
Unidade::Unidade(int poderAtaque)
    : poderAtaque(poderAtaque), destruicoes(0) {}

// Destrutor virtual (a classe base não possui recursos dinâmicos)
Unidade::~Unidade() {}

// Incrementa o contador de destruições
void Unidade::somaDestruicao() {
    destruicoes++;
}

// Retorna o contador de destruições
int Unidade::getDestruicoes() const {
    return destruicoes;
}

// Gera um número aleatório em [minimo, maximo].
int Unidade::sorteiaValor(int minimo, int maximo) {
    static std::mt19937 gerador(std::random_device{}());
    std::uniform_int_distribution<int> distribuicao(minimo, maximo);
    return distribuicao(gerador);
}