// 해커톤
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> contribution(26);
        for(int i = 0; i < n; i++) {
            cin >> contribution[i];
        }

        vector<int> taskScore(m);
        for(int i = 0; i< m; i++) {
            cin >> taskScore[i];

        }

        vector<int> teamScore(m);
        for(int i = 0; i<m; i++) {
            int teamsize;
            cin >> teamsize;

            int minContribution = 1001;
            for (int j = 0; j<teamsize; j++) {
                char student;
                cin >> student;
                minContribution = min(minContribution, contribution[student - 'A']);

            }
            teamScore[i] = minContribution * taskScore[i];
        }
        for (int i=0; i< m; i++) {
            cout << teamScore[i] << ' ';
        }
        cout << '\n';

    }
    return 0;
}