#include <iostream>
#include <string>
#include <vector>

bool is_square(int x)
{
    for(int i=1;i<x/2;i++)
        if( i*i == x)
            return true;
    return false;
}

void read(std::vector<int>& sq)
{
    int v;
    while(std::cin >> v)
        sq.push_back(v);
}

void print_vector(const std::vector<int>& v)
{
    for(int i=0;i<v.size();i++)
        std::cout << v[i] <<  " ";
}

bool is_magic(const std::vector<int>& v)
{
    if(!is_square(v.size()))
        return false;
    return true;
}

int main()
{
   std::cout << "Enter the space delimited values:";
   std::vector<int> v;
   read(v);
   if(is_magic(v)) 
      std::cout << "it is a magic square" << std::endl;
   else
      std::cout << "it is not a magic square" << std::endl;
   print_vector(v);
   return 0;
}

