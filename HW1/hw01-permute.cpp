#include <iostream>
#include <sstream>
#include <string>
#include "SimpleDate.h"

using namespace std;
int count;

void perm_helper(string input, string cur){

    if(input.size() > 1) {
        for(int i = 0; i < input.size(); i++){
            string temp = input;
            stringstream ss;
            ss << cur << temp[i];
            perm_helper(temp.erase(i, 1), ss.str());
        }
    }else{
        cout << cur << input << endl;
        count += 1;
    }

}

void permute(const string& input){
    perm_helper(input, "");
    cout << "Total Number: " << count << endl;
}

int main() {
    permute("POSTED");

    SimpleDate *date = new SimpleDate(5, 8, 2011);
    cout << date->nextDate().getMonth() << "\\" << date->nextDate().getDay() << "\\" << date->nextDate().getYear();

    return 0;
}