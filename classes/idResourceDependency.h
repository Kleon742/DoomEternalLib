struct idResourceDependency
{
    // -1 for files, resource type string for resources
    idResourcePtrOffset < char > type; // Offset: 0x0

    // filename or resource name
    idResourcePtrOffset < char > name; // Offset: 0x8

    // Which type of dependency
    unsigned int depType; // Offset: 0x10

    // Sub-Type of dependency type (if any), feel free to convert to "type-specific field" if needed
    unsigned int depSubType; // Offset: 0x14

    // compound hash for entire resource inheritance chain or file timestamp
    unsigned long long hashOrTimestamp; // Offset: 0x18

}; // Size: 0x20
