struct twitchPainMapping_t
{
    // __def idList< idAnimAliasRef >targetAnimations;if any of these md6 anims are matchedOR any of these web nodes are matched
    idList < idAnimWebPath , TAG_IDLIST , false > targetWebNodes; // Offset: 0x0

    // THEN use this twitch data
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > twitchData; // Offset: 0x18

}; // Size: 0x30
