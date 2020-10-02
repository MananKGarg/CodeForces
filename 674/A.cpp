#include<iostream>
 
int main()
{   
    int t{};
    std::cin >> t;
    for (int i{}; i < t; ++i)
    {
        int n{};
        int x = {};
 
        std::cin >> n >> x ;
 
        int floor{};
 
        if ((n == 1) || (n == 2))
        {
            floor = 1;
        }
        else
        {
            floor = 2 + (n - 3) / x ;
        }
 
        std::cout << floor << "\n";
    }
    return 0;
}
