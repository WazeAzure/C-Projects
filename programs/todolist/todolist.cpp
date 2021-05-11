#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

#define vs vector<string>

using namespace std;

// file handling
ifstream infile;
ofstream outfile;

class ToDoList{
    public:
        string pemilik;
        int total;
        vs list;

        // constructor
        ToDoList(string a, int b, vs v){
            pemilik = a;
            total = b;
            list = v;
        }

        // methodes
        void showList(){
            system("CLS");
            cout << "-----------------------" << endl;
            cout << "| " << pemilik << " |" << endl;
            cout << "-----------------------" << endl;
            int i = 1;
            for(string lol : list){
                cout << i << ") " << lol << endl;
                i++;
            }
        }

        void addList(string add){
            list.push_back(add);
            showList();
        }

        void removeList(int x){
            list.erase(list.begin() + x - 1);
            showList();
        }

        void swapList(int f, int g){
            string temp = list[f-1];
            list[f-1] = list[g-1];
            list[g-1] = temp;
            showList();
        }

        void clearAll(){
            list.clear();
        }
        
        void save(){
            outfile.open("save.txt");
            for(string lol : list){
                outfile << lol << endl;
            }
            outfile.close();
        }
};



void initNote(string akun){
    system("CLS");
    infile.open("save.txt");

    string todo;
    vs in;

    while(getline(infile, todo)){
        cout << todo << endl;
        in.push_back(todo);
    }

    infile.close();

    string profNama = "";
    for(auto x: akun){
        if(x != ' '){
            profNama += x;
        } else {
            break;
        }
    }

    ToDoList mylist(profNama, 10, in);
    mylist.showList();
    while(true){
        string command = "";
        cout << "-> ";
        getline(cin, command);
        
        if(command == "exit"){
            break;
        }

        string word = "";
        for(auto x: command){
            if(x != ' '){
                word += x;
            } else {
                break;
            }
        }

        if(word == "add"){
            cout << "add detected" << endl;
            command = command.erase(0,4);
            cout << command << endl;
            mylist.addList(command);
        } else if(word == "del"){
            cout << "del detected" << endl;
            command = command.erase(0,4);
            cout << command << endl;
            int del = stoi(command);
            mylist.removeList(del);
        } else if(word == "swap"){
            cout << "swap detected" << endl;
            command = command.erase(0,5);
            cout << command << endl;
            int sb = (int)command[0] - '0';
            int se = (int)command[2] - '0';
            mylist.swapList(sb, se);
        } else if (word == "clear"){
            mylist.clearAll();
        } else if(command != ""){
            cout << "no command found - check for typos" << endl;
        }

    }

    mylist.save();
 
}

void initSignUp(){
    system("CLS");
    cout << "SELAMAT DATANG DI TO DO LIST" << endl;
    cout << "made by wazeazure" << endl;
    cout << "-----------------------------" << endl << endl;

    cout << "silahkan bikin akun dengan masukkan nama anda" << endl;

    string nama;
    cin >> nama;
    outfile.open("akun.txt");
    outfile << nama;
    outfile.close();
    cout << "Halo " << nama << endl;
    system("PAUSE");
    initNote(nama);
}

int main(){
    string akun;
    infile.open("akun.txt");

    if(infile.is_open()){
        cout << "work" << endl;
        infile >> akun;
        infile.close();
        initNote(akun);
    } else {
        infile.close();
        outfile.open("akun.txt");
        outfile.close();
        outfile.open("save.txt");
        outfile.close();
        initSignUp();
    }

   return 0;
}
