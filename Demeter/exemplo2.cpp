class Engine{
   public:
      void start();
};

class Car{
   private:
      Engine engine;
   public:
      void startEngine(){
         this->engine.start();
      }
};

int main(){
   Car car;
   car.startEngine();
   return 0;
}
