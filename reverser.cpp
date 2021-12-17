#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;
    string line;

    ifstream file("test.txt");
    while (getline (file, line)) {
        text += line;
    }

    string result;
    for(int i = text.length() - 1; i >= 0; i--) {
        result += text.at(i);
    }

    cout << text + "\n";
    cout << result + "\n";

    file.close();

    // Write result to new file
    ofstream newFile("output.txt");
    newFile << result;
    newFile.close();
}
