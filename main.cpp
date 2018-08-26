#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <exception>

using namespace std;

vector<string> strSplit(string cnstr);
string trans(vector<string> st);
vector<string> combine(vector<string> st);
int s2n(string str);
string char2str(string str);

int main()
{
    string cnStr;
    cin >> cnStr;

    vector<string> result;
    vector<string> st;

    result = strSplit(cnStr);
    st = combine(result);
    cout << trans(st) << endl;
    return 0;
}

int s2n(string str) {
    if (str == "һ") {
        return 1;
    } else if (str == "��") {
        return 2;
    } else if (str == "��") {
        return 3;
    } else if (str == "��") {
        return 4;
    } else if (str == "��") {
        return 5;
    } else if (str == "��") {
        return 6;
    } else if (str == "��") {
        return 7;
    } else if (str == "��") {
        return 8;
    } else if (str == "��") {
        return 9;
    } else if (str == "��") {
        return 0;
    }else if (str == "ʮ") {
        return 10;
    } else if (str == "��") {
        return 100;
    } else if (str == "ǧ") {
        return 1000;
    } else if (str == "��") {
        return 10000;
    }
}

string char2str(string str) {
    string flag(str, 0, 2);
    int k = 1;
    if (flag == "��")
        k = -1;
    string re = "";
    if (str.find("��") == string::npos) {
        int result = 0;
        for (int i=0; i < str.length() - 2; i+=2) {
            string s(str, i, 2);
            int t2 = 1;
            try {
                string s2(str, i+2, 2);
                t2 = s2n(s2);
            } catch(exception &e) {
                t2 = 1;
            }
            int t = s2n(s);
            if (t < 10) {
                result += t * t2;
            }
        }
        re = to_string(result);
    }
    return re;
}

vector<string> combine(vector<string> st) {
    vector<string> result;
    string str = "";
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == "+" || st[i] == "-" || st[i] == "*" || st[i] == "/") {
            result.push_back(str);
            str = "";
            result.push_back(st[i]);
            continue;
        }
        str += st[i];
    }
    result.push_back(str);
    return result;
}

string trans(vector<string> st) {
    string result = "";
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == "+" || st[i] == "-" || st[i] == "*" || st[i] == "/") {
            result += st[i];
        } else {
            result += char2str(st[i]);
        }
    }
    return result;
}

vector<string> strSplit(string cnStr) {
    vector<string> result;
    for(int i=0; i < cnStr.length(); i+=2) {
        string n(cnStr, i, 2);
        if (n == "��") {
            result.push_back("+");
        } else if (n == "��") {
            result.push_back("-");
        } else if (n == "��") {
            result.push_back("*");
        } else if (n == "��") {
            result.push_back("/");
        } else {
            result.push_back(n);
        }
    }
    return result;
}




