#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<string ,string> M;
    M.insert(pair<string,string> ("banana","apple"));
    cout << M["banana"] << endl;
    map<string , string> Mp;
    auto it = Mp.insert(make_pair("w","asbhxa"));
    string str = "w";
    cout << Mp[str] << endl;
    cout << "first" << "second" << it.second << endl;
    auto Judge = Mp.insert(make_pair<string,string>("test","second"));
    cout << (*(Judge.first)).second << endl;
    return 0;
}
