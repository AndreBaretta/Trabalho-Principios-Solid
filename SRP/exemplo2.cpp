class Interface{
   public:
      float getNumber();    // Esse método vai coletar o valor do número na interface.
      char getOperation();  // Esse método vai coletar a operação desejada na interface.
};                          // Sendo assim, a classe Calculator não terá várias responsabilidades.

class Calculator{
   private:
      float number1;
      char operation;
      float number2;
   public:
      void setNumber1(float num);   // Método utilizado para receber o valor de number1.
      void setNumber2(float num);   // Método utilizado para receber o valor de number2.
      void setOperation(char op);   // Método utilizado para receber a operação a ser feita.
      float calculate();    
};
