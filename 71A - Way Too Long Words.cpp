#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<string>words(n);
    for(int i=0; i<n; i++)
        cin>>words[i];
 
    for(string word : words) {
        int size = word.size();
        if(size <= 10)
            cout<<word<<endl;
        else
            cout<<word[0]<<size-2<<word[size-1]<<endl;
    }
    return 0;
    
}
