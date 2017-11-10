#include<iostream>
#include<cstdlib>
#include<ctime>

const int SIZE = 10;

void copy_string(char dest[],const char src[])
{
    int index=0;
    while(src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
}

int main()
{
    char str[SIZE];
    char str2[SIZE];

    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    
    str2[0] = '1';
    str2[1] = '2';
    str2[2] = '3';
    str2[3] = '4';
    str2[4] = '5';
    str2[5] = '6';
    str2[6] = '7';
    str2[7] = '8';
    str2[8] = '9';
    str2[9] = '0';
    
    copy_string(str2,str);

    std::cout << str2 << std::endl;

    return 0;
}












