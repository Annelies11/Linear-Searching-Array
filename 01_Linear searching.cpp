#include <iostream> 

using namespace std;

int main() {
	int i, n, A[100], cari, temu = 0;
	cout<<"Masukkan banyak data : ";
	cin>>n;
	
	for( i=1; i<=n; i++) {
	cout<<"Masukkan data ke "<<i<<" : ";
	cin>>A[i];
	}
	cout<<"Masukkan angka yang anda cari :";
	cin>>cari;
	
	for(i = 0; i <= n; i++) {
		if (A[i]==cari) {
			temu==1;
			cout<<"data "<<cari<<" berada di indeks "<<i;
		}
	}
	if(temu!=1) {
	cout<<"data "<<cari<<" tidak ditemukan!";
	}
	return 0;
	
}
