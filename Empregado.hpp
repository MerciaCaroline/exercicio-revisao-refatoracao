#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    double salarioHora;
    double horasTrabalhadas;
    static constexpr int CargaHoraria = 8;
    std::string NomeEmpregado;


    double pagamentoMes(double horasTrabalhadas) {
      double CargaCumprida = horasTrabalhadas;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > CargaHoraria) {
        double extra = horasTrabalhadas - CargaHoraria;
        CargaCumprida += (extra / 2);
      }
	  return CargaCumprida * salarioHora;
    }

};

#endif
