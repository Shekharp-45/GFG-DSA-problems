//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    
cout << "~" << "\n";
}
}

// } Driver Code Ends


/*You are required to complete this function*/
int gcd(int a, int b){
    if(a==0)return b;
    return gcd(b%a,a);
}

void simplify(int &n1, int &n2){
    int fac=gcd(n1,n2);
    
    n1/=fac;
    n2/=fac;
}
void addFraction(int num1, int den1, int num2,int den2)
{
     int fac=gcd(den1,den2);//common factor kadl
     
     int newDen=fac*(den1/fac)*(den2/fac);
     //found new denominator
     
     
     int n1=num1*(newDen/den1);
     int n2=num2*(newDen/den2);
     
     int newNum=n1+n2;//get new numirator
     
     simplify(newNum,newDen);
     
     cout<<newNum<<"/"<<newDen<<endl;
 }