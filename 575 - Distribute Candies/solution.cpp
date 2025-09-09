#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> ans;
        for(int i = 0; i < candyType.size(); i++){
            ans.insert(candyType[i]);
        }
        if(ans.size() > candyType.size() / 2){
            return candyType.size()/2;
        }
        return ans.size();
    }
};
