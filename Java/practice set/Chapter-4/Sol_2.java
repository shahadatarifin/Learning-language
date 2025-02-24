import java.util.Scanner;

public class Sol_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Math -> ");
        float math = sc.nextFloat();
        System.out.print("Physics -> ");
        float physics = sc.nextFloat();
        System.out.print("Chemistry -> ");
        float chemistry = sc.nextFloat();

        if ( physics >= 33  &&  chemistry >= 33  &&  math >= 33){
            float avg = ((physics + chemistry + math)/3.0f);
            System.out.println("Your average is -> " + avg + " % ");
            if (avg >= 40){
                System.out.println("Congratulations! \nYou have been promoted");
            }else {
                System.out.println("Better luck next time!");
            }
        } else {
            System.out.println("Better luck next time!");
        }
    }
}
