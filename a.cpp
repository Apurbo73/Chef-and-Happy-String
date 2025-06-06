#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        int count = 0;
        bool happy = false;

        for (int i = 0; i < S.size(); i++) {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
                count++;
                if (count > 2) {
                    happy = true;
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (happy) cout << "HAPPY\n";
        else cout << "SAD\n";
    }
    return 0;
}
