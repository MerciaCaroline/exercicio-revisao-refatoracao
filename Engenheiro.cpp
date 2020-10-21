#include <string>
#include <iostream>

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
	int projetos;
	
	
	Engenheiro(std::string nome, double salarioHora, int projetos, double horasTrabalhadas){
      nome = nome;
      salarioHora = salarioHora;
      projetos = projetos;
      horasTrabalhadas = horasTrabalhadas;
    }

    virtual void print(){
      std::cout << "Nome: " << this->nome << std::endl;
      std::cout << "Salario: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
      std::cout << "Projetos: " << this->projetos << std::endl;
      std::cout << std::endl;
    }
};

