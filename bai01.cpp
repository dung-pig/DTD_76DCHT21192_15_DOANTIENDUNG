#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    string maNV, tenNV;
    double luongCB, heSo;
};

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    
    NhanVien ds[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\nNhan vien " << i + 1 << ":\n";
        cout << "Ma NV: "; cin >> ds[i].maNV;
        cin.ignore(); 
        cout << "Ten NV: "; getline(cin, ds[i].tenNV);
        cout << "Luong CB & He so: "; cin >> ds[i].luongCB >> ds[i].heSo;
    }

    cout << "\n--- DANH SACH NHAN VIEN ---\n";
    for (int i = 0; i < n; i++) {
        cout << ds[i].maNV << " | " << ds[i].tenNV 
             << " | Luong CB: " << ds[i].luongCB 
             << " | He so: " << ds[i].heSo 
             << " | Thuc linh: " << ds[i].luongCB * ds[i].heSo << endl;
    }

    return 0;
}