public class Sol_2 {
    public static void main(String[] args) {
        char grade = 'B';
        grade = (char)(grade + 8);                  // we are dealing with ASCII value
        System.out.println("encrypted: ");
        System.out.println(grade);

        System.out.println("decrypted: ");

        grade = (char) (grade - 8);
        System.out.println(grade);

    }
}