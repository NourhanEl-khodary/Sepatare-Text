#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    vector <string> big;

    cout<<"enter a sentence.";
    string mystr;
    getline(cin, mystr, '\n');
    mystr+=',';
    string a="";
    int found,i=0;
auto it = mystr.begin();
for(;it!=mystr.end();it++){
    if (*it!=',' ){
        a+=*it;
    }
    else {
        big.push_back(a);
        a="";
    }
}
for (int i=0; i<big.size();i++){
    cout<<big[i]<<"\n";

}
cout<<endl;
}



