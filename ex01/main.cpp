#include "Serializer.hpp"

int main()
{
    Data ptr;
    ptr.n = 3;
    ptr.s1 = "hi";
    ptr.s2 = "hello";

    std::cout << "Address before serialization : " << &ptr << std::endl;

	uintptr_t res = Serializer::serialize(&ptr);
	
    std::cout << "Serialized uint value : " << res << std::endl;

    Data *res_ptr = Serializer::deserialize(res);

    std::cout << "Address after deserialization : " << res_ptr << std::endl;
    std::cout << "Address after deserialization : " << &ptr << std::endl;
    
    std::cout << res_ptr->s1 << std::endl;
    std::cout << ptr.s1 << std::endl;
    std::cout << res_ptr->s2 << std::endl;
    
    return 0;
}