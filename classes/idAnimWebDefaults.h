struct idAnimWebDefaults
{
    // web path to start in, may contain variable names such as $weapon
    idAnimWebPath webPath; // Offset: 0x0

    // layers in the web that should be instanced for this AI
    idList < idAtomicString , TAG_AI_UNIT , false > activeLayers; // Offset: 0x30

    // true if the anim web is enabled
    bool enabled; // Offset: 0x48

}; // Size: 0x50
