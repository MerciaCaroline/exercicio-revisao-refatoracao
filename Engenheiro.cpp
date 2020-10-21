#include <string>
#include <iostream>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    int projetos;
	
	Engenheiro(std::string nome, double salario, int proj, double horas){
      NomeEmpregado = nome;
      salarioHora = salario;
      projetos = proj;
      horasTrabalhadas = horas;
    }

    virtual void print(){
      std::cout << "Nome: " << this->NomeEmpregado << std::endl;
      std::cout << "Salario: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
      std::cout << "Projetos: " << this->projetos << std::endl;
      std::cout << std::endl;
    }
};
