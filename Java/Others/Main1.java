class WrappersDemo {
    public static void main(String[] args) {
        int num1 = 1000;
        Integer obj = Integer.valueOf(num1); // boxing
        System.out.println(obj);

        int num2 = obj.intValue(); // unboxing
        System.out.println(num2);
    }
}