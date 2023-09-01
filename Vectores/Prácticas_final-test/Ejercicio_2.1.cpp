#include <iostream>
#include <vector>
using namespace std;

string likes(vector<string>& names);

int main() {
    string name;
    vector<string> namesList;
    
    cout << "Introduzca los nombres de las personas a las que les gusta tu publicación" << endl;
    cout << "Cuando no quieras introducir más nombres, escribe \"stop\"" << endl;
    
    while (name != "stop") {
        cin >> name;
        if (name == "stop") {
            break;
        }
        namesList.push_back(name);
    }
    
    string result = likes(namesList);
    cout << result << endl;
    
    return 0;
}
string likes(vector<string>& names) {
    int size = names.size();
    
    if (size == 0) {
        return "no one likes this";
    } else if (size == 1) {
        return  names[0] + " likes this";
    } else if (size == 2) {
        return  names[0] + " and " + names[1] + " like this";
    } else if (size == 3) {
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
        return names[0] + ", " + names[1] + " and " + to_string(size - 2)+ " others like this";
    }
}
