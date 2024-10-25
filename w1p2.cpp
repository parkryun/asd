// 고장난 시계
#include <iostream>
#include <vector>


using namespace std;

// 최대공약수 함수
int gcd(int a, int b) { // 유클리드 호제법 > a%b가 0이 될때까지 계속 하는거임
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소공배수 함수
int lcm(int a, int b) { // 최대 공약수로 나눠준거 ok
    return (a * b) / gcd(a, b);
}

int main() {
    int T; // 테스트 케이스 수
    cin >> T;

    while (T--) {
        int N; // 시계의 수
        cin >> N;

        vector<int> times(N); // 벡터로 선언

        for (int i = 0; i < N; ++i) {
            cin >> times[i];
        }

        // 모든 시계의 최소공배수 계산
        int result = times[0];
        for (int i = 1; i <N; i++) {
            result = lcm(result, times[i]);
        }
        cout << result << '\n';
    }
    return 0;
}
