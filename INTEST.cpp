#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % k == 0){
            count++;
        }
    }
    cout << count << endl;
    
}