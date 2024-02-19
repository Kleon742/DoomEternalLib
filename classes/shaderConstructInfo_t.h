struct shaderConstructInfo_t
{
    bool parsed; // Offset: 0x0

    int mainPosition; // Offset: 0x4

    int mainBodyPosition; // Offset: 0x8

    idStr sourceString; // Offset: 0x10

    idStr mergeableDataRegister; // Offset: 0x40

    idStaticList < int , 64 , false , TAG_IDLIST > inAttribs; // Offset: 0x70

    idStaticList < int , 64 , false , TAG_IDLIST > outAttribs; // Offset: 0x188

    idListSet < int > usedViewParms; // Offset: 0x2A0

    idListSet < int > explicitImageSamplerParms; // Offset: 0x2B8

}; // Size: 0x2D0
