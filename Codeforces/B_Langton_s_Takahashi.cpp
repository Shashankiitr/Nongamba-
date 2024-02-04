#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input values
    int H, W, N;
    cin >> H >> W >> N;

    // Initialize a 2D vector to represent the grid
    vector<vector<char>> grid(H, vector<char>(W, '.'));

    // Initialize variables to represent Takahashi's position
    int i = 0, j = 0; // (1-based indexing)
    char direction = 'U'; // U: Up, R: Right, D: Down, L: Left

    // Perform the painting operation N times
    for (int k = 0; k < N; k++) {
        // Check the color of the current cell and perform the operation accordingly
        if (grid[i][j] == '.') {
            grid[i][j] = '#'; // Paint black
            // Rotate 90 degrees clockwise
            if (direction == 'U') direction = 'R';
            else if (direction == 'R') direction = 'D';
            else if (direction == 'D') direction = 'L';
            else if (direction == 'L') direction = 'U';
        } else {
            grid[i][j] = '.'; // Paint white
            // Rotate 90 degrees counterclockwise
            if (direction == 'U') direction = 'L';
            else if (direction == 'L') direction = 'D';
            else if (direction == 'D') direction = 'R';
            else if (direction == 'R') direction = 'U';
        }

        // Move forward one cell in the direction he is facing
        if (direction == 'U') i = (i - 1 + H) % H;
        else if (direction == 'R') j = (j + 1) % W;
        else if (direction == 'D') i = (i + 1) % H;
        else if (direction == 'L') j = (j - 1 + W) % W;
    }

    // Print the final color of each cell in the grid
    for (int row = 0; row < H; row++) {
        for (int col = 0; col < W; col++) {
            cout << grid[row][col];
        }
        cout << endl;
    }

    return 0;
}
