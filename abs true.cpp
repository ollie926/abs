#include <iostream>
#include <limits>

using namespace std;

bool saisirEntier(int &n, int min, int max)
{
    while(!(std::cin >> n) || (n < min || n > max) )
    {
        if(cin.eof())
        {
            return false;
        }
        else if(cin.fail())
        {
            cout << "erreur de saisie ! Recommencez" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "entrer un entier ? ";
        }
        else
        {
            cout << "Entrée incorrecte ! Recommencez" << endl;
        }
    }
    return true;
}

int main()

{
int i;

for ( i=0; i<=10;i++) {



int (x);

        cout << "entrer un entier ? ";
    if(saisirEntier(x, -200000000,200000000 ))

    abs(x);
        cout<<"La valeur absolue de " <<x<<" vaut "<<abs(x)<<endl;
        cin.clear();}

return 0;}


 
