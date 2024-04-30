class Engine{
   public:
      void start();
};

class Car{
   private:
      Engine* engine;
   public:
      Engine* getEngine(){
         return this->engine;
      }
};

int main(){
   Car car;
   car.getEngine->start();
   return 0;
}
