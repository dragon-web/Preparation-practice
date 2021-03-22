#include <iostream>
#include <string>
#include <map>
#include <set>
#include <queue>

using namespace std;

class Compare{
    public:
    bool operator() (const pair<string,size_t> &left , const pair<string,size_t> &right)
    {
        return left.second < right.second;
    }
};
int main()
{
    string fruit[] = {"apple","banana","apple","pear","peach","google","apple","watermalon"};
    map<string ,size_t> M;
    for(auto &e : fruit)
    {
        M[e]++;
    }
    priority_queue<pair<string,size_t > , vector<pair<string,size_t>> , Compare> P; 
    for(auto &it : M)
    {
       //P.push(pair<string,size_t> (it.first,it.second)); 
       P.push(it);
    }
    for(size_t i = 0;i < 2;++i)
    {
        auto it = P.top();
        cout << it.first << " " << it.second << endl;
        P.pop();
    }
    return 0;
}
