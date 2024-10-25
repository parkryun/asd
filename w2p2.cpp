// html 태그
#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool isOpeningTag(const string& tag) {
    return tag[1] != '/';
}

string getTagname(string tag) {
    if (tag[1] == '/') {
        return tag.substr(2, tag.size()-3); // 2부터 size()-3개 넣겠다. <, /, > 3개 빼면 tag 개수잖아

    }
    else {
        return tag.substr(1, tag.size() - 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        string html;
        cin >> html;

        stack<string> tagStack;
        string result = "";

        for (int i = 0; i < html.size(); i++) {
            if (html[i] == '<') {
                int j = i;
                while(html[j] != '>') j++;

                string tag = html.substr(i, j - i + 1);
                i = j;

                if (isOpeningTag(tag)) {// 여는 태그면 저장
                    tagStack.push(tag);
                } else {
                    if (!tagStack.empty() && getTagname(tagStack.top()) == getTagname(tag)) {
                        tagStack.pop();
                    }
                }

            }
        }
        while (!tagStack.empty()) {
            string openTag = tagStack.top();
            tagStack.pop();
            result += "</" + getTagname(openTag) + ">";
        }
        cout << result << '\n';
    }
    return 0;

    
}