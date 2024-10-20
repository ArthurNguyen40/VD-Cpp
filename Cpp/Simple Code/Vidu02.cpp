#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Dau ra: " << endl;

    // Dung iterator de duyet vector
    cout << "Cac cap so lan luot la:\n";
    for(auto i = v.begin(); i != v.end(); i++){
        pair<int, int> p;
        p.first = *i; // Lay gia tri tu iterator

        for(auto j = i + 1; j != v.end(); j++){
            p.second = *j; // Lay gia tri tu iterator

            // In ra cap gia tri
            cout << "("<< p.first << "," << p.second << ")"<< endl;
        }
    }

    return 0;
}
