#include <iostream>
using namespace std;
int main(){
    int n;
    int mat[n][2];
    int vector[n];
    do{
        cin >> n;
    }while (n<2);
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
          vector[i] = mat[i][j] + mat[i][j];
        }
    }
    for (int i=0; i<n; i++){
            cout << vector[i] << ", ";
        }
    if(n=2){
        if (vector[0]>0 && vector[1]>0){
            cout << "pertenece al cuadrante 1 ";
            }else{
                if (vector[0]<0 && vector[1]>0){
                cout << "pertenece al cuadrante 2 ";
            }else{
                if (vector[0]<0 && vector[1]<0){
                    cout << "pertenece al cuadrante 3 ";  
            }else{
                if (vector[0]>0 && vector[1]<0){
                    cout << "pertenece al cuadrante 4 ";
                }
            }
        }
    }
}
    return 0;
}
