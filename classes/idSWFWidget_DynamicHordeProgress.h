struct idSWFWidget_DynamicHordeProgress : idSWFWidget
{
    unsigned char beatenFlags; // Offset: 0x180

    idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x188

    idList < idSWFWidget_HordeProgressNode * , TAG_IDLIST , false > nodes; // Offset: 0x190

    int viewIndex; // Offset: 0x1A8

    bool viewIndexIsDeath; // Offset: 0x1AC

    bool childrenUseCustomSpritePath; // Offset: 0x1AD

    bool defaultSpritePathIncludesInfo; // Offset: 0x1AE

    bool resetStartY; // Offset: 0x1AF

    bool updateStateOfChildrenOnUpdate; // Offset: 0x1B0

}; // Size: 0x1B8
