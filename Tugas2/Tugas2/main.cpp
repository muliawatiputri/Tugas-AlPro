/*Nama : Yessica putri muliawati
  Nim  : A11.2022.14288
  kelompok : A11.4207
*/


#include <iostream>

using namespace std;
int main()
{

}
bool maxN(int a, int b){
    if (a>b){
        return true;
    }else{
    return false;
    }
}
///////////////////////////////////////////////
bool minN(int a, int b){
    if (a<b){
        return true;
    }else{
    return false;
    }
}
///////////////////////////////////////////////
int maxAray(int K[], int n){
    int temp= K[0];
    for (int i=0; i<n; i++){
        if (K[i] > temp){
            temp = K[i];
        }
    }
    return temp;
}
///////////////////////////////////////////////
int minAray(int K[], int n){
    int temp= K[0];
    for (int i=0; i<n; i++){
        if (K[i] < temp){
            temp = K[i];
        }
    }
    return temp;
}
///////////////////////////////////////////////
bool isEven (int a){
    if (a%2 == 0){
        return true;
    }else{
        return false;
    }
}
///////////////////////////////////////////////
bool isOdd (int x, int y){
    int sum = x+y;
    if (sum%2 == 0){
        return false;
    }else{
        return true;
    }
}
///////////////////////////////////////////////
bool isFactor(int Q, int x){
    if (x%Q == 0){
        return true;
    }else{
        return false;
    }
}
///////////////////////////////////////////////
bool isFound (int z, int A[]){
    int n;
    for (int i=0; i<n; i++){
        if (A[i] == z){
            return true;
        }
    }
    return false;
}
///////////////////////////////////////////////
void swapN(int x, int y){
    int temp;
    temp=x;
    x=y;
    y= temp;

    cout << "Hasil : x= " << x <<  " & y= " << y << endl;
}
