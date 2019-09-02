#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')st.push(s[i]);
        else if(s[i]=='C')st.push(12);
        else if(s[i]=='H')st.push(1);
        else if(s[i]=='O')st.push(16);
        else if(s[i]>='2'&&s[i]<='9')
        {
            int x=st.top();
            st.pop();
            st.push(x*(s[i]-'0'));
        }
        else
        {
            int sum=0;
            while(st.top()!='(')
            {
                sum+=st.top();
                st.pop();
            }st.pop();
            st.push(sum);
        }
    }
    int sum1=0;
    while(!st.empty())
    {
        sum1+=st.top();
        st.pop();
    }
    cout<<sum1<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')st.push(s[i]);
        else if(s[i]=='C')st.push(12);
        else if(s[i]=='H')st.push(1);
        else if(s[i]=='O')st.push(16);
        else if(s[i]>='2'&&s[i]<='9')
        {
            int x=st.top();
            st.pop();
            st.push(x*(s[i]-'0'));
        }
        else
        {
            int sum=0;
            while(st.top()!='(')
            {
                sum+=st.top();
                st.pop();
            }st.pop();
            st.push(sum);
        }
    }
    int sum1=0;
    while(!st.empty())
    {
        sum1+=st.top();
        st.pop();
    }
    cout<<sum1<<endl;
}

