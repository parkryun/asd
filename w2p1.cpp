// 재귀 추측
#include <iostream>
#include <string>

using namespace std;
int cnt = 0;
void func (string str, string current = "", int idx = 0) {
    ++cnt;
    if (idx == str.size()) return;
    func(str, current, idx + 1);
    func(str, current+str[idx], idx + 1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;
    func(str, "", 0);
    cout << cnt;  
}