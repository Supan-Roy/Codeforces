#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;

        vector<int>skills(n);
        for(int i=0;i<n;++i)
        {
                cin>>skills[i];
        }
        sort(skills.begin(),skills.end());

        int totalProblems = 0;
        for(int i=0;i<n;i+=2)
        {
                totalProblems+=skills[i+1]-skills[i];
        }
        cout<<totalProblems<<endl;
        return 0;
}