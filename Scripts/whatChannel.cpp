#include<iostream>
#include<fstream>


using namespace std;

int main()
{
ifstream fin;

fin.open("dump-01.csv");
char ch;

while (fin)
{
fin >> ch;
cout << ch;
if (ch == ':')
{
fin.close();
return 0;
}
}


fin.close();
return 0;
}
