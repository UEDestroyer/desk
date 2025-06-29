#include <iostream>
#include <string>
using namespace std;

string operator+(int b,string a){
    return to_string(b)+a;
}
string operator+(string a,int b){
    return a+to_string(b);
}
string operator*(string a,int N){
    string result = "";
    for (int i = 0;i<N;i++){
        result+=a;
    }
    return result;
}

namespace funcs
{
    inline void void_s(bool cou=false){
        if (cou){
            cout<<"-"s*100<<endl<<"-"s*100<<endl;
        }
        return ;
    };

} 
