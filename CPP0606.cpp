#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
    string  ma,hoTen, ns, gt, dc, maThue , hd;
    public:  
    void nhap ()
    {
        ma = "00001 ";
        getline (cin, hoTen);
        cin >> gt;
        cin >> ns;
        cin.ignore();
        getline(cin, dc);
        cin >> maThue;
        cin >> hd;
    }
    void xuat ()
    {
         cout  << ma << hoTen << " " << gt << " " << ns << " "<< dc << " " << maThue << " " << hd ;
    }
};


int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}