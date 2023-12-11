#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    vector<long long> V;
    long long x;
    
    while (cin >> x)
    {
        V.push_back(x);
    }

    for (int i = V.size() - 1; i >= 0; i--)
    {
        cout << fixed << setprecision(4) << sqrt(V[i]) << endl;
    }

    return 0;
}
