import java.util.Scanner;

public class X_10005_2_Input {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        System.out.print("s2 -> ");
        String s2 = s.nextLine();               // It will take multiple words as input
        System.out.println(s2);

        System.out.print("s1 -> ");
        String s1 = s.next();                   // It will take only one word as input
        System.out.println(s1);


    }
}
