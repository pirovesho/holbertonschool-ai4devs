import java.util.ArrayList;

public class bug4_fixed {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();

        numbers.add(10);
        numbers.add(20);
        numbers.add(30);

        System.out.println("Numbers: " + numbers);

        int total = 0;
        for (int n : numbers) {
            total += n;
        }
        System.out.println("Total: " + total);
    }
}