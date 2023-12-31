#include <iostream>
#include <set>
using namespace std;
void printDifference(const set<int>& S1, const set<int>& S2) {
    set<int> differenceSet;

    for (const auto& x : S1) {
        if (S2.count(x) == 0) {
            differenceSet.insert(x);
        }
    }

    cout << "Difference Set: ";
    for (const auto& element : differenceSet) {
        cout << element << " ";
    }
    cout << endl;
}
    
void printSymmetricDifference(const set<int>& S1, const set<int>& S2) {
    set<int> SymmetricDifferenceSet = S1;

    for (const auto& x : S2) {
        if (S1.count(x) == 0) {
            SymmetricDifferenceSet.insert(x);
        }
        else if (S1.count(x) > 0){
            SymmetricDifferenceSet.erase(x);
        }
    }

    cout << "Symmetric Set Difference: ";
    for (const auto& element : SymmetricDifferenceSet) {
        cout << element << " ";
    }
    cout << endl;
    
}   



int main() {
    
    set<int> S1 = {5,6,7,8,9,0};
    set<int> S2 = {6,8,9};
    
    printDifference(S1, S2);
    printSymmetricDifference(S1, S2);
    return 0;
}
