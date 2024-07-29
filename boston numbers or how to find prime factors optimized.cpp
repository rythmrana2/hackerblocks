#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum_n = 0, sum = 0;
    int temp = n;
    while(temp)
    {
        int digit = temp % 10;
        sum_n += digit;
        temp /= 10;
    }
    while(n % 2 == 0)
    {
        sum += 2;
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
        {
            int temp_sum = 0;
            int temp_i = i;
            while(temp_i)
            {
                int digit = temp_i % 10;
                temp_sum += digit;
                temp_i /= 10;
            }
            while(n % i == 0)
            {
                sum += temp_sum;
                n /= i;
            }
        }
    }
    if(n>2){
        while(n)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
    }
    if(sum_n == sum)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
