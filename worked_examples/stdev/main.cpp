/**
 * This program will implement a sample standard deviation function
 * that will utilize a vector of double values
 *
 * 1.  Read in the values for sample data
 * 2.  calculate the mean
 * 3.  calculate the variation from the mean and sum the value of the variation squared
 * 4.  calculate the square root of the sum of the squared variations divided by the number of values - 1
 */
#include<iostream>
#include<cmath>
#include<vector>

void read_data(std::vector<double>& vec)
{   
    /*
    vec.push_back(727.7);
    vec.push_back(1086.5);
    vec.push_back(1091.0);
    vec.push_back(1361.3);
    vec.push_back(1490.5);
    vec.push_back(1956.1);
    */
    double value;
    while( std::cin >> value )
        vec.push_back(value);
}

void print_vector(const std::vector<double>& vec)
{
    for(int i=0;i<vec.size();i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

double average(const std::vector<double>& vec)
{
    double sum = 0.0;
    for(int i=0;i < vec.size();i++)
        sum += vec[i];
    return sum / vec.size();
}

double sum_of_variation(const std::vector<double>& vec)
{
    double sum = 0.0;
    double mean = average(vec);
    for(int i=0;i < vec.size();i++)
        sum += pow(vec[i]-mean,2);
    return sum;
}
double stddev(const std::vector<double>& vec)
{
    return sqrt( sum_of_variation(vec) / (vec.size()-1) );
}
int main()

{
    std::vector<double> v;
    read_data(v);
    print_vector(v);
    std::cout << stddev(v) << std::endl;
    return 0;
}












