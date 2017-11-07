#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>

/**
 * get a random number limited to an upper bound
 * @param upper the upper bound of the random number
 * @return a random number between 0 and upper-1
 */
int get_rand(int upper)
{
    return rand() % upper;
}

/**
   Removes an element from an ordered vector.
   @param values a vector
   @param pos the position of the element to erase
*/
int erase(std::vector<int>& values, int pos)
{ 
   int v = values[pos];
   for (int i = pos; i < values.size() - 1; i++)
      values[i] = values[i + 1];
   values.pop_back();
   return v;
}

/**
 * creates a random permutation of a list of numbers
 * @param size of the list
 * @return the random list of numbers as a vector
 */
std::vector<int> rand_perm(int size)
{
    std::vector<int> perm;
    std::vector<int> list;
    for(int i=0;i<size;i++)
        list.push_back(i+1);
	for(int i=0;i<size;i++)
        perm.push_back(erase(list,get_rand(size-i)));
    return perm;
}

/**
 * print an integer vector
 * @param the vector to print
 */
void print_vec(const std::vector<int>& v)
{
    for(int i=0;i<v.size();i++)
    {
       std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    srand(time(0));
    for(int i=0;i<10;i++)
        print_vec(rand_perm(10));
    return 0;
}
