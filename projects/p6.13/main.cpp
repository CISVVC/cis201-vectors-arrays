#include <iostream>
#include <string>
#include <vector>


class Transaction
{
public:
   Transaction();
   void read();
   int get_day();
   double get_amount();
   void print();
private:
   int day;
   double amount;
   std::string description;
};

const int MAX_DAY = 30;

class Statement
{
public:
   Statement();
   void read();
   void compute_balances();
   void print();
   double get_average_daily_balance();
   double get_minimum_daily_balance();
private:
   std::vector<Transaction> transactions;
   std::vector<double> daily_balances;
};

int main()
{
   Statement stat;
   stat.read();
   stat.print();

   return 0;
}

