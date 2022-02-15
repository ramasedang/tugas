// Program untuk menampilkan biodata yang di input seseorang

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    string nama, alamat, hobi;       // deklarasi data
    int umur;
    double tbadan,bbadan;
    char jenis_kelamin;
    

    cout << "Silahkan masukan data-data yang diperlukan, Klik ENTER untuk lanjut!";
    cin.ignore();

    cout << "Jenis kelamin:\n";
    cin >> jenis_kelamin;
    cin.ignore();

    cout << "Tuliskan nama: \n";     //input nama  
    getline(cin,nama);     

    cout << "Umur: \n";              //input umur   
    cin >> umur; 
    cin.ignore();        
    
    cout << "Tuliskan alamat: \n";   //input alamat
    getline(cin,alamat);
    
    cout << "Tuliskan hobi: \n";     //input hobi
    getline(cin,hobi);
    
    cout << "Tinggi Badan: \n";      //input Tinggi badan
    cin >> tbadan;
    cin.ignore();
    
    cout << "Berat Badan: \n";       //input berat badan    
    cin >> bbadan;
    cin.ignore();

    cout << string(50, '\n');
    
    cout << "============================\n";
    cout << "Nama:" +nama+ "\n";
    cout << "Alamat:" +alamat+ "\n";
    cout << "Hobi:" +hobi+ "\n";
    cout <<"Umur: "<<umur;
    printf("\nTinggi badan: %.1f", tbadan);
    printf("\nBerat badan: %.1f", bbadan);
    //cout <<"\nTinggi badan: "<< tbadan ;
    //cout <<"\nBerat badan: "<< bbadan;
    cout << "\n==========================";    
 

    return 0;
}