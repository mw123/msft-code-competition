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
const char* const DELIMITER_C = ",";

int main () {
    ifstream fin;
    fin.open("Harmony-of-Ones_InputForSubmission_1.txt");
    if (!fin.good())
        return 1;
    ofstream fon;
    fon.open("output1.txt");
    int line=0;
    //int j = 0;
    while (!fin.eof()) {
        char buf[1024];
        fin.getline(buf, 1024);

        int n=0;

        const char* token[2] = {};
        
        //cout << j << endl;
        //j++;
        if (line)
            token[0] = strtok(buf, DELIMITER_C);
        else
            token[0] = strtok(buf, DELIMITER);
        if (token[0])
        {
            for (n = 1; n < 2; n++) {
                if (line)
                    token[n] = strtok(0, DELIMITER_C);
                else
                    token[n] = strtok(0, DELIMITER);

                if(!token[n]) break;
            }
        }
    
        for (int i = 0 ; i < n; i++)
            cout << "Token[" << i << "] = " << token[i] << endl;
        cout << endl;

        if (line) {
        int x, y;
        x = atoi(token[0]);
        y = atoi(token[1]);
        int sum = x & y;
        int cnt=0;

        while (sum) {
            if (sum%2) cnt++;
            sum/=2;
        }
        cout << cnt << endl;
        fon << cnt << endl;
        }
        line++;
    }
    fon.close();
    return 0;
}
