#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int agrc, char *argv[])
{
    string num, chave, cifra;

	num += argv[1];
	chave += argv[2];

    reverse(num.begin(),num.end());
    reverse(chave.begin(),chave.end());

    for(int i=0, j=0; i < num.length(); i++, j++)
        cifra.push_back(48 + (  (num[i]-48)  +   (chave[j%chave.length()]-48)   )%10);
        

    reverse(cifra.begin(),cifra.end());
    
    cout << cifra << endl;

    return 0;
}
