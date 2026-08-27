class Solution {
public:
    bool isPalindrome(string s) {
    if (s == "")
        return true;
    string correctString = "";
    for (char ch : s) {
        if (isalnum(static_cast<unsigned char>(ch)))
            correctString += std::tolower(ch);
    }
    cout << correctString << endl;
    int first = 0, last = correctString.size() - 1;
    while (first < last) {
        if (correctString[first] == correctString[last]) {
            first++;
            last--;
        }
        else
            return false;
    }
    return true;
}
};
