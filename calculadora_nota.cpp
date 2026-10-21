#include<iostream>
using namespace std;


float calcular_nota(float, float, int, int, int);

int main(){
    const float NOTA_MAX = 10.0;
    const float CANT_PREGUNTAS = 22.0;
    int cant_bien, cant_mal, cant_sr;
    float valor_pregunta_bien = NOTA_MAX/CANT_PREGUNTAS;
    float valor_pregunta_mal = (-1.0/4.0) * valor_pregunta_bien;
    cout << "Cantidad de preguntas: " << CANT_PREGUNTAS << "\nNota máxima: " 
    << NOTA_MAX << "\nValor bien: " << valor_pregunta_bien << "\nValor mal: " << valor_pregunta_mal <<endl;
    cout << "Ingrese la cantidad de preguntas que respondió correctamente: "<<endl;
    cin >> cant_bien;

    cout << "Ingrese la cantidad de preguntas que respondió de manera errónea: "<<endl;
    cin >> cant_mal;

    cout << "Ingrese la cantidad de preguntas que no respondió: "<<endl;
    cin >> cant_sr;

    cout << "Nota final: " << calcular_nota(valor_pregunta_bien, valor_pregunta_mal, cant_bien, cant_mal, cant_sr);



    return 0;
}

float calcular_nota(float valor_bien, float valor_mal, int cant_bien, int cant_mal, int cant_sr){
    float nota_bien = valor_bien*cant_bien;
    cout<<"Puntaje que consiguió por contestar bien: "<<nota_bien <<endl;
    float nota_mal = valor_mal*cant_mal;
    cout<<"Puntaje que consiguió por contestar erróneamente: "<<nota_mal<<endl;
    float nota_potencial = cant_sr*valor_bien;
    cout<<"Puntaje que podría haber obtenido si contestaba correctamente las preguntas que dejó incompletas: "<<nota_potencial<<endl;
    return nota_bien+nota_mal;
}