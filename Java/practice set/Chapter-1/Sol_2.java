import java.util.Scanner;

public class Sol_2 {
    public static void main(String[] args){
        System.out.print("What is your name: ");

        Scanner s = new Scanner(System.in);
        String name = s.nextLine();

        System.out.println("Hello, " + name);
        System.out.println("Have a great day");

    }
}