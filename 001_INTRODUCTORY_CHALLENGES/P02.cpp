#include <iostream>
#include <algorithm>
#include <string>
#include<cstring>

using namespace std;

int main(){
    int quant;
    int size;
    string word;
    char C;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int *arr;

    cin >> quant;
    arr = new int[quant];

    for(int i=0;i<quant;i++){
        cin >> size;
        cin >> word;
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        C = word[0];
        for(int j=1;j<size;j++){
            // cout << word[i] << ">" << C << "?" << endl;
            if(word[j]>C) { C = word[j];};
        }
        for(int j=0;j<26;j++){
            if(alphabet[j]==C){
                arr[i]=j+1;
                break;
            }
        }
        
    }
    for(int j=0;j<quant;j++){
        cout << arr[j] << endl;
    }
    return 0;

}
