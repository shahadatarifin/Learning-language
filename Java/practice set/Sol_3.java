import java.util.Scanner;

public class Sol_3 {
    public static void main(String[] args){

        System.out.print("Kilometer -> ");

        Scanner s = new Scanner(System.in);
        double km = s.nextDouble();
        double mile = km * 0.621371;

        System.out.println("Mile -> " + mile);
    }
}