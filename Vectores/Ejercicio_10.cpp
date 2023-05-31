#include <iostream>
#include <vector>
using namespace std;
int heightChecker(vector<int>& heights);
void input_heights(vector<int>&heights);
int main(){
    vector<int> heights;
    input_heights(heights);
    int result= heightChecker(heights);
    cout<<result;
    return 0;
}
void input_heights(vector<int>&heights){
    int number=0;
    cout<<"ingrese el número de estudiantes en la fila"<<endl;
    cin>>number;
    heights.resize(number);
    cout <<"rellene la matriz"<<endl;
    for (int i = 0; i < number; ++i) {
        cin >> heights[i];
    }
}
int heightChecker(vector<int>& heights){
    vector<int> expected = heights;
    for(int i=0; i<heights.size()-1;++i){//estoy ordenando el vector de manera ascendente 
        for (int p = 0; p < heights.size() - 1-i; ++p) {
             if (expected[p] > expected[p + 1]) {
                int save = expected[p];
                expected[p] = expected[p + 1];
                expected[p + 1] = save;
            }
        }
    }
    int verificando= 0;
    for (int i = 0; i < heights.size(); ++i) {
        if (heights[i] != expected[i]) {
            ++verificando;
        }
    }

    return verificando;
}
