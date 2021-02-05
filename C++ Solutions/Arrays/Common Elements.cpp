#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1,v2,v3;

    int n1,n2,a;
    cin>>n1;

    for(int i=0;i<n1;i++)
    {   cin>>a;
        v1.push_back(a);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>a;
        v2.push_back(a);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(v1[i]==v2[j])
            {
                v3.push_back(v1[i]);
            }
        }
    }

    cout<<"The common elements between the array are:";

    for(int i:v3)
    cout<<i<<" ";

    return 0;
}
