struct idDeclCutsceneKey : idClass
{
    // Type of key
    idDeclCutsceneKeyType type; // Offset: 0x10

    // Time the key starts
    unsigned int begin; // Offset: 0x14

    // Time the key ends
    unsigned int end; // Offset: 0x18

    // TODO: Could be cleverer with storage here Animation name
    idStr animName; // Offset: 0x20

    // Point at which to start playing the anim
    unsigned int animStartOffset; // Offset: 0x50

    // Name of the actor to attach to.
    idStr attachTo; // Offset: 0x58

    // Name of the joint on attachTo to attach to ( for attachments or motion anim keys )
    idStr attachToJoint; // Offset: 0x88

}; // Size: 0xB8
