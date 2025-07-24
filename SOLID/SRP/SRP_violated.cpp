#include <iostream>
#include <vector>

using namespace std;

class Product {
    public:
        string name;
        double price;

        Product(string name, double price){
            this->name = name;
            this->price = price;
        }
};

class ShoppingCart{
    private:
        vector<Product*> products;
    public:
        void addProduct(Product* product){
            products.push_back(product);
        }
        const vector<Product*> getProducts(){
            return products;
        }

        // methods
        // 1. Calculate total price
        double getTotalPrice(){
            double totalPrice = 0;
            for(auto product : products){
                totalPrice += product->price;
            }
            return totalPrice;
        }
        // 2. Print invoice (Should be in separate class)
        void printInvoice(){
            cout << "Shopping Cart Invoice:" << endl;
            for(auto product: products){
                cout<<"Product name:"<<product->name << endl;
                cout<<"Product price:"<<product->price <<endl;
            }
            cout << "Total Price: "<< getTotalPrice()<<endl;
        }
        //3. save to DB (should be in separate class)
        void saveToDatabase(){
            cout<<"Saving to DB"<<endl;
        }
};
int main(){
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new Product("Product 1", 10.0));
    cart->addProduct(new Product("Product 2", 20.0));
    cart->addProduct(new Product("Product 3", 30.0));
    cart->printInvoice();
    cart->saveToDatabase();
}