struct idBuildArea : idBloatedEntity
{
    struct buildVar_t
    {
        // the name of the cvar to override
        idStr varName; // Offset: 0x0

        // the new value of the cvar to use in this build area
        idStr varValue; // Offset: 0x30

    }; // Size: 0x60

    // the origin used for any build operations that require a position
    idVec3 areaOrigin; // Offset: 0xB88

    // List of the mt_gen* cvars to override in this area
    idList < idBuildArea::buildVar_t , TAG_IDLIST , false > buildVars; // Offset: 0xB98

}; // Size: 0xBB0
