#include <iostream>

using namespace std;

int main(){
int w;
int i,j;
cin >> w;
if((w%2)==0){
    i=w/2;
    j=w/2;
    while(1){
            if(i==0){
                cout << "NO" << endl;
                return 0;
            } 

            if((i%2)==0 && (j%2)==0){
                cout << "YES" << endl;
                return 0;
            } 

            i--;
            j++;
    }    
}else{
    cout << "NO" << endl;
    return 0;
}
return 0;
}
