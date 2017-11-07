#include<iostream>
#include<vector>


void print_vec(std::vector<double>& vec)
{
    for(int i=0;i<vec.size();i++)
        std::cout << vec[i] << " ";
}

double average(std::vector<double> v)
{
    double sum=0.0;
    for(int i=0;i<v.size();i++)
        sum += v[i];

    return sum / v.size();
}

int main()
{
    std::vector<double> v;// = {10.2,10.4,10.6};
    v.push_back(10.2);
    v.push_back(10.4);
    v.push_back(10.6);
    std::cout << "average is:" << average(v)

    return 0;
}











