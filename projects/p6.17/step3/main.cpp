#include <iostream>
#include <cmath>
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

bool occurs_in(int v,const std::vector<int>& vec)
{
    for(int i=0;i<vec.size();i++)
        if(vec[i] == v)
            return true;
    return false;
}

std::vector<int> get_list(int n)
{
    std::vector<int> v;
    for(int i=0;i<n*n;i++)
        v.push_back(i+1);
    return v;
}

bool is_magic(const std::vector<int>& v)
{
    if(!is_square(v.size()))
        return false;
    int n = std::sqrt(v.size());
    std::vector<int> list = get_list(n);
    print_vector(list);
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
   return 0;
}

