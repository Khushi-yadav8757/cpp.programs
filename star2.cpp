#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<< "enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    { //space print
        for(j=1;j<=n-i;j++)
            cout<<" ";
            //star print
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        
    }
}