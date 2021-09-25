#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cali;

    cout << "Introduce una calificacion" << endl;

    cin >> cali;

    if (cali == 10)
    {
        cout<< "Excelente" << endl;
    }
    else if (cali == 9)
    {
        cout << "Muy Bien" << endl;
    }
    else if (cali == 8)
    {
        cout << "Bien" << endl;
    }
    else if (cali == 7)
    {
        cout << "Regular" << endl;
    }
    else{
        cout << "No acreditado"<< endl;
    }
    
    
    
    

    return 0;
}
