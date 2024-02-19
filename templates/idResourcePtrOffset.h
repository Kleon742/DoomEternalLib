// idResourcePtrOffset < char >
template <typename data_>
struct idResourcePtrOffset
{
    unsigned long long offset; // Offset: 0x0

    // This is const char for easier debugging purposes (you get the actual string in the watch window)
    data_* ptr; // Offset: 0x0

}; // Size: 0x8
