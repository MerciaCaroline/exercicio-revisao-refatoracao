#include <string>
#include <iostream>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
	static constexpr int Meses_Trabalhados = 12;
	double quotaMensalVendas;
	
	Vendedor(std::string nome, double salarioHora, double quotaMensalVendas, double horasTrabalhadas){
      nome = nome;
      salarioHora = salarioHora;
      quotaMensalVendas = quotaMensalVendas;
      horasTrabalhadas = horasTrabalhadas;
    }
	
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	
	virtual void print(){
      std::cout << "Nome: " << this->nome << std::endl;
      std::cout << "Salario: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
      std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
      std::cout << std::endl;
    }
	
};

