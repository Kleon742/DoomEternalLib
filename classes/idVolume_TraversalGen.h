struct idVolume_TraversalGen : idVolume
{
    struct destinationVolume_t
    {
        // volume
        idManagedClassPtr < idVolume_TraversalGen > volume; // Offset: 0x0

    }; // Size: 0x20

    // volume should build traversals going towards these suckers, but target list works too
    idList < idVolume_TraversalGen::destinationVolume_t , TAG_IDLIST , false > destinationVolumes; // Offset: 0xC20

}; // Size: 0xC38
