struct idDeclGlobalFontTable : idDeclTypeInfo
{
    // SWF_FONT_ETERNAL_BOLD
    idFont* eternal_bold; // Offset: 0x88

    // SWF_FONT_ETERNAL_REG
    idFont* eternal_reg; // Offset: 0x90

    // SWF_FONT_ETERNAL_NUM
    idFont* eternal_num; // Offset: 0x98

    // SWF_FONT_TT_SUPERMOLOT
    idFont* tt_supermolot; // Offset: 0xA0

    // SWF_FONT_ID_TACTICAL
    idFont* idTactical; // Offset: 0xA8

    // SWF_FONT_EUROSTILECONREG
    idFont* eurostileconreg; // Offset: 0xB0

    // SWF_FONT_ETERNAL_REG_JAPANESE
    idFont* eternal_reg_ja; // Offset: 0xB8

    // SWF_FONT_ETERNAL_BOLD_JAPANESE
    idFont* eternal_bold_ja; // Offset: 0xC0

    // SWF_FONT_ETERNAL_REG_SCHINESE
    idFont* eternal_reg_zh_cn; // Offset: 0xC8

    // SWF_FONT_ETERNAL_BOLD_SCHINESE
    idFont* eternal_bold_zh_cn; // Offset: 0xD0

    // SWF_FONT_ETERNAL_REG_TCHINESE
    idFont* eternal_reg_zh_tw; // Offset: 0xD8

    // SWF_FONT_ETERNAL_BOLD_TCHINESE
    idFont* eternal_bold_zh_tw; // Offset: 0xE0

    // SWF_FONT_ETERNAL_REG_KOREAN
    idFont* eternal_reg_ko; // Offset: 0xE8

    // SWF_FONT_ETERNAL_BOLD_KOREAN
    idFont* eternal_bold_ko; // Offset: 0xF0

    // Font used for debug guis
    idFont* debugGUIFont; // Offset: 0xF8

    idArray < const idFont * , 14 > fontTypes; // Offset: 0x100

    idGrowableList < unsigned int , 16 , TAG_IDLIST > materialLocks; // Offset: 0x170

}; // Size: 0x1C8
