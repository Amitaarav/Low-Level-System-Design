#include <iostream>
using namespace std;

// create an interface class
class Burger{
    public:
        virtual void prepare() = 0; // pure virtual function
        virtual ~Burger(){}; // Virtual destructor

};

// create 3 concrete classes

class BasicBurger : public Burger{
    public:
        void prepare() override{
            cout << "Preparing Basic Burger with bun, patty , and Ketchup" << endl;
        }
};

class StandardBurger : public Burger{
    public:
        void prepare() override{
            cout << "Preparing Standard Burger with bun, patty , cheese and lattuce" << endl;
        }
};

class PremiumBurger : public Burger{
    public:
        void prepare() override{
            cout << "Preparing Premium Burger with bun, patty , premium cheese, secret sause and Lattuce" << endl;
        }
};


// create burger factory class

class BurgerFactory{
    public:
        Burger* createBurger(string& burgerType){
            if(burgerType == "basic"){
                return new BasicBurger();
            } else if( burgerType == "standard"){
                return new StandardBurger();
            } else if( burgerType == "premium"){
                return new PremiumBurger();
            } else{
                cout << "Invalid burger type" << endl;
                return nullptr;
            }
        }

};

int main(){
            string burgerType = "premium";

            BurgerFactory* myBurgerFactory = new BurgerFactory();

            Burger* burger = myBurgerFactory -> createBurger(burgerType);

            burger-> prepare();

            return 0;
}