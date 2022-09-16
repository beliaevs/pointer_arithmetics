#include<iostream>

int main()
{
    int a[] = {1, 4, 2, 5, 3, 6};
    {
        int* p = &a[1];
        std::cout << "a[1] = " << *p << "\n";
        ++p;
        std::cout << "a[2] = " << *p << "\n";
        *p = 100;
    }
    {
        int* const p = &a[3];
        std::cout << "a[3] = " << *p << "\n";
        // ++p; //  error: increment of read-only variable ‘p’
        // std::cout << "a[4] = " << *p << "\n"; 
        *p = 200;
    }
    {
        void* p = &a[0];
        // std::cout << *p << "\n"; //error: ‘void*’ is not a pointer-to-object type
        ++p; // warning: ISO C++ forbids incrementing a pointer of type ‘void*’ [-Wpointer-arith]
        auto intp = static_cast<int*>(p);
        std::cout << *intp << "\n"; // garbage
    }
    
    return 0;
}