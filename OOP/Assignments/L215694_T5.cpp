#include<iostream>
using namespace std;
class Matrix{
private:
    float matrix[3][3];
public:
    Matrix(){
    float** matrix = new float* [3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix[i] = new float [3];
        }
    }
}
    void operator + (const Matrix &mat){
        float sum[3][3];
         for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
            sum[i][j] = matrix[i][j] + mat.matrix[i][j];
          }
         }
         cout<<"Addition Of Two Matrices"<<endl;
         for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
                cout<<sum[i][j]<<" ";
          }
          cout<<endl;
         }
    }
       void operator - (const Matrix &mat){
            float sum[3][3];
         for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
            sum[i][j] = matrix[i][j] - mat.matrix[i][j];
          }
         }
         cout<<"Subtraction Of Two Matrices"<<endl;
         for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
                cout<<sum[i][j]<<" ";
          }
          cout<<endl;
         }
    }
    void input(){
        cout<<"Enter Matrix Elements"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    }
        void display(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }
    }
};
int main(){
    Matrix m1,m2;
    m1.input();
    m2.input();
    cout<<"First Matrix"<<endl;
    m1.display();
    cout<<"Second Matrix"<<endl;
    m2.display();
    m1+m2;
    m1-m2;
return 0;
}
