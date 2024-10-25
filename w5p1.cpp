// 트리 탐색
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 주어진 노드 번호 c에 대한 경로를 구하는 함수
string findPath(int node) {
    string path = "";

    while (node > 1) {
        if (node % 2 == 0) {
            path = 'L' + path; // 짝수이면 왼쪽으로 이동
        } else {
            path = 'R' + path; // 홀수이면 오른쪽으로 이동
        }
        node /= 2;
    }

    return path;
}

int main() {
    int T;
    cin >> T; // 테스트 케이스 수

    while (T--) {
        int h, q;
        cin >> h >> q; // 트리의 높이와 질문 수

        // 각 질문에 대해 경로를 계산하여 출력
        for (int i = 0; i < q; i++) {
            int c;
            cin >> c; // 비룡이가 요구하는 자료 번호
            cout << findPath(c) << endl; // 경로 출력
        }
    }

    return 0;
}
