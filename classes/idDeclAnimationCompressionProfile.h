struct idDeclAnimationCompressionProfile : idDeclTypeInfo
{
    struct compressionTolerances_t
    {
        // the amount of rotation that the system considers 'insignificant' and will compress (in degrees!)
        float rotationInDegrees; // Offset: 0x0

        // the amount of translation that the system considers 'insignificant' and will compress
        float translation; // Offset: 0x4

        // the amount of translation for end effector that the system considers 'insignificant' and will compress when removing keys from a parent
        float endEffectorTranslation; // Offset: 0x8

    }; // Size: 0xC

    struct compressionSetting_t
    {
        // Default % applied to animations that use this compression setting
        float defaultPercent; // Offset: 0x0

        // Compression tolerances at 0%
        idDeclAnimationCompressionProfile::compressionTolerances_t minCompression; // Offset: 0x4

        // Compression tolerances at 100%
        idDeclAnimationCompressionProfile::compressionTolerances_t maxCompression; // Offset: 0x10

    }; // Size: 0x1C

    // any md6anim filename that contains these wildcards will use this profile. For instance, adding "monsters", will use this profile for any animation with the folder 'monsters' in its path or filename.
    idList < idStr , TAG_IDLIST , false > wildcards; // Offset: 0x88

    // defines the range of compression values
    idDeclAnimationCompressionProfile::compressionSetting_t settings; // Offset: 0xA0

}; // Size: 0xC0
