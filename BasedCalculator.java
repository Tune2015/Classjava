import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String operation;
        double num1, num2;

        System.out.println("Welcome to the Java Calculator!");

        while (true) {
            System.out.print("Enter an operation (+, -, *, /, or exit): ");
            operation = scanner.next();

            if (operation.equals("exit")) {
                break;
            }

            System.out.print("Enter the first number: ");
            num1 = scanner.nextDouble();

            System.out.print("Enter the second number: ");
            num2 = scanner.nextDouble();

            switch (operation) {
                case "+":
                    System.out.println("The result of " + num1 + " + " + num2 + " = " + (num1 + num2));
                    break;
                case "-":
                    System.out.println("The result of " + num1 + " - " + num2 + " = " + (num1 - num2));
                    break;
                case "*":
                    System.out.println("The result of " + num1 + " * " + num2 + " = " + (num1 * num2));
                    break;
                case "/":
                    if (num2 != 0) {
                        System.out.println("The result of " + num1 + " / " + num2 + " = " + (num1 / num2));
                    } else {
                        System.out.println("Error: Division by zero is not allowed.");
                    }
                    break;
                default:
                    System.out.println("Error: Invalid operation.");
                    break;
            }

            System.out.print("Would you like to perform another operation (yes/no)? ");
            String continueOperation = scanner.next();
            if (!continueOperation.equalsIgnoreCase("yes")) {
                break;
            }
        }

        System.out.println("Thank you for using the Java Calculator! Goodbye!");
        scanner.close();
    }
}