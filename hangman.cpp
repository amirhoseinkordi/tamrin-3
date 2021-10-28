#include <iostream>
#include <time.h>

using namespace std;

int main()
{


    string words[3] ={"computer","console","desktop"};
    string word;
    string eeword;
    char l;
    int lc;

    int randome;

    srand(time(NULL));

    randome = rand() %3;

    word=words[randome];
    eeword=words[randome];



    for(int i=0;i < word.size() ;i++)
    {
       eeword[i]='-';
    }
    cout << "Its: " << eeword;
    while(eeword!=word){

    cout << "\n" << "enter letter:";
    cin >> l;
    lc = l ;



    if(lc<97){
        lc = lc +32;
        l = lc;

    }

    for(int i=0;i < word.size() ;i++)
    {
       if(l==word[i]){
        eeword[i]=l;

       }
    }
      cout << eeword ;
    }

    cout << "\n\n\n" << "you win!" << "\n\n\n";


    return 0;
}
