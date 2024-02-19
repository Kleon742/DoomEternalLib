struct idResourceEntry
{
    // offset into string table list for resource type
    idResourcePtrOffset < char > resourceTypeString; // Offset: 0x0

    // offset into string table list for resource name
    idResourcePtrOffset < char > nameString; // Offset: 0x8

    // offset into string table list for resource description (must be j-son!)
    idResourcePtrOffset < char > descString; // Offset: 0x10

    // dependency list required to (re)generate resource
    idResourcePtrOffset < unsigned int > depIndices; // Offset: 0x18

    // list of strings referenced by resource (not counting dependency data since that is container data)
    idResourcePtrOffset < char * > strings; // Offset: 0x20

    // a list of custom hashes for stale-checking, add new ones to idResourceSpecialHashType
    idResourcePtrOffset < idResourceSpecialHash > specialHashes; // Offset: 0x28

    // metadata generated during resource generation (typically warnings and debug geometry)
    idResourcePtrOffset < unsigned long long > metaEntries; // Offset: 0x30

    // offset into container for resource data
    unsigned long long dataOffset; // Offset: 0x38

    // size of resource data inside container
    unsigned long long dataSize; // Offset: 0x40

    // data for the entry that does not change by moving it between containers/generators etc
    idResourceEntryOptions options; // Offset: 0x48

    // number of string indices in resource
    unsigned short numStrings; // Offset: 0x80

    // entries in dependencies for files required to generate resource in range [index = firstDependencyIndex]
    unsigned short numSources; // Offset: 0x82

    // entries in dependencies for files required to generate resource in range [index = firstDependencyIndex + numFileSources + numResourceSources]
    unsigned short numDependencies; // Offset: 0x84

    // entries in specialHashes for resource
    unsigned short numSpecialHashes; // Offset: 0x86

    // number of idResourceMetaData offset pointers in metaDataOffset
    unsigned short numMetaEntries; // Offset: 0x88

}; // Size: 0x90
