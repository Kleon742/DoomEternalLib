struct idAnnouncementManager : idBloatedEntity
{
    // how long after map load to start working (seconds)
    float startDelay; // Offset: 0xB88

    // + or - to start Delay (seconds)
    float startDelayVariance; // Offset: 0xB8C

    // how long after playing to play again (seconds)
    float iterationDelay; // Offset: 0xB90

    // + or - to iterationDelay (seconds)
    float iterationVariance; // Offset: 0xB94

    // percentage chance it'll play each iteration. 0.0 - 1.0
    float chancePerIteration; // Offset: 0xB98

    // if false needs to be triggered to start.
    bool startActive; // Offset: 0xB9C

    // if true do voice over, other wise do sound shader
    bool doVoiceOver; // Offset: 0xB9D

    // if not NULL this will be the first sound played
    idSoundEvent* firstAnnouncement; // Offset: 0xBA0

    // the list of announcements that can happen.
    idList < const idSoundEvent * , TAG_IDLIST , false > announcements; // Offset: 0xBA8

    // if not NULL this will be the first sound played
    idDeclVoiceOver* firstAnnouncementVO; // Offset: 0xBC0

    // the list of announcements that can happen.
    idList < const idDeclVoiceOver * , TAG_IDLIST , false > announcementsVO; // Offset: 0xBC8

    // name to show for subtitles
    idStrId talkerName; // Offset: 0xBE0

    bool active; // Offset: 0xBE4

    bool playedFirst; // Offset: 0xBE5

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPlayTime; // Offset: 0xBE8

    int lastAnnouncement; // Offset: 0xBF0

}; // Size: 0xBF8
