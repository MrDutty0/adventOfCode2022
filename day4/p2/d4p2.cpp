#include <bits/stdc++.h>


using namespace std;

bool check(int f1, int f2, int s1, int s2 )
{
  if(f1 <= s1 && f2 >= s2)return true;
  return false;
}

int main()
{
  // ifstream myFile("input");
  // string a,b,c,d;
  
  // int score = 0;

  vector<int> v = {0,1,2,3,4};
  v.pop_back();
  for(int i : v)
    cout << i;
  
  // while(myFile.peek() != EOF)
  // {
  //   getline(myFile, a, '-');
  //   getline(myFile, b, ',');
  //   getline(myFile, c, '-');
  //   getline(myFile, d);

  //   int f1 = stoi(a), f2 = stoi(b), s1 = stoi(c), s2 = stoi(d);
  //   vector<int>vec(max(f2,s2));
  //   for(int i = f1; i <= f2; i++)
  //   {
  //     vec[i - 1]++;
  //   }
  //   for(int i = s1; i <= s2; i++)
  //   {
  //     vec[i - 1]++;
  //   }
  //   for(int n : vec)
  //   {
  //     if(n == 2)
  //     {
  //       score++;
  //       break;
  //     }
  //   }
  // }
  
  // cout << score << endl;
  // myFile.close();
  
}