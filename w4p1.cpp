// 점수집계
// #include <unordered_map>
// #include <iostream>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//     int T;
//     cin >> T;
//     while (T--) {
//         unordered_map<string, int> team1Name; //선수 이름, 번호
//         unordered_map<string, int> team2Name; //선수 이름, 번호
//         string team1[16];
//         string team2[16];
//         int score1[16] = { 0, };
//         int score2[16] = { 0, };
//         int team1Number = 1;
//         int team2Number = 1;

//         int prevTeam1Score = 0, prevTeam2Score = 0;
//         int n,team1Score = 0,team2Score = 0;
//         string name;
//         cin >> n;
//         for (int i = 0; i < n; i++) {
//             cin >> team1Score >> team2Score >> name;
//             if (team1Score > prevTeam1Score) {
//                 if (team1Name[name] == 0) {
//                     team1Name[name] = team1Number;
//                     team1[team1Number] = name;
//                     team1Number += 1;
//                 }

//                 score1[team1Name[name]] = score1[team1Name[name]] + (team1Score - prevTeam1Score);
//                 prevTeam1Score = team1Score;
//             }

//             else if(team2Score > prevTeam2Score){
//                 if (team2Name[name] == 0) {
//                     team2Name[name] = team2Number;
//                     team2[team2Number] = name;
//                     team2Number += 1;
//                 }
//                 score2[team2Name[name]] = score2[team2Name[name]] + (team2Score - prevTeam2Score);
//                 prevTeam2Score = team2Score;
//             }
//         }
//         int maxScore = 0;
//         string mvp;
//         if (team1Score > team2Score) {
//             for (int i = 1; i < team1Number; i++) {
//                 if (score1[i] > maxScore) {
//                     maxScore = score1[i];
//                     mvp = team1[i];
//                 }
//             }
//         }
//         else if(team1Score < team2Score) {
//             for (int i = 1; i < team2Number; i++) {
//                 if (score2[i] > maxScore) {
//                     maxScore = score2[i];
//                     mvp = team2[i];
//                 }
//             }
//         }
//         cout << mvp << ' ' << maxScore << '\n';
//     }
// }
