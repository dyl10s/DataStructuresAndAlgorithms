#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int testCount = 100;
    int maxTestLength = 10;
    int minTestLength = 1;

    ofstream myfile;
    myfile.open ("SampleTest.txt");
    myfile << testCount - 1 << endl;

    for(auto tests = 0; tests < testCount; tests++){
            int curLength = rand() % maxTestLength + minTestLength;
            myfile << curLength << endl;

            for(auto testNums = 0; testNums < curLength; testNums++){
                myfile << rand() % 100;
                if(testNums != curLength - 1) {
                    myfile << " ";
                }
            }
            myfile << endl;
    }

    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
}