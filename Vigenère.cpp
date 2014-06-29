#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int agrc, char *argv[])
{
    string num, chave, cifra;

	num += argv[1];
	chave += argv[2];

    reverse(num.begin(),num.end());//só pq ele faz do contrario
    reverse(chave.begin(),chave.end());

    for(int i=0, j=0; i < num.length(); i++, j++)
        cifra.push_back(48 + (  (num[i]-48)  +   (chave[j%chave.length()]-48)   )%10);
        //os -48 é pq os números são na vdd caracteres, sendp 48 o 0 e 57 o 9

    reverse(cifra.begin(),cifra.end());//pra imprimir na ordem certa

    cout << cifra << endl;

    return 0;
}
