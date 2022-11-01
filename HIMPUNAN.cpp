#include <iostream>
#include <conio.h>
using namespace std;

int main()
{	//array a dan b masing-masing memesan memori sebesar 20 alamt
	int i, j, a[20], b[20], himpunanA, himpunanB;
	
	cout<<"==================================\n";
	cout<<"Anggota Kelompok :\n";
	cout<<"Putu Mandiasa 	      (2115101008)\n";
	cout<<"Made Waradiana Aryadi (2115101040)\n";
	cout<<"Arteddy Rover Bukit   (2115101052)\n";
	cout<<"==================================\n\n";
	
	cout <<"------------------------------------------\n";
	cout <<"Irisan, Gabungan, Himpunan Bagian, Selisih\n";
	cout <<"------------------------------------------\n";
	cout <<"Masukkan Banyaknya Anggota Himpunan A : ";
	cin >> himpunanA;

	//isi didalam anggota A didalam array a
	for (i = 0; i < himpunanA; i++)
	{
		cout <<"Silahkan Masukkan Anggota" << i + 1 << " : ";
		cin >> a[i];
	}
	
	cout <<"\nMasukkan Banyaknya Anggota Himpunan B : ";
	cin >> himpunanB;
	//isi didalam anggota B didalam array b
	for (i = 0; i < himpunanB; i++)
	{
		cout <<"Silahkan Masukkan Anggota" << i + 1 << " : ";
		cin >> b[i];
	}
	
	//menampilkan isi yang ada didalam array a
	cout <<"\nHimpunan A ={";
	for(i = 0; i < himpunanA; i++)
	{
		cout << a[i] <<" ";
	}
	cout << "}";
	
	//menampilkan isi yang ada didalam array b
	cout <<"\nHimpunan B ={";
	for(i = 0; i < himpunanB; i++)
	{
		cout << b[i] <<" ";
	}
	cout << "}"; 
	
	cout <<"\n\n";
	cout <<"A irisan B = {";
	for(i = 0; i < himpunanA; i++)
	{
		for(j = 0; j < himpunanB; j++)
		{
			//jika isi dari array a = isi array b, maka akan ditampilkan adalah isi array a
			if(a[i] == b[j])
				cout << a[i] <<" "; 
		}
	}cout << "}";
	
	//Menampilkan gabungan isi dari array a dan b
	cout <<"\n\nA Gabungan B ={";
	for(i = 0; i < himpunanA; i++)
	{
		cout <<a[i]<<" ";
	}
	for(i = 0; i < himpunanB; i++)
	{
		cout <<b[i]<<" ";
	}
	cout << "}";
	
	
	//Menampilkan selisih isi dari array a dan b
	cout <<"\n\nA Selisih B ={";
	for(i = 0; i < himpunanA; i++)
	{
		for(j = 0; j < himpunanB; j++)
		{
			if(a[i] == b[j])
			{
				break;
			}
		}
		if(j == himpunanB)
		{
			cout << a[i] <<" ";
		}
	}
	cout <<"}";
	cout <<"\n\nPress Any key for end ...";
	getch();
	return 0;
}
