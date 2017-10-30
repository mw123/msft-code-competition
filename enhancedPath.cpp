#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
//#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <cstring>

const char* const DELIMITER = " ";
const char* const DELIMITER_P = ".";
const char* const DELIMITER_A = "*";

int main () {
    ifstream fin;
    fin.open("PracticeInput.txt");
    if (!fin.good())
        return 1;
    ofstream fon;
    fon.open("output2.txt");
    int line=0;
    //int j = 0;
    //while (!fin.eof()) {
        char buf[1024];
        fin.getline(buf, 1024);
        std::string newstr;
        int n=0;

        const char* token[2] = {};
        
        //cout << j << endl;
        //j++;
            token[0] = strtok(buf, DELIMITER);
        if (token[0])
        {
            
            cout << "Token[0] = " << token[0] << endl;
            std::string str(token[0]);
            std::string delimiter = "/\";

            size_t pos = 0;
            std::string tok;
            while((pos = str.find(delimiter)) != std::string::npos) {
                tok = s.substr(0, pos);
                cout << tok << endl;
                str.erase(0, pos + delimiter.length());
            }

        }
    

    //}
    fon.close();
    return 0;
}
