#include <iostream>

using namespace std;

// Harjoitus 1
// Kirjoita C++-sovellus, joka kysyy kaksi kokonaislukua (a ja b) ja tulostaa niiden summan ja osamäärän. Osamäärä tulostetaan kahdella desimaalilla.

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int, int);

int main()
{
    int a;
    int b;

    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    int sum = retSum(a,b);
    float div = retDiv(a,b);

    cout << sum << endl;
    // En keksinyt kuinka coutilla voi tulostaa desimaaleja niin käytän samaa tapaa kuin C-kurssilla
    printf("%.2f\n", div);

    return 0;
}

void calcSum(int a, int b)
{
    int sum = a + b;
    cout << "Lukujen summa: " << sum << "\n";
}

void calcDiv(int a, int b)
{
    if(a == 0 || b == 0)
    {
        // Virheilmoitus jakaessa nollalla
        cout << "Yritettiin jakaa nollalla, ei onnistu!" << endl;
        return;
    }
    float div = a / b;
    printf("Lukujen osamaara: %.2f\n", div);
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }
    float div = a / b;
    return div;
}












