//vektor
#include<iostream>
#include<vector>
using namespace std;
class daftar{
	private:
		vector<string> barang;
public:
	daftar(){
		barang={"beras","minyak goyeng","sabun"};
	}
	daftar(vector<string> barang){
		this->barang=barang;
	}
void setbarang(vector<string> barang){
	this->barang=barang;
}
vector<string> getbarang(){
	return barang;
}
void tambahakhir(string nama){
	barang.push_back(nama);
}
void hapusakhir(){
	barang.pop_back();
}
void tambahbarang(int urutan, string nama){
	barang.insert(barang.begin()+urutan-1,nama);
}
void hapusbarang(int urutan){
	barang.erase(barang.begin()+urutan-1);
}
void daftarbaru(string* nama, int jumlah){
	barang.assign(nama,nama+jumlah);
}
void hapusdaftar(){
	if(barang.empty()!=1){
		barang.clear();
	}else{
		cout<<"Daftar sudah kosong\n";
	}
}
void cetakdaftar(){
	cout<<"Daftar barang Aca: \n";
	for(int i=0; i<barang.size(); i++){
		cout<<i+1<<". "<<barang[i]<<"\n";
		}
	}
};
int main(){
	daftar d;
	daftar d2 ({"hp","dompet"});
	d.setbarang({"baju","celana","kaos kaki"});
	d.tambahbarang(3,"hp");
	d.hapusbarang(2);
	string nama[]={"hp","dompet","earphone"};
	int jumlah=sizeof(nama)/sizeof(nama[0]);
	d.daftarbaru(nama,jumlah);
//	d.hapusakhir();
	d.tambahakhir("uang");
//	d.hapusdaftar();
	d.cetakdaftar();
}

