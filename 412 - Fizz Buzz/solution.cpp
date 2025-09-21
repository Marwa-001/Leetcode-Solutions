#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                answer.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                answer.push_back("Buzz");
            }
            else {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};

int main() {
    Solution sol;

    int n1 = 3;
    auto res1 = sol.fizzBuzz(n1);
    cout << "n = 3 → ";
    for (auto& s : res1) cout << s << " ";
    cout << endl;

    int n2 = 5;
    auto res2 = sol.fizzBuzz(n2);
    cout << "n = 5 → ";
    for (auto& s : res2) cout << s << " ";
    cout << endl;

    int n3 = 15;
    auto res3 = sol.fizzBuzz(n3);
    cout << "n = 15 → ";
    for (auto& s : res3) cout << s << " ";
    cout << endl;

    return 0;
}
