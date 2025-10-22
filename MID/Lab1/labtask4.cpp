#include <iostream>
using namespace std;

void checkIndentifier(string s){
    bool isValid = true;

    if (!((s[0] >= 'A' && s[0] <= 'Z') ||
          (s[0] >= 'a' && s[0] <= 'z') ||
          s[0] == '_')) {
        isValid = false;
    } else {
        for (int i = 1; i < s.length(); i++) {
            if (!((s[i] >= 'A' && s[i] <= 'Z') ||
                  (s[i] >= 'a' && s[i] <= 'z') ||
                  (s[i] >= '0' && s[i] <= '9') ||
                  s[i] == '_')) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid)
        cout << s << ": Indentifier." << endl;
    else
        cout << s << ": Not identifier." << endl;
}

int main() {
    checkIndentifier("AIUB123");
    checkIndentifier("_mohona");
    checkIndentifier("123_mohona");
    return 0;
}
