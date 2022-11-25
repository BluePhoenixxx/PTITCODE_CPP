 #include <bits/stdc++.h>
using namespace std;
class SinhVien
{
  string name, lop, ns;
  float gpa;
    public:  
    SinhVien ()
    { 
        name = "noname";
        lop = "";
        ns = "";
        gpa = 0;
    } 
  friend ostream & operator << (ostream & output, SinhVien & p);
  friend istream & operator >> (istream & input, SinhVien & p);
};

ostream & operator << (ostream & output, SinhVien & p)
{
   if (p.ns[2] != '/')
        p.ns.insert (p.ns.begin(), '0');
    if (p.ns[5] != '/')
        p.ns.insert (p.ns.begin() + 3, '0');
    output << "B20DCCN001 " << p.name << " " << p.lop << " " << p.ns << " " << fixed << setprecision(2) << p.gpa;
  return output;
}
istream & operator >> (istream & input, SinhVien & p)
{
    getline(input, p.name);
    input >> p.lop;
    input >> p.ns;
     input >> p.gpa;
  return input;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
