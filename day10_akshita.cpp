#include <iostream>
using namespace std;
  
int main(){
    int row, col, i, j;
    int mat1[50][50], mat2[50][50], sum[50][50];
     
    cout <<"Enter Rows and Columns of Matrix\n";
    cin >> row >> col;
      
    cout <<"Enter first Matrix whose size is "<<row<<" X "<<col;
   
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cin >> mat1[i][j];
        }
    }

    cout <<"\nEnter second Matrix whose size is "<<row<<" X "<<col;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cin >> mat2[i][j];
        }
    }
   
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
      
    cout <<"Sum of the matrices are\n";
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << sum[i][j] << " ";
        }
        cout <<endl;
    }
 
    return 0;
}