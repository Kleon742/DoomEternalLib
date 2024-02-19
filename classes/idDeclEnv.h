struct idDeclEnv : idDeclTypeInfo
{
    // renderParms
    idParmBlock parmBlock; // Offset: 0x88

    // if true, another env can override this one
    bool allowOverride; // Offset: 0x98

    // if true, do not build a static show cache for this env
    bool noShadowCache; // Offset: 0x99

    // duration in seconds to completely fade out the environment
    float blendDuration; // Offset: 0x9C

}; // Size: 0xA0
