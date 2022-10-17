#include <iostream>

using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int even=0,odd=0, good=0;
        for(i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2==0)
                  good++;
                else
                    even++;
            }
            else{
                if (a[i]%2!=0)
                  good++;
                else
                  odd++;
            }
        }
        if(odd==even)
            cout<<even<<endl;
        else if (good==n)
            cout<<0<<endl;
        else
            cout<<-1<<endl;
    }
}
