#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCostChips(int n, vector<int>& a, vector<int>& b) {
    vector<int> row_chips(n, 0);
    vector<int> col_chips(n, 0);
    int total_cost = 0;
    vector<pair<int, pair<int, int>>> chip_costs;

    // Create a vector of pairs (cost, (i, j))
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int cost = a[i] + b[j];
            chip_costs.push_back({cost, {i, j}});
        }
    }

    // Sort the chip costs in ascending order
    sort(chip_costs.begin(), chip_costs.end());

    for (const auto& chip_cost : chip_costs) {
        int cost = chip_cost.first;
        int i = chip_cost.second.first;
        int j = chip_cost.second.second;

        if (row_chips[i] == 0 || col_chips[j] == 0) {
            // Place a chip and update row_chips and col_chips
            row_chips[i]++;
            col_chips[j]++;
            total_cost += cost;
        }
    }

    return total_cost;
}

int main() {
    int n = 3;
    vector<int> a = {1, 4, 1};
    vector<int> b = {3, 2, 2};
    int result = minCostChips(n, a, b);
    cout << "Minimum cost: " << result << endl;
    return 0;
}
