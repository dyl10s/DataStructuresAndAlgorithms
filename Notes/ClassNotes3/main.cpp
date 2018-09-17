#include <iostream>
#include <vector>

using namespace std;

int main() {

    //Reference Vars
    int nums[] = {2, 5, 6, 8};
    int fav = nums[2];
    int& fav2 = nums[3];

    fav = 5;  //Does not update the array falue
    fav2 = 1; //Updates 6 to 1

    //Array List
    vector<string> stringList {"Number1", "Number2", "Number3"};

    for(auto p : stringList){
        cout << p << std::endl;
    }

    for(auto& p : stringList){
        p = "Changed";
    }

    for(auto p : stringList){
        cout << p << endl;
    }

    //Pass by reference
    string name = "John";
    string city = "New York"
    doSomething(name, city);

    return 0;
}

void doSomething(string a, const string& b){
    //3 total String objects between name, city and a. B is a reference to city. A is the value from name.
    //const allows us to pass by reference and not let function change it. It is more efficient to pass by ref.
}

void constRefParams(vector<float> nums, vector<bool>& flags){

}