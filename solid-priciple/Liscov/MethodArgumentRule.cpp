#include<iostream>
using namespace std;

class Parent{
    public: 
        virtual void print(string msg){
            cout << "Parent";
        }
};

class Child: public Parent{
    public:
     void print(string msg) override{
        cout << "Child: "<< msg ;
     }
};

class Client{
    private:
}