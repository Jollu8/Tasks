#include <iostream>
using namespace std;

#define CALL_FUNCTION(func) for (int i = 0; i < 10; ++i) { func(i, cars[i]); }
#define COUNT(func) for(int i = 0; i < 10; i++){func(cars[i]);}

void checkFlow(int i, int count)
{
    if (count > 20)
    {
        cout << "Car overflow: #" << i << '\n';
    }
}

void check_suboptimal(int i, int count)
{
    if (count < 20)
    {
        cout << "Car suboptimal: #" << i << '\n';
    }
}

int total_count = 0;
void count_total(int count)
{
    total_count += count;
}
int main() {
    cout<<"Заполненности вагонов в поезде\n";
    int cars[10];
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> cars[i];
    }
    CALL_FUNCTION(checkFlow);
    CALL_FUNCTION(check_suboptimal);
    COUNT(count_total);

    std::cout << "Total:" << total_count << '\n';

}