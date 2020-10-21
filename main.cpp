#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3, 9.5);
    eng1.print();

  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 1, 8);
    eng2.print();

    Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2,8);
    eng3.print();


  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000,6);
    vend1.print();

    Vendedor vend2 = Vendedor("Jose Mormont", 25, 3000,8);
    vend2.print();

  Vendedor vend3 = Vendedor("Sonia Stark", 30, 4000,8);
    vend3.print();

  return 0;
}
