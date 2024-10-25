// 행렬의 거듭제곱
// #include <iostream>

// using namespace std;

// const long long MOD = 1000000007;


// void multiply(long long first_matrix[2][2], long long second_matrix[2][2], long long result_matrix[2][2]) {
//     long long temp[2][2];
//     temp[0][0] = (first_matrix[0][0] * second_matrix[0][0] + first_matrix[0][1] * second_matrix[1][0]) % MOD;
//     temp[0][1] = (first_matrix[0][0] * second_matrix[0][1] + first_matrix[0][1] * second_matrix[1][1]) % MOD;
//     temp[1][0] = (first_matrix[1][0] * second_matrix[0][0] + first_matrix[1][1] * second_matrix[1][0]) % MOD;
//     temp[1][1] = (first_matrix[1][0] * second_matrix[0][1] + first_matrix[1][1] * second_matrix[1][1]) % MOD;

//     // 결과를 result에 복사
//     result_matrix[0][0] = temp[0][0];
//     result_matrix[0][1] = temp[0][1];
//     result_matrix[1][0] = temp[1][0];
//     result_matrix[1][1] = temp[1][1];
// }

// // 행렬 거듭제곱 함수 (분할정복)
// void power(long long input_matrix[2][2], long long N, long long result_matrix[2][2]) {
//     // 항등 행렬로 초기화
//     result_matrix[0][0] = 1; 
//     result_matrix[0][1] = 0;
//     result_matrix[1][0] = 0; 
//     result_matrix[1][1] = 1;
    
//     // base_marix 선언
//     long long base_matrix[2][2] = {{input_matrix[0][0], input_matrix[0][1]}, {input_matrix[1][0], input_matrix[1][1]}};
    
//     // 분할정복 구현
//     while (N > 0) {
//         // 짝수
//         if (N % 2 == 1) {
//             multiply(result_matrix, base_matrix, result_matrix);
//         }
//         // 홀수
//         multiply(base_matrix, base_matrix, base_matrix);
//         N = N/2;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     int T; // 테스트 케이스 수
//     cin >> T;
    
//     while (T--) {
//         long long input_matrix[2][2], result_matrix[2][2]; // 입력 받을 Matrix와 결과 값을 저장할 Matrix 
//         cin >> input_matrix[0][0] >> input_matrix[0][1];
//         cin >> input_matrix[1][0] >> input_matrix[1][1];

//         long long N;
//         cin >> N;
        
//         power(input_matrix, N, result_matrix);
        
//         // 결과 행렬 출력
//         cout << result_matrix[0][0] << " " << result_matrix[0][1] << "\n";
//         cout << result_matrix[1][0] << " " << result_matrix[1][1] << "\n";
//     }
    
//     return 0;
// }
