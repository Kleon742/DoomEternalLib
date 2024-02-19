struct idTwitchPain_DamageDirectionGroup
{
    // the damage direction for this group
    damageDirection_t damageDir; // Offset: 0x0

    // into to override decl values
    twitchPainInfo_t info; // Offset: 0x4

    // list of joint groups for this damage direction
    idList < idTwitchPain_JointGroup , TAG_IDLIST , false > jointGroups; // Offset: 0x28

}; // Size: 0x40
