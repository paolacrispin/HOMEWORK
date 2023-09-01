#include <iostream>
#include <vector>
using namespace std;
vector<int> snail(vector<vector<int>>&snail_map);
int main (){
  vector<vector<int>>snail_map;
  int size=0;
  cout<< "Enter the vector size"<<endl;
  cin>>size;
  snail_map.resize(size, vector<int>(size));
  for(int j = 0; j < size; ++j) {
        for (int i = 0; i < size; ++i) {
            cout << "Ingrese el valor de la fila " << j + 1 << " columna " << i + 1 << ": ";
            cin >> snail_map[j][i];
        }
  }
  vector<int>result=snail(snail_map);
  for (int show:result){
    cout<<show<<" ";
  }
  return 0;
}
vector<int>snail(vector<vector<int>>&snail_map){
  vector<int>result;
  int j=0;
  int last_value= snail_map.size()-1;
        for (int i = 0; i <= last_value; ++i) {
            result.push_back(snail_map[j][i]);
        }
        for(int i=1; i<=last_value ;++i){
            result.push_back(snail_map[i][last_value]);
        }
        for (int i=1; i<=last_value; ++i){
            result.push_back(snail_map[last_value][last_value-i]);
        }
        for( int i=1; i<last_value;++i){
            result.push_back(snail_map[last_value-i][j]);
        }
        for (int i=1; i<=last_value-1;++i){
            result.push_back(snail_map[j+1][i]);
        }
         for (int i=1; i<=last_value-1;++i){
            result.push_back(snail_map[last_value-1][last_value-i]);
        }
        return result;

}
