struct idDeclMetric : idDeclTypeInfo
{
    struct presentation_t
    {
        // the minimum value this stat should have to be chosen to show
        float minValue; // Offset: 0x0

        // weight value for determining which stats show, higher value will be shown first
        int priority; // Offset: 0x4

        // whether this is something we should show
        bool showInInvasionEndOfMatch; // Offset: 0x8

        // whether this is something we should show in shell.
        bool showInShell; // Offset: 0x9

        // How to present this stat value.
        statVisualType_t visualType; // Offset: 0xC

    }; // Size: 0x10

    // the stat this decl describes
    gameStat_t stat; // Offset: 0x88

    // how we aggregate this state
    gameStatAggregationMethod aggregate; // Offset: 0x8C

    // types of weapons relevant to this metric
    idList < idAtomicString , TAG_IDLIST , false > weaponDecls; // Offset: 0x98

    // controls how this stat should be shown
    idDeclMetric::presentation_t presentation; // Offset: 0xB0

    // determine whether the max or min value of this stat is considered best
    statBestValueType_t statBest; // Offset: 0xC0

    // prevents showing medal even if there is a medal icon
    bool hideMedal; // Offset: 0xC4

    // medals with higher priority are added earlier in the queue when displayed
    int medalPriority; // Offset: 0xC8

    // generic count used by specific stat implementation
    int count; // Offset: 0xCC

    // this stat is associated with earning a rune trial
    bool isRuneEarnedStat; // Offset: 0xD0

    // the DEFAULT amount of xp awarded every increment of this metric.
    int xp; // Offset: 0xD4

    // the game mode specific amount of xp awarded every increment of this metric. Any gamemode matching entries in here replace the default "xp" value.
    idList < gameModeStatXpOverride_t , TAG_IDLIST , false > xpGameModeOverride; // Offset: 0xD8

    // bonus xp
    idList < rageStatXpBonus , TAG_IDLIST , false > xpBonus; // Offset: 0xF0

    // display name if applicable
    idStrId displayName; // Offset: 0x108

    // description for the medal UI
    idStrId description; // Offset: 0x10C

    // the game mode specific description. Any gamemode matching entries in here replace the default description.
    idList < gameModeDescriptionOverride_t , TAG_IDLIST , false > descriptionGameModeOverride; // Offset: 0x110

    // the medal icon for UI display
    idMaterial2* medalIcon; // Offset: 0x128

    // callout that plays when medal is displayed
    idDeclGameEventCallout* medalCallout; // Offset: 0x130

    // If set, any instances of the medalToReplace in the medal queue will be removed when this medal is added.
    idDeclMetric* medalToReplace; // Offset: 0x138

    // flags to control when stat is posted to server
    statPostFlags_t postToServerFlags; // Offset: 0x140

    // how to display a posted stat
    statServerDisplayType_t postDisplayType; // Offset: 0x144

}; // Size: 0x148
