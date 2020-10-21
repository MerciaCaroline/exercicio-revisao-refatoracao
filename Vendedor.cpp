#include <string>
#include <iostream>
#include "Empregado.hpp"
#define Meses_Trabalhados 12

class Vendedor : public Empregado {

  public:
	double quotaMensalVendas;
	double quotaAnualTotal;

	Vendedor(std::string nome, double salario, double quota, double horas){
      NomeEmpregado = nome;
      salarioHora = salario;
      quotaMensalVendas = quota;
      horasTrabalhadas = horas;
	quotaAnualTotal = quotaMensalVendas * Meses_Trabalhados;
    }

	virtual void print(){
      std::cout << "Nome: " << this->NomeEmpregado << std::endl;
      std::cout << "Salario: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
      std::cout << "Quota vendas: " << this->quotaAnualTotal << std::endl;
      std::cout << std::endl;
    }

};
