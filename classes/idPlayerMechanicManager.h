struct idPlayerMechanicManager : idClass
{
    enum clipModelType_t : int
    {
        CLIP_MODEL_POINT = 0,
        CLIP_MODEL_BOX_8 = 1,
        CLIP_MODEL_BOX_16 = 2,
        CLIP_MODEL_BOX_24 = 3
    };

    int sharedFlags; // Offset: 0x10

    idList < idPlayerMechanic * , TAG_IDLIST , false > playerMechanics; // Offset: 0x18

    idPlayer* owner; // Offset: 0x30

}; // Size: 0x38
