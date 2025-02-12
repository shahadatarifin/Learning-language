import java.util.Scanner;

public class X_10005_1_Input {
    public static void main(String[] args){
        System.out.println("Taking input from user");

        Scanner s = new Scanner(System.in);
        System.out.print("Enter number 1: ");
        int n1 = s.nextInt();
        System.out.print("Enter number 2: ");
        int n2 = s.nextInt();

        System.out.println("Sum of Number1 and Number2 is: " + (n1+n2));
    }
}