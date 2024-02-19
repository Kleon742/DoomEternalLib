// idProxyPtr < idMainMenu >
template <typename T>
struct idProxyPtr
{
    // Contains a non deleting reference to itself
    idSharedPtr < T > ptr; // Offset: 0x0

}; // Size: 0x8
