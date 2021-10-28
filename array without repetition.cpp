#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int n;
    int temp;




    cout << "array size:";
    cin >> n ;

    int adad[n];


for(int j=0;j<n;j++){
    srand(time(NULL));
   temp = rand() %n;
    for(int i=0;i<n;i++){
        if(adad[i] == temp){
            temp = rand() %n;
            i=0;
        }
   }
    adad[j]=temp;
}

for(int i=0;i<n;i++){
    cout << adad[i];}


    return 0;
}
