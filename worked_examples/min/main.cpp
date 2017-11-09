#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

int min(std::vector<int> v)
{
    int minimum = v[0];
    for(int i=0;i<v.size();i++)
        if(v[i] < minimum)
            minimum = v[i];
    
    return minimum;
}

void fill_vector(std::vector<int>& v,int size)
{
    for(int i=0;i<size;i++)
        v.push_back(rand() % 10 + 1);
}


void print_vector(const std::vector<int>& v)
{
    for(int i=0;i<v.size();i++)
        std::cout << v[i] << std::endl;
}

int main()
{
    srand(time(0));
    std::vector<int> vec;

    fill_vector(vec,50);
    print_vector(vec);
    std::cout << min(vec) << std::endl;

    return 0;
}
