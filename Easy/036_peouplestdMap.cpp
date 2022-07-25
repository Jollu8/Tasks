#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream is("data.txt");
    map<string, string> numberSurname;
    map<std::string, vector<string>> surnameNumber;

    std::string line;
    while (getline(is, line)) {
        int n = line.size();
        if (n == 0) continue;

        int pos = line.find(' ');

        if (pos != string::npos) {
            string number = line.substr(0, pos), surname = line.substr(pos + 1);

            numberSurname[number] = surname;
            surnameNumber[surname].push_back(number);
        }
        else if ( line[0] >= '0' && line[0] <= '9') {
            cout << numberSurname[line] << '\n';
        }
        else {
            vector<std::string>& numbers = surnameNumber[line];
            for (int i = 0; i < numbers.size(); ++i) {
                std::cout<<numbers[i]<<'\n';
            }
        }
    }
}