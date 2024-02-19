struct idBot_Combat_Attack_Close : idBotState
{
    bool firstThink; // Offset: 0x130

    bool isBackingUp; // Offset: 0x131

    bool moveBlocked; // Offset: 0x132

    // {{ units = m }}
    idVec3 backAwayPoint; // Offset: 0x134

}; // Size: 0x140
