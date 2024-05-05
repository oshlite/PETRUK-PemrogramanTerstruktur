#include <iostream> //reference
using namespace std;
int main() {
    int n = 100;
    double Weight = 35.6;
    char ch = 'S';
    int& Count = n;     // Count ref utk n.
    double& W = Weight; // W ref utk weight.
    char& T = ch;       // T ref utk ch.
    cout << "n = " << n << " \t&n = " << &n << "\n";
    cout << "Count = " << Count << " \t &Count = " << &Count << endl;
    cout << "Weight = " << Weight << ", &Weight = " << &Weight << "\n";
    cout << "W = " << W << " \t &W = " << &W << "\n\n";
    cout << "ch = " << ch << "\t T = " << T << endl;
    T = 'Z';
    n = 50;   // Nilai ref n diubah ke 50
    W = 12.5; // Nilai ref W diubah ke 12.5
    cout << "n = " << n << " \tCount =" << Count << endl;
    cout << "W = " << W << " \tWeight =" << Weight << endl;
    cout << "ch = " << ch << " \t T = " << T << endl;
    return 0;
}
