#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "array size:";
    cin >> n;
    int d;
    int a[n];


    for(int i=0;i<n;i++){
        cout << "enter number " << i+1 << ":";
        cin >> d;
        a[i]=d;
    }

    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            cout << "not low to high. number" << i+1 << " (" << a[i] << ")" << " is bigger than number " << i+2 << " (" << a[i+1] << ")" << "\n";
        }
    }


    for(int i=0;i<n;i++){
    cout << a[i];}

    cout << "\nits low to high.";

    return 0;
}
