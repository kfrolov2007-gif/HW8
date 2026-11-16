#include <iostream>



void counting_function() {
    static int a = 0;
    a += 1;
    std::cout << "Number of function calls: " << a << std::endl;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}