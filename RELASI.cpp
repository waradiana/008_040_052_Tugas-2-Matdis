#include <iostream>
#include <cmath>
using namespace std;

void relasi(){
    const int MAX = 100;
    int anggotaA[MAX], anggotaB[MAX];
    int himpunanA, himpunanB;

    //Menentukan Jumlah anggota dari himpunan A yang diinput oleh user.
    cout << "\nJumlah Anggota Himpunan A: ";
    cin >> himpunanA;

    for(int i=0; i<himpunanA; i++){
        //User memasukkan anggota dari himpunan A kemudian disimpan pada pada array.
        cout << "Masukkan anggota " << i + 1 << " : ";
        cin >> anggotaA[i]; 
    }

    //Menentukan Jumlah anggota dari himpunan B yang diinput oleh user.
    cout << "\nJumlah Anggota Himpunan B: ";
    cin >> himpunanB;

    for(int i=0; i<himpunanB; i++){
        //User memasukkan anggota dari himpunan B kemudian disimpan pada pada array.
        cout << "Masukkan anggota " << i + 1 << " : ";
        cin >> anggotaB[i]; 
    }

    //Menampilkan anggota dari himpunan A.
    cout << "\nAnggota Himpunan A = { ";
    for(int i=0; i<himpunanA; i++){
        cout << anggotaA[i] << " ";
    }
    cout << "}";

    //Menampilkan anggota dari himpunan B
    cout << "\nAnggota Himpunan B = { ";
    for(int i=0; i<himpunanB; i++){
        cout << anggotaB[i] << " ";
    }
    cout << "}" << endl;
    
    cout << "\nRelasi yang mungkin : \n";
    cout << "{";
    for(int i=0; i<himpunanA; i++){
        for(int j=0; j<himpunanB; j++){
            cout << "(" << anggotaA[i] << "," << anggotaB[j] << ")";
        }
    }
    cout << "}";
    
    cout << "\n\nSifat simetris A dan B : \n";
    cout << "{";
    for(int i=0; i<himpunanA; i++){
        for(int j=0; j<himpunanB; j++){
            cout << "(" << anggotaA[i] << ", " << anggotaB[j] << ")";
            cout << "(" << anggotaB[j] << ", " << anggotaA[i] << ")";

        }
    }
    cout << "}";

    cout << "\n\nRefleksif dari relasi A : \n";
    cout << "{";
    for (int i=0; i<himpunanA; i++){
        cout << "(" << anggotaA[i] << ", " << anggotaA[i] << ")";
    }
    cout << "}";

    cout << "\n\nRefleksif dari relasi B : \n";
    cout << "{";
    for (int j=0; j<himpunanB; j++){
        cout << "(" << anggotaB[j] << ", " << anggotaB[j] << ")";
    }
    cout << "}";
}

void ceiling(){
    double bil, hasil;
    cout << "Masukkan bilangan desimal: ";
    cin >> bil;
    
    hasil = ceil(bil);
    cout << bil << " dibulatkan ke atas menjadi " << hasil;
    cout << "\n";

}

int main(){

    int input;
    char pilihan;
    
    cout<<"==================================\n";
	cout<<"Anggota Kelompok :\n";
	cout<<"Putu Mandiasa 	      (2115101008)\n";
	cout<<"Made Waradiana Aryadi (2115101040)\n";
	cout<<"Arteddy Rover Bukit   (2115101052)\n";
	cout<<"==================================\n\n";
	
    cout <<"----------------------------------------\n";
	cout <<"Relasi,Simetris,Reflektif,Fungsi Celling\n";
	cout <<"----------------------------------------\n";
    cout << "1. Relasi\n";
    cout << "2. Fungsi Celling\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan){
        case '1':
            relasi();
            break;
        case '2':
            ceiling();
            break;
        default:
            break;
    }

    return 0;
}
