import java.util.*;

public class Main {
    
    static void printQuery(int row, int col) {
        System.out.println("? " + row + " " + col);
    }

    static void printAnswer(int row, int col) {
        System.out.print("! " + row + " " + col);
    }

    static void solve() {
        Scanner scanner = new Scanner(System.in);
        int numRows = scanner.nextInt();
        int numCols = scanner.nextInt();

        int[] A = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1};
        int X = Arrays.binarySearch(A, numRows);
        if (X < 0)
            X = -X - 1;
        int Y = numRows - A[X - 1];
        
        printQuery(1, 1);
        int topLeft = scanner.nextInt() + 2;

        printQuery(numRows, 1);
        int topRight = scanner.nextInt() - (numRows - 1);
        topRight = -topRight;

        int x = (topLeft + topRight) / 2;
        int y = topLeft - x;

        if (x >= 1 && x <= numRows && y >= 1 && y <= numCols) {
            printQuery(x, y);
            int middle = scanner.nextInt();
            if (middle == 0) {
                printAnswer(x, y);
            } else {
                printQuery(numRows, numCols);
                int bottomRight = scanner.nextInt() - (numRows + numCols);
                bottomRight = -bottomRight;
                topLeft = bottomRight;
                x = (topLeft + topRight) / 2;
                y = topLeft - x;
                printAnswer(x, y);
            }
        } else {
            printQuery(numRows, numCols);
            int bottomRight = scanner.nextInt() - (numRows + numCols);
            bottomRight = -bottomRight;
            topLeft = bottomRight;
            x = (topLeft + topRight) / 2;
            y = topLeft - x;
            printAnswer(x, y);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numTestCases = scanner.nextInt();
        while (numTestCases-- > 0) {
            solve();
            System.out.println();
        }
    }
}
