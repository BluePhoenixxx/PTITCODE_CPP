#include<iostream> 
#include<string>
#include<iomanip>
#include<cstdio>
using namespace std; 
int main() 
{   
    string de101="101 A B B A D C C A B D C C A B D"; 
    string de102="102 A C C A B C D D B B C D D B B"; 
    unsigned short n; 
    cin >> n; 
    cin.ignore(); 
    for (int i =0; i<n ; i++) 
    { 
        string s; 
        getline(cin, s);
        float sai = 0.0; 
        if (s[2]=='1') 
        { 
            for (int i = 4; i <=32; i=i+2) 
                if (!(s[i] == de101[i])) 
                    sai += (float) 2/3; 

        } 
        if (s[2]=='2') 
        { 
            for (int i=4; i<=32; i=i+2) 
                if (!(s[i] == de102[i])) 
                    sai+=(float) 2/3; 
        } 
    cout << fixed << setprecision(2)<< float(10.00-sai) <<endl; 
    }
    return 0;
}