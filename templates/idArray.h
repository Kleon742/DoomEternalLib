// idArray < unsigned char , 16 >
template <typename _type_, auto _N0_>
struct idArray
{
    // Ideally this would be private, but making it public allows aggregate-initialization (the "= { }" syntax). You should still only access the array through the public member functions! private: data ptr
    _type_ ptr[_N0_]; // Offset: 0x0

}; // Size: 0x10
