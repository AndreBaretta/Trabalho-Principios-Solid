
class Animal{
   public:
      void eat(){
         std::cout << "The animal is eating\n"
      }
};

class Bird : Public Animal{
   public:
      void fly(){
         std::cout << "The bird is flying\n";
      }
};

int main(){
   Bird bird;
   bird.fly();  // Saída: "The bird is flying"
   bird.eat();  // Saída: "The animal is eating"
   return 0;
}
