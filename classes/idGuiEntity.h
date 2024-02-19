struct idGuiEntity : idDynamicEntity
{
    // Should the Gui billboard or not.
    bool billboard; // Offset: 0xCF8

    // Rendered on top of a supporting opaque surface. Makes transparency sorting more reliable.
    bool opaqueBackground; // Offset: 0xCF9

    // Rendered after all post process, this takes precedence over m_opaqueBackground
    bool afterPostProcess; // Offset: 0xCFA

    // Emissive scale
    float emissiveScale; // Offset: 0xCFC

    // Swf file to use.
    idDeclSWF* swf; // Offset: 0xD00

    // Scale of the swf.
    float swfScale; // Offset: 0xD08

    // SWF management.
    idSWF_GameObject swfObject; // Offset: 0xD10

    // rendermodel scale
    idVec3 renderModelScale; // Offset: 0xD88

}; // Size: 0xD98
