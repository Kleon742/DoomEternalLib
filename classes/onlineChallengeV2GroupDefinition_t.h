struct onlineChallengeV2GroupDefinition_t
{
    idStr highlight; // Offset: 0x0

    idStr name; // Offset: 0x30

    idStr description; // Offset: 0x60

    idVector < idWeakPtr < onlineChallengeV2Definition_t > > challenges; // Offset: 0x90

}; // Size: 0xA8
