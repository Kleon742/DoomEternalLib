struct idAnimator_ChannelWeight : idAnimator_Base
{
    struct baseAnimation_t
    {
        idMD6Anim* animation; // Offset: 0x0

        idMD6LeafPause* leaf; // Offset: 0x8

    }; // Size: 0x10

    struct leafAnimation_t : idAnimator_ChannelWeight::baseAnimation_t
    {
        idMD6Branch* branch; // Offset: 0x10

    }; // Size: 0x18

    idList < unsigned short , TAG_IDLIST , false > userChannelToLeafMap; // Offset: 0x40

    idList < idAnimator_ChannelWeight::leafAnimation_t , TAG_IDLIST , false > leaves; // Offset: 0x58

    idAnimator_ChannelWeight::baseAnimation_t baseAnimation; // Offset: 0x70

    idMD6LeafPlay* controlAnimation; // Offset: 0x80

    int entityNumber; // Offset: 0x88

    void* lockOwner; // Offset: 0x90

}; // Size: 0x98
