#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        string b = "";
        for(int i = a.size() - 1; i >= 0; --i){
            char ch = a[i];
            if(ch == 'p'){
                b += 'q';
            }
            else if(ch == 'q'){
                b += 'p';
            }
            else{
                b += 'w';
            }
        }
        cout<<b<<endl;
    }

    return 0;
}
