#include <iostream>
using namespace std;

int main(){

    int pds,alpro,os,nim,nilai;
    float rata;
    string nama;


    cout<<"masukan nama mahasiswa :";
    getline(cin,nama);
    cout<<"Masukan Nim anda :";
    cin>>nim;
    cout<<"Nilai mata Kuliah"<<endl;
    cout<<"masukan nilai Algoritma dan Pemograman :";
    cin>>alpro;
    cout<<"masukan nilai Probabilitas dan statistika:";
    cin>>pds;
    cout<<"masukan nilai Sistem Oprasi:";
    cin>>os;

    if(alpro >= 60 ){
        cout<<"Algoritma dan Pemograman: Lulus"<<endl;
    }
    else{
        cout<<"Algoritma dan Pemograman:Tidak Lulus,silakan ulangi di tahun depan"<<endl;
    }
    if(pds >= 60 ){
        cout<<"Probabilitas dan statistika :Lulus"<<endl;
    }
    else{
        cout<<"Probabilitas dan statistika:Tidak Lulus,silakan ulangi di tahun depan"<<endl;
    }
    if(os >= 60 ){
        cout<<"Sistem Oprasi :Lulus"<<endl;
    }
    else{
        cout<<"Sistem Oprasi :Tidak Lulus,silakan ulangi di tahun depan"<<endl;
    }

    nilai = alpro+pds+os;
    rata = (float)nilai / 3;

    cout<<"nilai rata-rata Semester ini : "<< rata;

    
}