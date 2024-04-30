#include <iostream>

class Calculator{
   private:
      float number1;
      char operation;
      float number2;
   public:
      void getNumber(){};   // Esse módulo coleta o número na interface e o atribui às variáveis number1 ou number2
      void getOperation();  // Esse módulo coleta a operação na interface e o atribui à variável operação
      float calculate();    // Esse módulo vai usar os valores coletados e retornar o resultado da operação desejada
};

