#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mini = min(arr[i],mini);
        }
        cout << mini << endl;
    }
}