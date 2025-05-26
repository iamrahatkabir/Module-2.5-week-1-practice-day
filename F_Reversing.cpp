#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int y = 0;
    int z = n-1;

    while (y<z)
    {
        swap(arr[y],arr[z]);
        y++;
        z--;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
