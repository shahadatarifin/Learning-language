class Student820A {
    int UID;
    String name;
    int Phone_Number;

    public void Write_Exam() {
        System.out.println("Student is attending exam");
    }
}

public class Main {
    public static void main(String[] args) {
        Student820A s1 = new Student820A();
        s1.Write_Exam();
    }
}
