#include <iostream>
#include <fstream>

using namespace std;

struct dataEarn
{
    string name;
    string surName;
    string date;
    string salary;

};

bool is_date(string &date);
int main()
{
    while(true)
    {
        ofstream fout("report.txt", std::ios::app);
        dataEarn inData;
        string read;


        cout << "If you want to read data write 'read' onconsole:\n";
        cout << "or write 'add' to add data\n";
        cout << "or to exit to write '0' '\n";
        cout << ">";
        cin >> read;
        if(read == "0")
        {
            break;
        }

        if(read == "add")
        {
            if(fout.is_open())
            {
                cout << "Name: ";
                cin >> inData.name;
                cout << "Surname: ";
                cin >> inData.surName;
                cout << "DATE (dd.mm.yyyy): ";
                cin >> inData.date;
                while(!is_date (inData.date))
                {
                    cout << "Date is incorrect. " << '\n';
                    cout << "DATE (dd.mm.yyyy): ";
                    cin >> inData.date;
                }
                cout << "Salary: ";
                cin >> inData.salary;
                fout << inData.name << ' ' << inData.surName << ' '
                     << inData.date << ' ' << inData.salary << endl;
                fout.close();
            }else{
                cout << "This file cannot be open!\n";

            }
        }else if (read == "read")
        {
            string inOut;
            ifstream readData ("report.txt");
            if(readData.is_open())
            {
                while(getline(readData, inOut))
                {
                    cout << inOut << '\n';
                }
                readData.close();
            }

        }


    }
}

bool is_date(string &date)
{
    int day = std::stoi(date.substr(0, 2));
    int month = std::stoi(date.substr(3, 2));
    int year = std::stoi(date.substr(6));
    if(day > 0 && day <= 31 && month > 0 && month <= 12 && year > 1920 && year <= 2002) return true;
    else return false;
}