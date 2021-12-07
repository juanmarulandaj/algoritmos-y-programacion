/****************************
Objetivo: 25 primeros numeros primos menores que 100 y dos primos cuya suma da 100
Autores: Juan Manuel Marulanda Jaramillo
Fecha: 05/12/2021
Compilado en: Dev c++
/****************************/
#include<iostream>

using namespace std;



bool Primo (int n)
{
	bool Condicion;
    int Cont=0;
    if(n != 1 and n != 0)
	{
        for(int i = 1; i <= n ; i++)
		{
            if(n % i == 0)
			{
                Cont+=1;
            }
            if(Cont<=2)
			{
                Condicion = true;
            }
            else 
			{
                Condicion = false;
                return Condicion;
            }
        }
        
	}
    else Condicion = false;
    return Condicion;
}

//---------------
int main()
{
	
    int n, Suma;
    cout<<"Ingrese Hasta Que Numero Desea Buscar: ";
    cin>>n;
    cout<<"\n\t\t***Numeros Primos Menores Que "<<n<<"***"<<endl;

    for(int i = 1 ; i <=n ; i++)
	{
        if(Primo(i))
		{
			cout<<i<<", ";
		}
    }

    cout<<endl<<"\n\t\t***Dos Numeros Primos Cuya Suma Da "<<n<<"***"<<endl;
    
        for(int i = 1 ; i <=n ; i++)
	   {
         if(Primo(i))
		 {
		    for(int a= 1; a<=n; a++)
		    {
		    	if(Primo(a))
		    	{
		    		if(i !=a and i+a==n)
		    	   {
		    		cout<<a<<" ";
		    		cout<<i<<" "<<endl;
				   }
				}
		    	
			}
		 }
       }

    return 0;
}
//--------

