public class BudgetCalculator {
    private static final double SALARY = 3000.0;
    private static final double SAVINGS_PERCENT = 0.20;
    private static final double RENT_PERCENT = 0.30;
    private static final double GROCERIES_PERCENT = 0.15;
    private static final double ENTERTAINMENT_PERCENT = 0.10;

    public static void main(String[] args) {
        
        double monthlySalary = SALARY;
        double savedAmount;
        double rentAmount;
        double groceriesAmount;
        double entertainmentAmount;
        double totalExpenses;
        double remainingBalance;

        
        savedAmount = monthlySalary * SAVINGS_PERCENT;
        rentAmount = monthlySalary * RENT_PERCENT;
        groceriesAmount = monthlySalary * GROCERIES_PERCENT;
        entertainmentAmount = monthlySalary * ENTERTAINMENT_PERCENT;
        totalExpenses = rentAmount + groceriesAmount + entertainmentAmount;
        remainingBalance = monthlySalary - totalExpenses;

        
        System.out.println("Monthly Salary: $" + monthlySalary);
        System.out.println("Amount Saved: $" + savedAmount);
        System.out.println("Amount Spent on Rent: $" + rentAmount);
        System.out.println("Amount Spent on Groceries: $" + groceriesAmount);
        System.out.println("Amount Spent on Entertainment: $" + entertainmentAmount);
        System.out.println("Total Expenses: $" + totalExpenses);
        System.out.println("Remaining Balance: $" + remainingBalance);
    }
}