struct idDeclProp_DisguiseComponent : idDeclProp_UseComponent
{
    // damage to apply when slayer touches prop
    idDeclDamage* damageOnTouch; // Offset: 0x130

    // time (in ms) between activations (zero means no cooldown)
    idTypesafeTime < int , millisecondUnique_t , 1000 > hazardCooldownMS; // Offset: 0x138

    // can only be activated once (e.g. barrel explode)
    bool hazardOnce; // Offset: 0x13C

}; // Size: 0x140
