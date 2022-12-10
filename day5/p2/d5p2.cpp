#include <bits/stdc++.h>

using namespace std;


struct Moves
{
  int amount, from, to;
};

void readInput(ifstream &file, vector<string>& row, vector<Moves>& moves)
{
  string line;
  bool readrow = true;
  while(file.peek() != EOF)
  { 
    if(file.peek() == '\n')
    {
      readrow = false;
    }
    if(readrow)
    {
      getline(file, line);
      row.push_back(line);
    }
    else
    {
      string str;
      int a,b,c;
      file >> str >> a >> str >> b >> str >> c;
      
      moves.push_back(Moves {a,b,c});
    }
  }
  file.close();
}

void makeBoxes(vector<string> row, vector< vector<char> > &boxes)
{
  for(int i = 1; i < row[0].size(); i += 4)
  {
    int whereToPut =(int) row[row.size() - 1][i] - 48;
    for(int j = row.size() - 2; j >= 0; j--)
    {
      if(row[j][i] != ' ')
      {
        
        boxes[whereToPut - 1].push_back(row[j][i]);     
      }
    }
  }
}

void makeMoves(Moves move, vector< vector<char> > &boxes)
{
  int j = 0;

  for (int i = boxes[move.from - 1].size() - move.amount ; i < boxes[move.from - 1].size(); i++)
  {
    boxes[move.to - 1].push_back(boxes[move.from - 1][i]);
    j++;
  }
  for (; j > 0; j--)
  { 
    boxes[move.from - 1].pop_back();
  }
}


int main()
{
  ifstream file("input");

  vector<string> row;
  vector<Moves> moves;
  readInput(file, row, moves);

  vector< vector<char> > boxes(row[0].size()/ 4 + 1);
  makeBoxes(row, boxes);

  for (int i = 0; i < moves.size(); i++)
  {
    makeMoves(moves[i], boxes);
  }
  
  for (int i = 0; i < boxes.size(); i++)
  {
    cout << boxes[i].back() << "";
  }
  cout << "\n";
}