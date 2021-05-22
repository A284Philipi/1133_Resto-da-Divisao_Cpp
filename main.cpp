#include <iostream>

using namespace std;

int main()
{
    int primeiro, segundo, cont, i = 0;
    cin >> primeiro;
    cin >> segundo;
    if (segundo < primeiro){
        cont = primeiro;
        primeiro = segundo;
        segundo = cont;
    }
    for (i = primeiro + 1; i < segundo; i++){
        if (i % 5 == 2 || i % 5 == 3){
            cout << i <<endl;
        }
    }
    return 0;
}
