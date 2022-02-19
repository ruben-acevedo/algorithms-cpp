#include <iostream>  
#include <vector>
#include <cstring>

 using namespace std; 
 
 vector<string> shorter() {
    int n;
    cin >> n;
    vector <string> list = {};
    for (int i = 0; i < n; i++){
        string input;
        cin >> input;
        if (input.size() > 10) { 
            input = input[0] + to_string(input.size()-2) + input[input.size()-1];
        }
        list.push_back(input);
    };
    return list;
 };

 int main() {
    vector<string> shortList = shorter();
    for (int i = 0; i < shortList.size(); i++){
        cout << shortList[i] << endl;
    };

}