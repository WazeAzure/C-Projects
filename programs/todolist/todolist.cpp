#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>

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

int main(){
    infile.open("save.txt");

    string todo;
    vs in;

    while(getline(infile, todo)){
        cout << todo << endl;
        in.push_back(todo);
    }

    infile.close();

    ToDoList mylist("Araeiou", 10, in);

    while(true){
        string command;
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
        } else {
            cout << "no command found - check for typos" << endl;
        }
    }

    mylist.save();
    return 0;
}
