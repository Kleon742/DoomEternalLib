struct resourceBuildSpec_t
{
    enum platform_t : int
    {
        PLATFORM_NONE = 0,
        PLATFORM_WIN64 = 1,
        PLATFORM_DURANGO = 2,
        PLATFORM_ORBIS = 3,
        PLATFORM_LINUX = 4,
        PLATFORM_MAC = 5,
        PLATFORM_NX = 6,
        PLATFORM_SCARLETT = 7,
        PLATFORM_PROSPERO = 8
    };

    enum render_t : int
    {
        RENDER_NONE = 0,
        RENDER_VULKAN = 1,
        RENDER_ORBIS_BASE = 2,
        RENDER_ORBIS_NEO = 3,
        RENDER_DURANGO_BASE = 4,
        RENDER_DURANGO_SCORPIO = 5,
        RENDER_NX = 6,
        RENDER_YETI = 7,
        RENDER_SCARLETT = 8,
        RENDER_PROSPERO = 9
    };

    idList < resourceBuildSpec_t::platform_t , TAG_IDLIST , false > platforms; // Offset: 0x0

    idList < resourceBuildSpec_t::render_t , TAG_IDLIST , false > renders; // Offset: 0x18

}; // Size: 0x30
