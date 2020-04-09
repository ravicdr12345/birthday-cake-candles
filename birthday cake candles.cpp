#include<iostream>
using namespace std;
int main()
{
    long n,temp;
    long c=0;
    long max=0;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(long i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    
for(long i=0;i<n;i++){
if(a[i]==max){
    
   c++;
}
    }
    cout<<c;
}


