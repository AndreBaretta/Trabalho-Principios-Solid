#include <iostream>

class Animal{
   public:
      void eat(){
         std::cout << "The animal is eating\n"
      }
};

class Bird{
   private:
      Animal animal;
   public:
      void fly(){
         std::cout << "The bird is flying\n";
      }
      void eat(){
         this->animal.eat;
      }
};

int main(){
   Bird bird;
   bird.fly();  // Saída: "The bird is flying"
   bird.eat();  // Saída: "The animal is eating"
}
