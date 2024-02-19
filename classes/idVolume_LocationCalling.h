struct idVolume_LocationCalling : idVolume
{
    // VO ai should play when sighting (priority)
    idDeclVoiceOver* locationVo; // Offset: 0xC20

    // VO ai should play when sighting
    idSoundEvent* locationSs; // Offset: 0xC28

    // group name to use this location calling volume
    idStr groupName; // Offset: 0xC30

}; // Size: 0xC60
