import java.util.Scanner;

public class X_10018_2_switch {
    public static void main(String[] args) {
        System.out.print("Enter your age -> ");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        switch (age){
            case 18:
                System.out.println("You are going to become and Adult!");
                break;
            case 23:
                System.out.println("You are goint to join a job!");
                break;
            case 60:
                System.out.println("You are goint to get retired!");
                break;
            default:
                System.out.println("Enjoy your life!");
        }

        System.out.println("Thanks for using my java Code!");
    }
}