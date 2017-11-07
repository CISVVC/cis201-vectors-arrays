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
#include<vector>
#include<cmath>

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
    //std::cout << "Enter the data (Ctrl+D to end):";
    double x=0.0;
    while( std::cin >> x )
        vec.push_back(x);

} 

void print_vec(std::vector<double>& vec)
{
    for(int i=0;i<vec.size();i++)
        std::cout << vec[i] << " ";
}
/**
 * calculate the sum of the variances from the mean squared
 * 
 * @param vec vector of double data
 * @param mean the mean of the sample data
 * @return the sum of the variances squared
 */
double sum_variance(std::vector<double> vec,double mean)
{
    double sum=0.0;
    for(int i=0;i<vec.size();i++)
        sum += pow((vec[i] - mean),2);
    return sum;
}

double average(std::vector<double> v)
{
    double sum=0.0;
    for(int i=0;i<v.size();i++)
        sum += v[i];

    return sum / v.size();
}

double stddev(std::vector<double> v)
{
    double avg = average(v);    
    return sqrt(sum_variance(v,avg)/(v.size()-1));
}

int main()
{
    std::vector<double> v;
    read_data(v);
    std::cout << stddev(v) << std::endl;
    return 0;
}














