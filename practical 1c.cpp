#include <iostream>
#include <set>
using namespace std;

bool isSubset(const set<int>& S, const set<int>& subset) {
    for (const auto& element : subset) {
        if (S.find(element) == S.end()) {
            return false;
        }
    }
    return true;
}
int main() {
    
    set<int> S = {1, 2, 3, 4, 5};
    
    set<int> subset={1,4};
    cout << "Is {1, 4} a subset of S? " << endl << (isSubset(S, subset) ? "Yes" : "No") << endl;

    return 0;
}
