#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,k;
    int open=0,i;
    string str;
    cin>>n>>k;
    char twt[1000]={0};
    while(k--)
    {
        cin>>str;
         if(str == "CLOSEALL")
            {
                open = 0;
                for(i=0;i<n;i++)
                    twt[i]=0;
            }
        else
        {
            cin>>i;
            i--;
            if(twt[i]==0)
            {
                open++;
                twt[i]=1;
            }
            else
            {
                open--;
                twt[i]=0;
            }
        }
        cout<<open<<endl;
    }
    return 0;
}
