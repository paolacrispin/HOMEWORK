#include <fstream>//no entendí el ejercicio
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
void readBoardfile(string path);
int main(){
    ifstream path ("C:\Users\LENOVO\AppData\Local\Temp\Temp1_vectors.zip\vectors\exercise2\boards\1.board");
    vector<vector<int>> board = {};
    void readBoardfile(path);
}
vector<int> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<int> row;
  while (sline >> n >> c && c == ',') {
    row.push_back(n);
  }
  return row;
}
void readBoardfile(string path){
    vector<vector<int>> board = {};
    string path;
while (getline(path, line)) {
 cout << line << "\n";
 }

}