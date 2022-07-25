#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream ifs("input.txt"); //Check text file
    map<string, int> queue;
    string line;
    while (getline(ifs, line)) {
        if (line == "Next") {
            while (!queue.empty()) {
                if (map<std::string, int>::iterator begin = queue.begin();begin->second == 0) {
                    queue.erase(begin);
                }
                else {
                    cout<<begin->first<<'\n';
                    --begin->second;
                    break;
                }
            }
        }
        else {
            queue[line] += 1;
        }
    }
}