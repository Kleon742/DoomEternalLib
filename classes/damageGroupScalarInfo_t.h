struct damageGroupScalarInfo_t
{
    // damage scale for this zone
    float damageScale; // Offset: 0x0

    // the scale of damage to the actors health while there is still armor at this location
    float armoredDamageScale; // Offset: 0x4

    // the scale of damage to the armor at this location
    float armorDamageScale; // Offset: 0x8

    // flags for special functionality when this damageGroup is hit by this damage decl
    damageScalarDamageFlags_t damageFlags; // Offset: 0xC

    // the damage decl that these scale values correspond to. If NULL, scale value will be applied to all non-specified damage decls
    idDeclDamage* damageDecl; // Offset: 0x10

}; // Size: 0x18
