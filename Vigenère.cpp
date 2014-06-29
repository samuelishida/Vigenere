#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int agrc, char* argv[])
{
    string num, key, cifra;

    num += argv[1];
	key += argv[2];

    reverse(num.begin(),num.end());
    reverse(key.begin(),key.end());

    for(int i=0, j=0; i < num.length(); i++, j++)
        cifra.push_back(48 + (  (num[i]-48)  +   (key[j%key.length()]-48)   )%10);
 

    reverse(cifra.begin(),cifra.end());

    cout << cifra;

    return 0;
}
