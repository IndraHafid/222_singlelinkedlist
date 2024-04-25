// 222_singlelinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node {
    int noMhs;
    string name;
    node* next;
};

node* START = NULL;

void addNode() {
    int nim;
    string nama;
    node* nodeBaru = new node();
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan Nama :";
    cin >> nama;
    nodeBaru->noMhs = nim;
    nodeBaru->name = nama;

}


int main()
{
    std::cout << "Hello World!\n";
}


