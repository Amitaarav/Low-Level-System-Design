public class Contractor extends Employee{
    private int workingHours;
    public Contractor(String name, int paymentPerHour, int workingHour){
        super(name, paymentPerHour);
        this.workingHours = workingHour;
    }

    @Override
    public int calculateSalary(){
        return getPaymentPerHour() * workingHours;
    }
}