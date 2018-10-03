#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
//int count;
using namespace std;

void perm_helper(string input, string cur){

    if(input.size() > 1) {
        for(int i = 0; i < input.size(); i++){
            string temp = input;
            string p = cur + temp[i];
            perm_helper(temp.erase(i, 1), p);
        }
    }else{
        cout << cur + input + "\n";
    }

}

void permute(const string& input){
    perm_helper(input, "");
    //cout << "Total Number: " << count << "\n";
}

int main() {
    permute("POSTED");
    return 0;
}