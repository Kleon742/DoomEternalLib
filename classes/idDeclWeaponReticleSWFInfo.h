struct idDeclWeaponReticleSWFInfo : idDeclTypeInfo
{
    struct reticleStyleName_t
    {
        // reticle style
        idDeclWeaponReticle::reticleStyle_t reticleStyle; // Offset: 0x0

        // reticle name in SWF file
        idStr swfName; // Offset: 0x8

    }; // Size: 0x38

    // list of reticle SWF infos
    idList < idDeclWeaponReticleSWFInfo::reticleStyleName_t , TAG_IDLIST , false > reticleSWFInfoList; // Offset: 0x88

}; // Size: 0xA0
