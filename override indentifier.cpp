//To avoid inadvertently create new function in derived classes.v

// C++ 03
class Dog {
   virtual void A(int);
   virtual void B() const;
};

class Yellowdog : public Dog {
   virtual void A(float);  // Created a new function
   virtual void B(); // Created a new function 
};


// C++ 11
class DogNew {
   virtual void A(int);
   virtual void B() const;
   void C();
};

class YellowdogNew : public Dog {
   virtual void A(float) override;  // Error: no function to override
   virtual void B() override;       // Error: no function to override
   void C() override;               // Error: not a virtual function
};


int main() {

    return 0;

}
