#include<iostream>
#include<string>
using namespace std;
void ejercicio_2(string&,char&);
int main()
{
    char letra;
    string palabra_;
    cout << "Introduce una palabra: " << '\n';
    cin >> palabra_;
    cout << "Introduce una letra usada en la palabra anterior: " << '\n';
    cin >> letra;
    ejercicio_2(palabra_,letra);
    return 0;
}

void ejercicio_2(string&palabra_,char&letra)
{
    int a=0,b=0;
    for (auto z : palabra_)
    {
        b++;
        if (letra!=z)
        {
            cout << z;
            a++;
        }
    }
    cout << '\n';
    cout << "a la palabra " << palabra_ << " se le removieron " << b-a << " letras " << letra <<'\n';
}