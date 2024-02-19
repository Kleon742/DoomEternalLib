struct idEntityDefEditorVars
{
    // name used for entity placement pop-up menu instead of decl name
    idStr editorName; // Offset: 0x0

    // description of what the entity is used for
    idStr description; // Offset: 0x30

    // color of box used to represent the entity
    idColor color; // Offset: 0x60

    // size of box used to represent the entity - {{units = m}}
    idVec3 size; // Offset: 0x70

    // offset of origin inside of the box - {{units = m}}
    idVec3 originOffset; // Offset: 0x7C

    // material applied to box used to represent the entity
    idAtomicString material; // Offset: 0x88

    // entity can be rotated
    bool rotatable; // Offset: 0x0

    // draw vectors showing the orientation of the entity
    bool showOrientation; // Offset: 0x0

    // show fixed size box to represent the entity
    bool showFixedBox; // Offset: 0x0

    // show the entity in world camera view when view is in render mode
    bool showInRenderMode; // Offset: 0x0

    // if true skips the drawing of the rendermodel in the editor in favor of the fixed size box an example is the camera entities
    bool skipRenderModelInEditor; // Offset: 0x0

    // if true, entity shows up in the add entity drop down list
    bool placeable; // Offset: 0x0

    // if true, entity is spawnable
    bool instantiable; // Offset: 0x0

    // if true, entity is rendered with translucency (if viewoption allows)
    bool translucent; // Offset: 0x0

    // If true, use the renderable props on the entity for tracing the bounds.
    bool traceRenderableProps; // Offset: 0x0

}; // Size: 0x98
