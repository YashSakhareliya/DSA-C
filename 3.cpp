#include<iostream>
using namespace std;
bool power3 = 0;

int main (){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<30;i++)
    {
        if(ans==n)
        {
           power3=1;
        }
       
        if(ans<INT32_MAX/3)
             ans*=3;
       
        
    }
    if(power3==1){
        cout<<"value is power of 3";
    }
    else{
        cout<<"value is not power of 3";
    }
    
}

    
