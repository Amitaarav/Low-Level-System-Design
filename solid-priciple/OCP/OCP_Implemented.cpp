#include<iostream>
#include<vector>

using namespace std;

class Product{
    public:
    string name;
    double price;

    public:
    Product(string name, double price){
        this->name = name;
        this->price = price;
    }
};

class ShoppingCart{
    public:
    vector<Product*> products;

    public:
    void addProduct(Product* product){
        products.push_back(product);
    }

    const vector<Product*> getProducts(){
        return products;
    }

    double getTotalPrice(){
        double totalPrice = 0;
        for(auto product : products){
            totalPrice += product->price;
        }
        return totalPrice;
    }
};

class ShoppingCartPrinter{
    public:
    ShoppingCart* cart;
    public:
    ShoppingCartPrinter(ShoppingCart* cart){
        this->cart = cart;
    }
    void printInvoice(){
        cout << "Shopping Cart Invoice:" << endl;
        for(auto product: cart->getProducts()){
            cout<<"Product name:"<<product->name << endl;
            cout<<"Product price:"<<product->price <<endl;
        }
        cout << "Total Price: "<< cart->getTotalPrice()<<endl;
    }
};

class ShoppingCartStorage{
    public:
    ShoppingCart* cart;
    public:
    virtual void save(ShoppingCart* cart){
        this->cart = cart;
    }
    
};

class ShoppingCartStorageToSQLDB : public ShoppingCartStorage{
    public:
    void saveToDatabase(){
        cout<<"Saving to SQL DB......"<<endl;
    }
};

class ShoppingCartStorageToNoSQLDB : public ShoppingCartStorage{
    public:
    void saveToDatabase(){
        cout<<"Saving to No SQL DB......"<<endl;
    }
};

class ShoppingCartStorageToFile : public ShoppingCartStorage{
    public:
    void saveToDatabase(){
        cout<<"Saving to file......"<<endl;
    }
};

int main(){
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new Product("Product 1", 10.0));
    cart->addProduct(new Product("Product 2", 20.0));
    cart->addProduct(new Product("Product 3", 30.0));
    ShoppingCartPrinter* printer = new ShoppingCartPrinter(cart);
    printer->printInvoice();

    ShoppingCartStorage* storage = new ShoppingCartStorageToSQLDB();
    storage->save(cart);

    storage = new ShoppingCartStorageToNoSQLDB();
    storage->save(cart);

    storage = new ShoppingCartStorageToFile();
    storage->save(cart);
    
    return 0;
}