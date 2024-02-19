struct idStrRefCounted : idStr
{
    std::atomic < int > refCount; // Offset: 0x30

}; // Size: 0x38
