#ifndef AERONAVE_HPP
#define AERONAVE_HPP

#include "Unidade.hpp"

#include <string>

/**
 * Unidade aérea: caças, helicópteros e similares.
 * Atributos próprios: manobrabilidade (30 a 70) e alcance (20 a 50).
 * O poderAtaque base (50 a 90) é herdado de Unidade.
 */
class Aeronave : public Unidade {
private:
    int manobrabilidade;  // Agilidade da aeronave (30 a 70)
    int alcance;          // Distância de operação da aeronave (20 a 50)

public:
    // Construtor: sorteia poderAtaque, manobrabilidade e alcance nas faixas do enunciado
    Aeronave();

    // Destrutor (sobrescreve o destrutor virtual da base)
    ~Aeronave() override;

    // Poder de ataque final:
    // ((poderAtaque*5) + (manobrabilidade*3) + (alcance*2)) / 10
    int getPoderAtaque() const override;

    // Retorna "Aeronave"
    std::string getTipo() const override;
};

#endif // AERONAVE_HPP