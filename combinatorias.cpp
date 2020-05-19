#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main ()
{
    system ("color 0b");
    int d,p,e,r,i,y,t,u,a,b,c,cant,f,l,k,n;
    long long fact=1,facte=1,factu=1,facti=1,facto=1,resultado;
    cout<< "Ingrese 1 para variacion, 2 para permutacion y 3 para combinacion: " ;
    cin>> d;
    cout<< "Se repite? (1 SI, 2 NO): " ;
    cin>> r;
        switch (d)
        {
        case 1: //variacion
            switch (r)
            {
            case 1:
                cout<< "Ingrese poblacion: ";
                cin>> p;
                cout<< "Ingrese cantidad de elementos utilizados: ";
                cin>> e;
                resultado=pow(p,e);
                break;
            case 2:
                cout<< "Ingrese poblacion: ";
                cin>> p;
                cout<< "Ingrese cantidad de elementos utilizados: ";
                cin>> e;
                for(i=1; i<=p; i++)
                {
                    fact=fact*i;
                }
                for(y=1; y<=p-e; y++)
                {
                    facte=facte*y;
                }
                resultado=fact/facte;
                break;
            }
            break;
        case 2: //permutacion
            switch (r)
            {
            case 1:
                cout<< "Maximo 4 grupos."<< endl;
                cout<< "Ingrese cantidad de grupos: ";
                cin>> cant;
                if (cant==2)
                {
                    cout<< "Ingrese poblacion: ";
                    cin>> p;
                    cout<<"Ingrese grupo 1: ";
                    cin>> a;
                    cout<< "Ingrese grupo 2: ";
                    cin>> b;
                    for(i=1; i<=p; i++)
                    {
                        fact=fact*i;
                    }
                    for (y=1; y<=a; y++)
                    {
                        facte=facte*y;
                    }
                    for (t=1; t<=b; t++)
                    {
                        factu=factu*t;
                    }
                    resultado=(fact/(facte*factu));
                }
                if (cant==3)
                {
                    cout<< "Ingrese poblacion: ";
                    cin>> p;
                    cout<<"Ingrese grupo 1: ";
                    cin>> a;
                    cout<< "Ingrese grupo 2: ";
                    cin>> b;
                    cout<< "Ingrese grupo 3: ";
                    cin>> c;
                    for(i=1; i<=p; i++)
                    {
                        fact=fact*i;
                    }
                    for (y=1; y<=a; y++)
                    {
                        facte=facte*y;
                    }
                    for (t=1; t<=b; t++)
                    {
                        factu=factu*t;
                    }
                    for (u=1; u<=c; u++)
                    {
                        facti=facti*u;
                    }
                    resultado=(fact/(facte*factu*facti));
                }
                if (cant==4)
                {
                    cout<< "Ingrese poblacion: ";
                    cin>> p;
                    cout<<"Ingrese grupo 1: ";
                    cin>> a;
                    cout<< "Ingrese grupo 2: ";
                    cin>> b;
                    cout<< "Ingrese grupo 3: ";
                    cin>> c;
                    cout<< "Ingrese grupo 4: " ;
                    cin>> f;
                    for(i=1; i<=p; i++)
                    {
                        fact=fact*i;
                    }
                    for (y=1; y<=a; y++)
                    {
                        facte=facte*y;
                    }
                    for (t=1; t<=b; t++)
                    {
                        factu=factu*t;
                    }
                    for (u=1; u<=c; u++)
                    {
                        facti=facti*u;
                    }
                    for (l=1; l<=f; l++)
                    {
                        facto=facto*l;
                    }
                    resultado=(fact/(facte*factu*facti*facto));
                }
                break;
            case 2:
                cout<< "Ingrese poblacion: ";
                cin>> p;
                cout<< "Ingrese cantidad de elementos utilizados: ";
                cin>> e;
                for(y=1; y<=e; y++)
                {
                    facte=facte*y;
                }
                resultado=facte;
                break;
            }
            break;
        case 3: //combinatoria
            switch (r)
            {
            case 1:
                cout<< "Ingrese poblacion: ";
                cin>> p;
                cout<< "Ingrese cantidad de elementos utilizados: ";
                cin>> e;
                for(i=1; i<=p; i++)
                {
                    fact=fact*i;
                }
                for(y=1; y<=e; y++)
                {
                    facte=facte*y;
                }
                for(t=1; t<=p-e; t++)
                {
                    factu=factu*t;
                }

                resultado=(fact/(factu*facte));
                break;
            case 2:
                cout<< "Ingrese poblacion: ";
                cin>> p;
                cout<< "Ingrese cantidad de elementos utilizados: ";
                cin>> e;
                for(i=1; i<=p+e-1; i++)
                {
                    fact=fact*i;
                }
                for(y=1; y<=e; y++)
                {
                    facte=facte*y;
                }
                for(t=1; t<=p-1; t++)
                {
                    factu=factu*t;
                }

                resultado=(fact/(facte*factu));
                break;
            }
            break;
        }
        cout<< "El resultado es:" << resultado<< endl << endl;

}
