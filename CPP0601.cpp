#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
    string  hoTen, lop, ns;
    float diem;
    public:  
    void nhap ()
    {
        getline (cin, hoTen);
        getline (cin, lop);
        getline (cin, ns);
    cin >> diem;
    if (ns[2] != '/')
        ns.insert (ns.begin(), '0');
    if (ns[5] != '/')
        ns.insert (ns.begin() + 3, '0');
    }
    void xuat ()
    {
         cout  << "B20DCCN001 " << hoTen << " " << lop << " " << ns << " " << fixed << setprecision(2) << diem;
    }
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
