#include <iostream>
#include <fstream>
using namespace std;


void output_matrix(int matrix[3][3],int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

void bin_example(){
    int pixels[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            pixels[i][j] = 1 + i * j;
        }
    }

    output_matrix(pixels,3,3);

    ofstream fout("data.bin", ios::binary);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            fout.write((char *)&pixels[i][j],sizeof(int));
        }
    }

    fout.close();

    cout << "Resetting pixels" << endl;
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3; j++) {
            pixels[i][j] = 0;
        }
    }    


    output_matrix(pixels, 3,3);

    cout << "Reading again" << endl;
    ifstream fin("data.bin", ios::binary);

    if(fin.fail()) {
        cout << "Failed to read file" << endl;
    } else {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                fin.read((char *)&pixels[i][j], sizeof(int));
            }
        }
    }

    fin.close();

    output_matrix(pixels, 3,3);
}

// character input output i/o
void char_example() {
    ofstream fout;
    string filename = "sample.txt";
    string line = "my test line...";
    fout.open(filename);
    fout << line << endl;

    fout.close();

    ifstream fin;
    fin.open(filename);
    while(fin){
        getline(fin,line);
        cout << line;
    }
    cout << endl;
    fin.close();
}

int main(){

    cout << "int " << sizeof(int) << endl;
    cout << "char " << sizeof(char) << endl;

    //char_example();
    bin_example();
    return 0;
}
