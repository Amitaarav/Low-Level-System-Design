public class AbstractDemo{
    public static void main(String[] args) {
        Employee contractor = new Contractor("contractor", 10, 10);
        Employee fullTimeEmployee = new FullTimeEmployee("Full time employee", 8);

        System.out.println(contractor.calculateSalary());

        System.out.println(fullTimeEmployee.calculateSalary());
    }
}