import java.util.Scanner;

public class Sol_6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the website name -> ");
        String website = sc.nextLine();

        if ( website.endsWith(".org")) {
            System.out.println("It's an organizational website");
        } else if (website.endsWith(".com")) {
            System.out.println("It's an commercaial website");
        } else if (website.endsWith(".bd")) {
            System.out.println("It's an Bangladeshi website");
        } else {
            System.out.println("Fuck you!!");
        }
        sc.close();
    }
}
