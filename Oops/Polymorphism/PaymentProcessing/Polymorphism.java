interface Payment{
    public void pay();
}

class CashPayment implements Payment{
    @Override
    public void pay(){
        System.out.println("This payment is through cash");

    }
}

class CreditPayment implements Payment{
    @Override
    public void pay(){
        System.out.println("This payment is through Credit card");
    }
}

public class Polymorphism{
    public static void main(String[] args) {
        CashPayment c = new CashPayment();
        c.pay();

        Payment p = new CashPayment();
        p.pay();

        p = new CreditPayment();
        p.pay();
    }
}