#include <iostream>
using namespace std;

int main (int argc,char*argv){ 

    int i,a,b,r,kpk;
    int p;
    kpk=0;
    
    cout<<"==================================\n";
	cout<<"Anggota Kelompok :\n";
	cout<<"Putu Mandiasa 	      (2115101008)\n";
	cout<<"Made Waradiana Aryadi (2115101040)\n";
	cout<<"Arteddy Rover Bukit   (2115101052)\n";
	cout<<"==================================\n\n";
	
    cout <<"---------------------------------\n";
	cout <<"KPK & FPB\n";
	cout <<"---------------------------------\n";
    cout<<"1. Menentukan KPK\n";
    cout<<"2. Menentukan FPB\n";
    cout<<"Masukkan Pilihan Anda:";cin>>p;
    system("cls");
    switch (p)
    {
    case 1 :{
        cout<<"Mencari KPK \n";
		cout<<"--------------------------------\n";
		cout<<"masukkan bilangan pertama : ";cin>>a;
		cout<<"masukkan bilangan kedua   : ";cin>>b;
		
		for(i=1;i<=b;i++){
		    kpk=kpk+a;
		    if(kpk%b==0){ 
		        cout<<"--------------------------------\n";
		        cout<<"KPK = "<<kpk;
		        cout<<"\n--------------------------------\n";
		        break;
		    }
		}
    }
    case 2 :{
        cout<<"Mencari FPB\n";
        cout<<"--------------------------------\n";
		cout<<"masukkan bilangan pertama : ";cin>>a;
        cout<<"masukkan bilangan kedua   : ";cin>>b;
        r=a%b;

        while (r!=0)
        {
            a=b;
            b=r;
            r=a%b;
        }
        cout<<"--------------------------------\n";
        cout<<"FPB :"<<b;
        break;
    }
    default :
        {
            cout<<"Eror!!!"<<endl;
        }
    }
    return 0;
}
