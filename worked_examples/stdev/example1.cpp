#include<iostream>
#include<string>
#include<vector>

void print_vector(const std::vector<double>& vec)
{
    for(int i=0;i<vec.size();i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

void print_vector(const std::vector<std::string>& vec)
{
    for(int i=0;i<vec.size();i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}
double average(const std::vector<double> &vec)
{
    double sum = 0.0;
    for(int i=0;i<vec.size();i++)
        sum += vec[i];
    return sum / vec.size();
}
int main()
{
    std::vector<double> v = {10.2,10.4,10.6};
    //print_vector(v);
    //print_vector({10.2,10.4,10.6});
    std::vector<std::string> sv;
    std::cout << "average is:" << average(v);
    std::cout << std::endl;

    return 0;
}











