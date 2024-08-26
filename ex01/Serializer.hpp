#include <iostream>
#include <string>

struct Data {
	int n;
	std::string s1;
	std::string s2;
} ;

class Serializer
{
    private:
        Serializer();
        
    public:
        ~Serializer();
        Serializer(const Serializer &src);
        Serializer &operator=(const Serializer &src);
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

