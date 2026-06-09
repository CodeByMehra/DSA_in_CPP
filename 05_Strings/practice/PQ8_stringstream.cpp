// return most occuring word in string

#include<iostream>
#include <vector>
#include <sstream>
#include<algorithm>
using namespace std;
int main(){
    string str=" hey my name is vishal and i like coffee and tea.";

    stringstream ss(str);

    vector <string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    cout<<"Most occured character is :"<<v[0];

}

