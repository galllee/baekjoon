#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack <int> s;
    int n, a = 0, b = 0, top, c = 0;
    bool success = true;
    cin >> n;
    int* arr = new int[n + 1];
    int* target = new int[n + 1];
    char* make = new char[n * 2 + 1];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> target[i];
    }

    for (int i = 0; i < n * 2; i++) {
        if (!s.empty() && s.top() == target[b]) {
            s.pop();
            make[c] = '-'; c++; 
            b++;
            continue;
        }
        else {
            s.push(arr[a]); make[c] = '+'; c++;
            a++; continue;
        }
    }
    if (!s.empty())
        cout << "NO";
    else {
        for (int i = 0; i < n * 2; i++) {
            cout << make[i] << "\n";
        }
    }
    return 0;
}