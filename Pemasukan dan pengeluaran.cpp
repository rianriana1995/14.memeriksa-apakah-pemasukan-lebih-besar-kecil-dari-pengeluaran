#include <iostream>
using namespace std;
int main(){
int pemasukan,pengeluaran;

cout<<"program untuk pemasukkan dan pengeluaran"<<endl;
cout<<"masukkan jumlah pemasukan = ";
cin>>pemasukan;
cout<<"masukkan jumlah pengeluaran = ";
cin>>pengeluaran;

if(pemasukan<pengeluaran)
{
	cout<<"pemasukan lebih kecil dari pengeluaran\n";

}
else if(pemasukan>pengeluaran)
{
	cout<<"pemasukan lebih besar dari pengeluaran\n";
	
}
else
cout<<"error";

}
