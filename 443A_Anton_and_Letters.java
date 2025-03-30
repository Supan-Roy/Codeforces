
import java.util.*;

public class Anton {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        sc.close();

        List<Character> unique = new ArrayList<>();

        for (char c : input.toCharArray()) {
            if (Character.isLowerCase(c) && !unique.contains(c)) {
                unique.add(c);
            }
        }

        System.out.println(unique.size());
    }
}
