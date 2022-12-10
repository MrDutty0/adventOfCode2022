#include <bits/stdc++.h>

using namespace std;

void takeOut(map< char, int >& m, char c)
{
    m[c]--;
    if(m[c] == 0)
    {
        m.erase(c);
    }
    return;
}

int main()
{
    ifstream file("input");

    int k = 14;
    string line;
    while(getline(file, line))
    {
        map< char, int > m;
        for (int i = 0; i < line.size(); i++)
        {
            char c = line[i];
            m[c]++;
            if(i >= k)
            {   
                takeOut(m, line[i - k]);
            }
            
            if(i >= k - 1)
            {   
                if(m.size() == k)
                {
                    cout << "Where: " << i + 1 << "\n"; 
                    break;
                }
            }
        }
    }
    file.close();
}