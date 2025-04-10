#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int*> activities;
    for (int i = 0; i < n; i++) {
        int *abc = new int[3];
        cin >> abc[0] >> abc[1] >> abc[2];
        activities.push_back(abc);
    }
    int soln[n][3];
    int max_soln = 0;
    //base case n = 1
    soln[0][0] = activities[0][0];
    soln[0][1] = activities[0][1];
    soln[0][2] = activities[0][2];
    if (n == 1) {
        max_soln = max(soln[0][0], soln[0][1]);
        cout << max(max_soln, soln[0][2]) << "\n";
        return 0;
    }

    // soln[i][0] = max(soln[i-1][0] + activities[i][1], soln[i-1][0] + activities[i][2])
    // soln[i][1] = max(soln[i-1][1] + activities[i][0], soln[i-1][1] + activities[i][2])
    // soln[i][2] = max(soln[i-1][2] + activities[i][1], soln[i-1][2] + activities[i][0])

    // cout << soln[0][0]<< " " << soln[0][1] << " " << soln[0][2] << "\n";
    // cout << activities[0][0]<< " " << activities[0][1] << " " << activities[0][2] << "\n";
    for (int i = 1; i < n; i++) {
        soln[i][0] = max(soln[i-1][1], soln[i-1][2]) + activities[i][0];
        soln[i][1] = max(soln[i-1][0], soln[i-1][2]) + activities[i][1];
        soln[i][2] = max(soln[i-1][1], soln[i-1][0]) + activities[i][2];
        // cout << soln[i][0]<< " " << soln[i][1] << " " << soln[i][2] << "\n";
        // cout << activities[i][0]<< " " << activities[i][1] << " " << activities[i][2] << "\n";
    }
    max_soln = max(soln[n-1][0], soln[n-1][1]);
    cout << max(max_soln, soln[n-1][2]) << "\n";
    return 0;
}
