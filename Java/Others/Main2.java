class Abcd {
    String s1 = "12";
    String s2 = "20";

    void performOperations() {
        int num1 = Integer.parseInt(s1);
        int num2 = Integer.parseInt(s2);

        int add = num1 + num2;
        System.out.println("Addition: " + add);

        int sub = num1 - num2;
        System.out.println("Subtraction: " + sub);

        int mul = num1 * num2;
        System.out.println("Multiplication: " + mul);

        float div = (float) num1 / num2;
        System.out.println("Division: " + div);
    }
}

public class Main2 {
    public static void main(String[] args) {
        Abcd obj = new Abcd();
        obj.performOperations();
    }
}
