#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string namamu, alamatmu, hobimu;
    int umurmu;
    double tinggibadanmu,beratbadanmu;
    cout << "Siapa namamu: \n";
    cin >> namamu;
    cout << "Dimana alamatmu: \n";
    cin >> alamatmu;
    cout << "Apa hobimu: \n";
    cin >> hobimu;
    cout << "Berapa Umurmu: \n";
    cin >> umurmu;
    cout << "Berapa TinggiBadanmu: \n";
    cin >> tinggibadanmu;
    cout << "Berapa BeratBadanmu: \n";
    cin >> beratbadanmu;
    
    cout << "-------------------------\n";
    cout << "Berikut Biodata Anda \n";
    cout << "Namamu:" +namamu+ "\n";
    cout << "Alamatmu:" +alamatmu+ "\n";
    cout << "Hobimu:" +hobimu+ "\n";
    cout << "Umurmu: "<<umurmu;
    printf("Tinggi badanmu = %3.1f \n",tinggibadanmu);
    printf("Berat badanmu = %.1f", beratbadanmu);
    cout << "\nTerimakasih";
    cout << "\n-------------------------";    
 

    return 0;
}