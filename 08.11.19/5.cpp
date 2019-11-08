#include <iostream>
using namespace std;
int a=1;
// ввод функции
int put_snake(int s, int b, int **sn){

        for(int j=0; j<s; j++){
            if (j%2==0){
                for (int i=b-1; i>=0; i--){
                    sn[j][i]=a;
                    a++;
                }}
             else  {
                for (int i=0; i<b; i++){
                    sn[j][i]=a;
                    a++;
                }
             }
        }

    for(int i=0; i<s; i++){
        for(int j=0; j<m; j++){

               cout<< sn[i][j]<<'\t';

        }
        cout<<endl;
    }
}

int main(){

    int n, m;
    cin>>n>>m;
    int **snake = new int* [n];

    for (int i = 0 ; i < n ; i++){
        snake[i] = new int[m];
    }
	//вызов функции
    put_snake(n, m , snake);
	return 0;
}
