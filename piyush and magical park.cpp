#include<iostream>
using namespace std;
int main()
{
    int n, s, k, m;
    cin>>n>>s>>k>>m;
    char a[100][100];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(m<k){//you have to check for this statement in every iteration
                cout<<"No"<<endl;
                return 0;
            }
            if(a[i][j]=='.')
            {
                m=m-2;
            }
            else if(a[i][j]=='*')
            {
                m=m+5;
            }
            else if(a[i][j]=='#')
            {
                break;

            }
            if(j==s-1)
            {
                m=m+1;
            }
            m=m-1;

        }
    }
    if(m>=k)
    {
        cout<<"Yes"<<endl<<m;
    }
    else
    {
        cout<<"No";
    }
    return 0;
}