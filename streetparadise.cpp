#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a;
    while(cin>>a)
    {
        if(a==0)
            break;
        int valve=1;
        vector<int> v(a);
        stack<int> st;
        bool flag=true;
        for(int i = 0;i<a;i++)
            cin>>v[i];
        for(int i=0;i<a;i++)
        {
            if(v[i]==valve)
                valve++;
            else if(st.empty())
                st.push(v[i]);
            else if(st.top()>v[i])
                st.push(v[i]);
            else if(st.top()==valve)
            {
                st.pop();
                valve++;
                i--;
            }
            else
            {
                flag=false;
                break;
            }
        }
        (flag==true)?cout<<"yes"<<endl:cout<<"no"<<endl;
    }

}
