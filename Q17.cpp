// Generate all binary strings without consecutive 1’s of size k 
#include <iostream>
#include <vector>
using namespace std;

void generateBinaryStrings(vector<string>& ans, string s, int k) {
    if (s.size() == k) {
        ans.push_back(s);
        return;
    }
    if (s.empty() || s.back() == '0') {
        s.push_back('0');
        generateBinaryStrings(ans, s, k);
        s.pop_back();
        s.push_back('1');
        generateBinaryStrings(ans, s, k);
        s.pop_back();
    } else {
        s.push_back('0');
        generateBinaryStrings(ans, s, k);
        s.pop_back();
    }
}

int main() {
    int k = 3;
    vector<string> ans;
    string s = "";
    generateBinaryStrings(ans, s, k);

    for (const string& str : ans) {
        cout << str << endl;
    }

    return 0;
}