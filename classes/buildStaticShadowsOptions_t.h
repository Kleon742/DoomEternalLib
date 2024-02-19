struct buildStaticShadowsOptions_t
{
    enum lightFilter_t : int
    {
        ALL_LIGHTS = 0,
        NO_SUN = 1,
        SUN_ONLY = 2
    };

    buildStaticShadowsOptions_t::lightFilter_t lightFilter; // Offset: 0x0

    idDeclEnv* singleEnv; // Offset: 0x8

}; // Size: 0x10
