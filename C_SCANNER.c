#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isDigit(string s)
{
    if(s.size()==0) return false;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i]>='0' && s[i]<='9')==false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string Keywords[10]= {"vartul","choras","shu","chhe","thase","ni trijya","ni lambai"};
    string Operator[12] = {"ni parimiti","nu xetrafal"};
    string Unit[18] = {"meter","meters","centimeter","centimeters","squaremeter","squarecentimeters"};
    string Eos = ".";
    string Qm = "?";
    string Sep = ",";
    string Ws = " ";
    string str;
    gets(str);
    istringstream iss(str);
    string word;

    while(iss >> word)
    {
        for(int j = 0; j<10 ; j++)
        {
            if(word.compare(keywords[j])==0)
            {
                cout<<"<Keyword: "<<keywords[j] << " >\n";
            }
        }
        for(int j = 0; j<12 ; j++)
        {
            if(word.compare(Operator[j])==0)
            {
                cout<<"<Operator: "<<Operator[j] << " >\n";
            }
        }
        for(int j = 0; j<18 ; j++)
        {
            if(word.compare(Unit[j])==0)
            {
                cout<<"<Operator: "<<Unit[j] << " >\n";
            }
        }
        if(isDigit(word))
        {
            cout<<"<Number: "<<word << " >\n";
        }
        if(word == Eos)
        {
            cout<<"<End of Line: "<<Eos<<" >\n";
        }
        if(word == Qm)
        {
            cout<<"<End of Line: "<<Qm<<" >\n";
        }
        if(word == Sep)
        {
            cout<<"<End of Line: "<<Sep<<" >\n";
        }
        if(word == Ws)
        {
            cout<<"<End of Line: "<<Ws<<" >\n";
        }
    }
}
