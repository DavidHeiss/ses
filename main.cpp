#include <stdio.h>

struct A
{
    char a;
    short b;
    char c;
    int d;
};

template<typename T>
void print_t(T* ptr) {
    printf("%p: size %lu, alignof %lu\r\n", ptr, sizeof(T), alignof(T));
}

void print_a(A* ptr) {
    print_t(ptr);
    print_t(&ptr->a);
    print_t(&ptr->b);
    print_t(&ptr->c);
    print_t(&ptr->d);
    printf("\r\n");
}

int main()
{
    A a{};
    A b{};

    print_a(&a);
    print_a(&b);

    printf("%ld\r\n", ((size_t)&b)-((size_t)&a));
    printf("%ld\r\n", (&b)-(&a));

    return 0;
}