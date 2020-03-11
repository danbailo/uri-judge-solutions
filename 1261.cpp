#include <iostream>
#include <map>

using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    map<string, int> hay_point;
    string key;
    int value;
    int sum = 0;
    string word;

    while(m--){
        cin >> key >> value;
        hay_point[key] = value;
    }

    while(n){
        cin >> word;
        sum += hay_point[word];
        if(word == "."){
            n--;
            cout << sum << endl;
            sum = 0;
        }
    }

    return 0;
}