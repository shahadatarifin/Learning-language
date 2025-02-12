import java.lang.module.FindException;
import java.util.Scanner;

class XInput {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        float f = s.nextFloat();
        double d = s.nextDouble();
        String s1 = s.next();
        String s2 = s.nextLine();
        char ch = s.next().charAt(0);

        System.out.println(n);
        System.out.println(f);
        System.out.println(d);
        System.out.println(s1);
        System.out.println(s2);
        System.out.println(ch);

    }
}