#include<iostream>
#include<cstdlib>
#include<ctime>

const int SIZE = 10;

void fill_array(int array[],int size)
{
    for(int i=0;i<size;i++)
        array[i] = rand() % 10 + 1;
}

void print_array(const int array[],int size)
{
    for(int i=0;i<size;i++)
        std::cout << array[i] << std::endl;
}

/**
 * search for an integer element in the array and return its index
 * @param array the array of integers
 * @param size the size of the array
 * @param value the value that is being searched
 * @return index -- the index of the found item or -1 if not found
 */
int search(int array[],int size,int value)
{
    for(int i=0;i<size;i++)
    {
        if( value == array[i])
            return i;
    }
    return -1;
}

int main()
{
    srand(time(0));
    int array[SIZE];

    fill_array(array,SIZE);
    print_array(array,SIZE);
    std::cout << "------------" << std::endl;
    std::cout << search(array,SIZE,5) << std::endl;

    return 0;
}












