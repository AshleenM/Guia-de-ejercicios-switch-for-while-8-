#include<iostream> 
using namespace std;

int main(){
    int num, suma=0, suma2=0, suma3=0, suma4=0;
    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        if(num>0){
            suma+=num;
        }
        else if(num<0){
            suma2+=num;
        }
        else{
            suma3+=num;
        }
        suma4+=num;
    }
    cout<<"La suma de los numeros mayores a cero es: "<<suma<<endl;
    cout<<"La suma de los numeros menores que cero es: "<<suma2<<endl;
    cout<<"La suma de los numeros ya sean positivos, negativos o cero es: "<<suma3<<endl;
    cout<<"La suma de todos los numeros es: "<<suma4<<endl;
    return 0;
}
