#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
double total;

//Función recursiva de sumatoria
double cTerminoSumatoria(int N,double a ,double b, double total){
    double potencia, numerador, denominador, res;
    if(N==0){
        total += 0;
    }else{
        potencia = N * b;
        numerador = pow(a, potencia);
        denominador = pow(2, N);
        res = numerador/denominador;
        total += cTerminoSumatoria(N-1,a ,b, res);
    }
    return total;
}

int main() {
    int N;
    double a,b;
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    do{
        cout<<"Ingrese el valor de a: "<<endl;
        cin>>a;
    }while (a<1 || a>15);
    do{
        cout<<"Ingrese el valor de b: "<<endl;
        cin>>b;
    }while (b<1 || b>15);
    cout<<"Resultado: "<<cTerminoSumatoria(N,a ,b, total)<<endl;
    return 0;
}