struct materialToolData_t
{
    // fields that will appear in the editor
    idList < idStr , TAG_IDLIST , false > exposedFields; // Offset: 0x0

    // allows to edit editor image for materials using the template
    bool exposeEditorImage; // Offset: 0x18

    // render parms from this list are kept in material even if shaders do not refer to them
    idList < const idDeclRenderParm * , TAG_IDLIST , false > nonShaderParms; // Offset: 0x20

    // tool flags
    toolsFlags_t flags; // Offset: 0x38

    // path to the editor image
    idStr editorImagePath; // Offset: 0x40

    // run time image - gets loaded only if referenced
    idImage* editorImage; // Offset: 0x70

    // human readable template name
    idStr templateLabel; // Offset: 0x78

    // description that does not replicate label and is helpful to the user
    idStr templateDescription; // Offset: 0xA8

    // parms presence of which is used to select template
    idList < const idDeclRenderParm * , TAG_IDLIST , false > templateDeductionParms; // Offset: 0xD8

    // used to assign template by folder
    idList < idStr , TAG_IDLIST , false > templateDeductionPaths; // Offset: 0xF0

}; // Size: 0x108
