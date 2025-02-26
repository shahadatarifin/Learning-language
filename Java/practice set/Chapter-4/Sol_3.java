import java.util.Scanner;

public class Sol_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your income -> ");
        float income = sc.nextFloat();
        float tax = 0;

        if (income <= 250000.0f) {
            tax = 0; // No tax for income <= 2.5L
        } else if (income > 250000.0f && income <= 500000.0f) {
            tax = 0.05f * (income - 250000.0f);
        } else if (income > 500000.0f && income <= 1000000.0f) {
            tax = (0.05f * 250000) + (0.2f * (income - 500000.0f));
        } else if (income > 1000000.0f) {
            tax = (0.05f * 250000) + (0.2f * 500000) + (0.3f * (income - 1000000.0f));
        }

        System.out.println("Income Tax to be paid: ₹" + tax);
    }
}
