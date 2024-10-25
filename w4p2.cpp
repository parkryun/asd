// 전력망 구축
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 최소 비용을 찾기 위한 우선순위 큐를 사용한 Prim 알고리즘
int prim(int N, const vector<int>& powerCost, const vector<vector<int>>& grid) {
    vector<bool> visited(N, false); // 방문 여부
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 비용, 노드
    int totalCost = 0;

    // 초기: 각 시설에 발전소를 짓는 비용을 큐에 넣음
    for (int i = 0; i < N; i++) {
        pq.push({powerCost[i], i});
    }

    // Prim 알고리즘 실행
    while (!pq.empty()) {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) continue; // 이미 방문한 노드는 스킵
        visited[u] = true;
        totalCost += cost; // 비용을 추가

        // 다른 노드로 가는 비용을 큐에 추가
        for (int v = 0; v < N; v++) {
            if (!visited[v] && u != v) {
                pq.push({grid[u][v], v});
            }
        }
    }

    return totalCost;
}

int main() {
    int T;
    cin >> T; // 테스트 케이스 수

    while (T--) {
        int N;
        cin >> N; // 시설 수

        vector<int> powerCost(N); // 발전소 건설 비용
        for (int i = 0; i < N; i++) {
            cin >> powerCost[i];
        }

        vector<vector<int>> grid(N, vector<int>(N)); // 송전선 비용
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];
            }
        }

        // 최소 비용 계산
        cout << prim(N, powerCost, grid) << endl;
    }

    return 0;
}
