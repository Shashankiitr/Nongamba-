#include <bits/stdc++.h>
using namespace std;

void printQuery(int row, int col) {
    cout << "? " << row << " " << col << endl;
}

void printAnswer(int row, int col) {
    cout << "! " << row << " " << col;
}

void solve() {
    int numRows, numCols; 
    cin >> numRows >> numCols;

    vector<int> A = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1};
    int X = upper_bound(A.begin(), A.end(), numRows) - A.begin();
    int Y = numRows - A[X - 1];
    

    printQuery(1, 1);
    int topLeft; cin >> topLeft; topLeft += 2;

    printQuery(numRows, 1);
    int topRight; cin >> topRight; 
    topRight -= (numRows - 1); 
    topRight = -topRight;

    int x = (topLeft + topRight) / 2; int y = topLeft - x;

    if (x >= 1 && x <= numRows && y >= 1 && y <= numCols) {
        printQuery(x, y);
        int middle; cin >> middle;
        if (middle == 0) {
            printAnswer(x, y);
        } else {
            printQuery(numRows, numCols);
            int bottomRight; cin >> bottomRight; 
            bottomRight -= (numRows + numCols); 
            bottomRight = -bottomRight; 
            topLeft = bottomRight;
            x = (topLeft + topRight) / 2; y = topLeft - x;
            printAnswer(x, y);
        }
    } else {
        printQuery(numRows, numCols);
        int bottomRight; 
        cin >> bottomRight; 
        bottomRight -= (numRows + numCols); 
        bottomRight = -bottomRight; 
        topLeft = bottomRight;
        x = (topLeft + topRight) / 2; 
        y = topLeft - x;
        printAnswer(x, y);
    }
}

int main() {
    int numTestCases;
    cin >> numTestCases;
    while (numTestCases--) {
        solve();
        cout << endl;
    }
    return 0;
}
