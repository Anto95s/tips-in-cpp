#include<iostream>
#include<vector>
using namespace std;

void display(vector<double> num) //stampa del vettore tramite indice in for
{
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

void display_iterators(vector<double> num) //stampa del vettore tramite iteratore
{
    vector<double>::iterator ite = num.begin();
    while(ite != num.end()) //end() ritorna un iteratore che punta all’elemento successivo all'ultimo
    {
        cout<<*ite<<" ";
        ite++;
    }
    cout<<endl;
}

main()
{
    int in;
    int cont;
    vector <double> numbers;

    while(cont<5)
    {
        cin>>in;
        numbers.push_back(in);
        cont++;
    }
    cont=0;
    cout<<endl;

    display(numbers);
    display_iterators(numbers);
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"Capacity: "<<numbers.capacity()<<endl; //numero di elementi inseribili senza riallocare
    cout<<"First number: "<<numbers[0]<<endl;
    cout<<"Last number: "<<numbers[numbers.size()-1]<<endl;

    cout<<endl;

    numbers.resize(2);
    display(numbers);
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"Capacity: "<<numbers.capacity()<<endl;

    cout<<endl;

    numbers.resize(9, 10);
    display(numbers); //da 2 lo ridimensiono a 7, aggiungendo il valore 10 ai ridimensionati
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"Capacity: "<<numbers.capacity()<<endl;

}
