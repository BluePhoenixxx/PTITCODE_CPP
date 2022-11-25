 #include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ucln(ll a, ll b)
{
    if (b==0)
        return a;
    else return ucln(b, a%b);
}


class PhanSo
{
    unsigned long long tu, mau;
    public:  
    PhanSo (unsigned long long  tu,unsigned long long mau);
    friend ostream & operator << (ostream & output, PhanSo & p);
     friend istream & operator >> (istream & input, PhanSo & p);
     void rutgon()
    {
        ll ucln1 = ucln (tu,mau);
        tu/=ucln1;
        mau/=ucln1;
    }
};
PhanSo::PhanSo(unsigned long long  _tu, unsigned long long _mau)
{
	tu = _tu;
	mau = _mau;
}
ostream & operator << (ostream & output, PhanSo & p)
{
    output << p.tu << "/" <<  p.mau;
  return output;
}
istream & operator >> (istream & input, PhanSo & p)
{
    input >> p.tu >> p.mau;
  return input;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
