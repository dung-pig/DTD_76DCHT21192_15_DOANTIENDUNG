// bai1

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class sinhvien{
	private :
		string hoten ;
		int ngaysinh;
		float diem[5];

public :
	void nhap(){
		cout<<"nhap hoten:";
		fflush(stdin);
		getline(cin,hoten);
		cout<<"nhap ngaysinh :";
		cin>>ngaysinh;
		for(int i=0 ;i<5;i++){
			cout<<"diem mon thu["<<i+1<<"]";
			cin>>diem[i];
		}
	}
	float diemtb(){
		int T=0;
		for(int i=0;i<5;i++){
			T+=diem[i];
			
		}
		return T/5;
		
	}
	void xuat(){
		
		cout<<"hoten :"<<hoten<<endl;
		cout<<"ngaysinh :"<<ngaysinh<<endl;
		for(int i=0;i<5;i++){
			cout<<"diem mon thu ["<<i+1<<"] ="<<diem[i]<<endl;

		}
		cout<<"diemtb :"<<diemtb()<<endl;
	}
};
	int main(){
//		sinhvien dung;
//		dung.nhap();
//		dung.xuat();
//		return 0;
        sinhvien ds[100];
         int n;
        cout<<"nhap n :";
        cin>>n;
        for(int i=0;i<n;i++){
        cout<<"nhap thong tin sinh vien thu "<<i+1<<" "<<endl;
        	 ds[i].nhap();
		}
        cout<<"xuat thong tin sinh vien thu "<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<"\n thong tin sinh vien thu"<<endl;
        ds[i].xuat();
	}
	return 0;
}
// bai2
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class sinhvien{
	private :
		string hoten ;
		int ngaysinh;
		float diem[4];

public :
	void nhap(){
		cout<<"nhap hoten:";
		fflush(stdin);
		getline(cin,hoten);
		cout<<"nhap ngaysinh :";
		cin>>ngaysinh;
		for(int i=0 ;i<4;i++){
			cout<<"diem mon thu["<<i+1<<"]";
			cin>>diem[i];
		}
	}
	float diemtb(){
		int T=0;
		for(int i=0;i<4;i++){
			T+=diem[i];
			
		}
		return T/4;
		
	}
	void xuat(){
		
		cout<<"hoten :"<<hoten<<endl;
		cout<<"ngaysinh :"<<ngaysinh<<endl;
		for(int i=0;i<4;i++){
			cout<<"diem mon thu ["<<i+1<<"] ="<<diem[i]<<endl;

		}
		cout<<"diemtb :"<<diemtb()<<endl;
	}
};
	int main(){
//		sinhvien dung;
//		dung.nhap();
//		dung.xuat();
//		return 0;
        sinhvien ds[100];
         int n;
        cout<<"nhap n :";
        cin>>n;
        for(int i=0;i<n;i++){
        cout<<"nhap thong tin sinh vien thu "<<i+1<<" "<<endl;
        	 ds[i].nhap();
		}
        cout<<"xuat thong tin sinh vien thu "<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<"\n thong tin sinh vien thu"<<endl;
        ds[i].xuat();
	}
	return 0;
}