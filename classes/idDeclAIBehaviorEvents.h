struct idDeclAIBehaviorEvents : idGameDeclTypeInfo
{
    // AI event to send out when dying
    idDeclAiEvent* bodyEventDecl; // Offset: 0x90

    // AI event to send out for electric death
    idDeclAiEvent* electricDeathEventDecl; // Offset: 0x98

    // AI event to send out for mutant attack
    idDeclAiEvent* mutantAttackEventDecl; // Offset: 0xA0

    // AI event to send out for possessionEventDecl
    idDeclAiEvent* possessionEventDecl; // Offset: 0xA8

    // AI event to send out when dead body land
    idDeclAiEvent* deadBodyLandEventDecl; // Offset: 0xB0

    // voice AI event to send out when getting killed
    idDeclAiEvent* gotKilledVoiceEventDecl; // Offset: 0xB8

    // voice AI event to send out when saw something
    idDeclAiEvent* sawSomethingVoiceEventDecl; // Offset: 0xC0

    // voice AI event to send out when heard something
    idDeclAiEvent* heardSomethingVoiceEventDecl; // Offset: 0xC8

    // voice AI event to send out when member killed
    idDeclAiEvent* memberKilledVoiceEventDecl; // Offset: 0xD0

    // voice AI event to send out when found dead body
    idDeclAiEvent* foundDeadBodyVoiceEventDecl; // Offset: 0xD8

    // voice AI event to send out when enemy sighted
    idDeclAiEvent* enemySightedVoiceEventDecl; // Offset: 0xE0

    // VO AI event to send out when injured
    idDeclAiEvent* injuredVOEventDecl; // Offset: 0xE8

    // VO AI event to send out for crap
    idDeclAiEvent* crapVOEventDecl; // Offset: 0xF0

    // VO AI event to send out when intimidated
    idDeclAiEvent* intimidatedVOEventDecl; // Offset: 0xF8

    // VO AI event to send out for enemy killed
    idDeclAiEvent* enemyKilledVOEventDecl; // Offset: 0x100

    // VO AI event to send out when losing battle
    idDeclAiEvent* losingBattleVOEventDecl; // Offset: 0x108

    // VO AI event to send out for member killed
    idDeclAiEvent* memberKilledVOEventDecl; // Offset: 0x110

}; // Size: 0x118
