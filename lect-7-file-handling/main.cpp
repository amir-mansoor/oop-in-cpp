#include <iostream>
#include <fstream>
using namespace std;

void output_matrix(int arr[][3],int rows,int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void bin_example() {
    int pixels[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            pixels[i][j] = 1 + i*j;
        }
    }

    output_matrix(pixels,3,3);
    ofstream fout("data.bin", ios::binary); // doesn't matter what the filename is
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            fout.write((char *)&pixels[i][j],sizeof(int));
        }
    }

    fout.close();

    cout << "Resetting pixels" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            pixels[i][j] = 0;
        }
    }

    output_matrix(pixels,3,3);

    cout << "Reading again" << endl;
    ifstream fin("data.bin", ios::binary);
    if(fin.fail()) {
        cout << "Failed to read file" << endl;
    } else {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                fin.read((char *)&pixels[i][j],sizeof(int));
            }
        }

        fin.close();
    }

    output_matrix(pixels,3,3);
}

int main() {
    int x;

    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    ofstream fout;
    ifstream fin;
    fout.open("simple_1.txt");
    fout << '2';
    // fout << "Hello world again" << endl;
    // fout.close();
    fin.open("simple_1.txt");
    string line;
    while(fin) {
        getline(fin,line);
        cout << line;
    }

    
    fin.close();

    bin_example();
    return 0;
}