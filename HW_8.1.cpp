#include <iostream>


int a;

void counting_function() {
    a +=1;
    std::cout << "Number of function calls: " << a << std::endl;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}