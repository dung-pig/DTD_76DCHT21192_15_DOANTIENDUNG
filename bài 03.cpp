#include <iostream>
using namespace std;

// Cau 1: Khai bao lop ma tran
class Matrix {
private:
    int soHang, soCot;
    int a[100][100]; // Cac phan tu cua ma tran

public:
    // Cau 2: Phuong thuc nhap, xuat
    void nhap() {
        cout << "Nhap so hang, so cot: ";
        cin >> soHang >> soCot;
        cout << "Nhap cac phan tu:\n";
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cin >> a[i][j];
            }
        }
    }

    void xuat() {
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Cau 3: Ham ban thuc hien cong hai ma tran
    friend Matrix cong(Matrix m1, Matrix m2) {
        Matrix kq;
        kq.soHang = m1.soHang;
        kq.soCot = m1.soCot;
        for (int i = 0; i < kq.soHang; i++) {
            for (int j = 0; j < kq.soCot; j++) {
                kq.a[i][j] = m1.a[i][j] + m2.a[i][j];
            }
        }
        return kq;
    }
};

int main() {
    // Cau 3: Nhap vao hai ma tran dong cap
    Matrix m1, m2;
    cout << "Nhap ma tran 1:\n";
    m1.nhap();
    cout << "Nhap ma tran 2:\n";
    m2.nhap();

    // In ra man hinh hai ma tran ban dau
    cout << "\nMa tran 1:\n";
    m1.xuat();
    cout << "\nMa tran 2:\n";
    m2.xuat();

    // In ra ma tran ket qua
    Matrix mKetQua = cong(m1, m2);
    cout << "\nMa tran ket qua:\n";
    mKetQua.xuat();

    return 0;
}