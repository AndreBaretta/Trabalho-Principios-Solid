class Character{
   public:
      virtual void move() = 0;
      virtual void attack(Character*) = 0;
};

class Warrior : public Character{
   private:
      int health;
      int position;
      int power;
      int energy;
   public:
      void move();
      void attack(Character* target);
};

class Mage : public Character{
   private:
      int health;
      int position;
      int power;
      int mana;
   public:
      void move();
      void attack(Character* target);
};
