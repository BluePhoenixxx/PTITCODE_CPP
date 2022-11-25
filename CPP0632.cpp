#include<bits/stdc++.h>

using namespace std;
int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
private:    
    string maKhachHang, tenKhachHang, gioiTinh, ngaySinh, diaChi;
public:
    friend class HoaDon;
    friend istream &operator >> (istream &is, KhachHang &kh)
    {
        ++cntkh;
        if(cntkh < 10) kh.maKhachHang = "KH00" + to_string(cntkh);
        else kh.maKhachHang = "KH0" + to_string(cntkh);
        scanf("\n");
        getline(is, kh.tenKhachHang);
        getline(is, kh.gioiTinh);
        getline(is, kh.ngaySinh);
        getline(is, kh.diaChi);
        KH[kh.maKhachHang] = kh;
        return is;

    }
    string getTenKhachHang()
    {
        return this-> tenKhachHang;
    }

    string getDiaChi()
    {
        return this->diaChi;
    }
};

class MatHang
{
private:
    string maMatHang, tenMatHang, donViTinh;
public:
    unsigned int  giaMua, giaBan;
    friend class HoaDon;
    friend istream &operator >> (istream &is, MatHang &mh)
    {
        ++cntmh;
        if(cntmh < 10) mh.maMatHang = "MH00" + to_string(cntmh);
        else mh.maMatHang = "MH0" + to_string(cntmh);
        scanf("\n");
        getline(is, mh.tenMatHang);
        getline(is, mh.donViTinh);
        cin >> mh.giaMua >> mh.giaBan;
        MH[mh.maMatHang] = mh;
        return is;
    }

    string getTenMatHang()
    {
        return this->tenMatHang;
    }

    string getDonViTinh()
    {
        return this->donViTinh;
    }

};

class HoaDon
{
private:
    string maHoaDon, maKhachHang, maMatHang;
public:
    long long soLuong, loiNhuan;
    friend istream &operator >> (istream &is, HoaDon &hd)
    {
        ++cnthd;
        if(cnthd < 10) hd.maHoaDon = "HD00" + to_string(cnthd);
        else hd.maHoaDon = "HD0" + to_string(cnthd);
        cin >> hd.maKhachHang >> hd.maMatHang >> hd.soLuong;
        hd.loiNhuan = MH[hd.maMatHang].giaBan * hd.soLuong - MH[hd.maMatHang].giaMua * hd.soLuong;
        return is;
    }
    friend ostream &operator << (ostream &os, HoaDon &hd)
    {
        os << hd.maHoaDon << ' ' << KH[hd.maKhachHang].getTenKhachHang() << ' ' << KH[hd.maKhachHang].getDiaChi() << ' ' << MH[hd.maMatHang].getTenMatHang() << ' ' << hd.soLuong << ' ' << MH[hd.maMatHang].giaBan * hd.soLuong << " " << hd.loiNhuan <<  endl;
        return os;
    }
};


bool cmp(HoaDon &a, HoaDon &b)
{
    return a.loiNhuan >= b.loiNhuan;
}

void sapxep(HoaDon a[], int n)
{
    sort(a, a + n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}