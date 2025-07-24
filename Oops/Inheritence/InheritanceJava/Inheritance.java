
class Animal{
    int id;

    public int getId(){
        return id;
    }

    public void setId(int id){
        this.id = id;
    }

    public void sound(){
        System.out.println("It is mute by default");
    }
};

class Dog extends Animal{
    private void bark(){
        System.out.println("Dog "+ getId() + " is barking");
    }

    @Override
    public void sound(){
        bark();
    }
}
public class Inheritance {
    public static void main(String[] args){
        Animal dog = new Dog();
        dog.setId(123);
        dog.sound();
    }
}