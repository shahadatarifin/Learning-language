import java.util.Scanner;

public class X_10015 {
    public static void main(String[] args) {
        String name = "Shahadat";
        System.out.println(name);

        System.out.println("1. length() -> " + name.length());

        System.out.println("2. toLowerCase() -> " + name.toLowerCase());

        System.out.println("3. toUpperCase() -> " + name.toUpperCase());

        String non_Trim_String = "     Shahadat     ";
        System.out.println("4. trim() -> " + non_Trim_String.trim());

        System.out.println("5.1 substring() -> " + name.substring(3));
        System.out.println("5.2 substring() -> " + name.substring(3, 6));

        System.out.println("6. replace() -> " + name.replace('a', 'x'));

        System.out.println("7. startsWith() -> " + name.startsWith("Sh"));

        System.out.println("8. endsWith() -> " + name.endsWith("t"));

        System.out.println("9. charAt() -> " + name.charAt(2));

        System.out.println("10.1 indexOf() -> " + name.indexOf('a'));
        System.out.println("10.2 indexOf() -> " + name.indexOf("ha"));
        System.out.println("10.3 indexOf() -> " + name.indexOf('a', 5));
        System.out.println("10.4 indexOf() -> " + name.indexOf("ha", 3));

        System.out.println("11.1 lastIndexOf() -> " + name.lastIndexOf('a'));
        System.out.println("11.2 lastIndexOf() -> " + name.lastIndexOf('a', 5));
        System.out.println("11.3 lastIndexOf() -> " + name.lastIndexOf("ha"));
        System.out.println("11.4 lastIndexOf() -> " + name.lastIndexOf("ha", 4));

        System.out.println("12. equals() -> " + name.equals("Shahadat"));

        System.out.println("13. equalsIgnoreCase() -> " + name.equalsIgnoreCase("sHaHaDAt"));
    }
}
