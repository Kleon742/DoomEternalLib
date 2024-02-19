struct idMD6LeafPause : idMD6Leaf
{
    // private:
    int currentDeferred; // Offset: 0x28

    idList < idMD6Blend::jointMod_t , TAG_ANIMATION , false > animMods[2]; // Offset: 0x30

    // md6FrameInfoFlags_t
    short flags; // Offset: 0x60

    float frame; // Offset: 0x64

    idBounds bounds; // Offset: 0x68

    float lastEventFrame; // Offset: 0x80

}; // Size: 0x88
