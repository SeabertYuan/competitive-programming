#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int W;
    cin >> n >> W;
    int soln[n] = {0};
    map<int, int> wv = map<int,int>();
    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        auto prev = wv.find(w);
        if (prev == wv.end()) {
            wv.insert(pair<int,int>(w, v));
        } else {
            if (prev->second < v) {
                prev->second = v;
            }
        }
    }
    if (W < wv.begin()->first) {
        W[i]
    }
    return 0;
}
