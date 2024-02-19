struct idProp_Usable : idProp
{
    // trigger targets on use
    bool triggerTargets; // Offset: 0x1B48

    // offset in front of prop's physics axis where an actor must be to use this prop {{ units = m }}
    idVec3 use_vec; // Offset: 0x1B4C

    // angle an actor should face to use this prop
    float use_yaw; // Offset: 0x1B58

    // distance an actor must be from this prop to use it... if != 0, this overrides use_vec {{ units = m }}
    float use_radius; // Offset: 0x1B5C

    // some props are not usable
    bool isUsable; // Offset: 0x1B60

    // can the prop be picked up via touch ( like a trigger )
    bool pickupOnTouch; // Offset: 0x1B61

    // can the prop be picked up via use command
    bool pickupOnUse; // Offset: 0x1B62

}; // Size: 0x1B68
