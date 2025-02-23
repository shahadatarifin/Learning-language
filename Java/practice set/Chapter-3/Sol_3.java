public class Sol_3 {
    public static void main(String[] args) {
        String letter = "Dear <|name|>, Thanks a lot";
        letter = letter.replace("<|name|>", "Arifin");
        System.out.println(letter);
    }
}
