#include <iostream>
using namespace std;

class Singleton{


    private:
        static Singleton* instance;
        Singleton(){
            cout << "Singleton Constructor called new object created" << endl;
        }
    
    public:
        static Singleton* getInstance(){
            if(instance == nullptr){
                instance = new Singleton();
            }
            return instance;
        }
};

Singleton* Singleton::instance = nullptr;

int main(){
    Singleton* S1 = Singleton :: getInstance();
    Singleton* S2 = Singleton :: getInstance();

    cout << (S1 == S2) << endl;
}