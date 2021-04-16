#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //Tulis binary file (ios::out)
    fstream myFile;
    int number = 92837;
    int* p = &number;
    myFile.open("data.bin", ios::out | ios::binary);

    //tulis binary file
    myFile.write(reinterpret_cast<char*>(&number),sizeof (number));

    myFile.close();

    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);

    //baca binary file
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof (hasil));
    cout << "ukuran type data int(integer) : " << sizeof(hasil) << endl;
    cout << "int number = " << hasil << endl;

    myFile.close();

cin.get();
return 0;
}
