#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double salarioHora;  
    double quotaMensalVendas;
    static constexpr int CargaHoraria = 8;
std::string NomeEmpregado;


    double pagamentoMes(double horasTrabalhadas) {
      double CargaCumprida = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > CargaHoraria) {
        double extra = horasTrabalhadas - 8;
        CargaCumprida += extra / 2;
      }
	  return CargaCumprida * salarioHora;
    }
virtual void print(){
      std::cout << "Nome: " << this->NomeEmpregado << std::endl;
      std::cout << "Salario: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
    }
};

#endif
