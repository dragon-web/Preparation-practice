#include <iostream>
#include <string>
#include <map>
#include <set>
#include <queue>

using namespace std;

class Compare{
public:
    bool operator()(const pair<string,size_t> &left, const pair<string,size_t> &right)
    {
        return left.second < right.second;
    }
};
class Solution {
    public:
        vector<string> topKFrequent(vector<string>& words, int k) {
        map<string ,size_t> M;
        for(auto & it: words)
        {
            M[it]++;
        }
        priority_queue<pair<string,size_t> , vector<pair<string,size_t>> ,Compare> P;
        for(auto &e : M)
        {
            P.push(e);
        }
        vector<string> temp;
            for(int i = 0;i < k && P.size() > 0;++i)
            {
                string t = P.top().first;
                temp.push_back(t);
                P.pop();
            }
            return temp;
        }
};
