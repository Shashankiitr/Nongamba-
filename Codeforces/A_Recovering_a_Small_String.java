import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline character after reading int
        while (t-- > 0) {
            solve();
        }
    }

    public static void solve() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n <= 28) {
            System.out.print("aa");
            System.out.println((char)('a' + n - 2 - 1));
        } else if (n > 28 && n <= 53) {
            System.out.print("a");
            System.out.print((char)('a' + n - 27 - 1));
            System.out.println("z");
        } else {
            System.out.print((char)('a' + n - 52 - 1));
            System.out.println("zz");
        }
    }
}
