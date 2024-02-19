struct socialInvite_t
{
    idStr playerName; // Offset: 0x0

    socialPlatform_t socialPlatform; // Offset: 0x30

    idHandle < int , socialInviteId_type , socialInviteId_type::SII_INVALID > inviteId; // Offset: 0x34

    userHandle_t invitee; // Offset: 0x38

}; // Size: 0x40
