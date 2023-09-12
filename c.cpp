#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"input size"<<endl;
    int n; //input //size
    cin>>n;
    int a[n];
    cout<<"input array elements"<<endl;
    for(int i=0;i<n;i++) //input // Array elements
    {
        cin>>a[i];
    }
    //Sorting Apply here
    for(int i=1;i<n;i++)
    {
        int temp = a[i];
        int j = i-1;
        while (a[j]>temp && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;
    }

    cout<<"After sort -> ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}