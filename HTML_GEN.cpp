#include <bits/stdc++.h>
using namespace std;
#define DQUOTE (char)34
#define TAB "\t"
int main()
{
    ifstream fi;
    ofstream fo;
    
    fi.open("shuffled.txt");
    fo.open("color.html");
    string s = "";
    while (fi >> s)
    {
        fo << "<div class=" << DQUOTE << "box" << DQUOTE << ">" << endl;
        fo << TAB << "<div class=" << DQUOTE << "boxchild" << DQUOTE << ">" << endl;
        fo << TAB << TAB << "<div class=" << DQUOTE << "color" << DQUOTE << " style=" << DQUOTE << "background-color: " << s << ";" << DQUOTE << ">" << endl;
        fo << TAB << TAB << "</div>" << endl;
        fo << TAB << "</div>" << endl;
        fo << TAB << "<div class=" << DQUOTE << "boxchild" << DQUOTE << ">" << endl;
        fo << TAB << TAB << "<span class=" << DQUOTE << "text" << DQUOTE << ">" << endl;
        fo << TAB << TAB << TAB << s << endl;
        fo << TAB << TAB << "</span>" << endl;
        fo << TAB << "</div>" << endl;
        fo << "</div>" << endl;
    }
    fi.close();
    fo.close();
}