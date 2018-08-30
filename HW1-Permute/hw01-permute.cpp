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
            stringstream ss;
            ss << cur << temp[i];
            perm_helper(temp.erase(i, 1), ss.str());
        }
    }else{
        cout << cur << input << "\n";
        //count += 1;
    }

}

void permute(const string& input){
    perm_helper(input, "");
    //cout << "Total Number: " << count << "\n";
}

int main() {
    permute("Strohschein");
    std::cout << "Hello World! \n";
	std::getchar();
    return 0;
}