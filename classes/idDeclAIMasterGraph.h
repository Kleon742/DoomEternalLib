struct idDeclAIMasterGraph : idDeclAIMasterGraphTemplate < idDeclAIMasterGraphSubGraph , idDeclAIMasterGraphNode , idDeclAIMasterGraphLink >
{
    // KEEP THESE ALPHABETIZEDadfasf
    idDeclAIAnimStateGraph* animStateGraph; // Offset: 0xF8

    // comment
    idDeclAnimWeb* animweb; // Offset: 0x100

    // dfad
    idDeclAF* articulatedFigure; // Offset: 0x108

    // asdfkjal
    idDeclAttackGraph* attackGraph; // Offset: 0x110

    // djfl
    idDeclAIBehavior* behavior; // Offset: 0x118

    // fjasdflkjda
    idDeclAIFSMManager* combatFSM; // Offset: 0x120

    // qwerty
    idList < const idDeclAIComponent * , TAG_IDLIST , false > componentList; // Offset: 0x128

    // qwerty
    idDeclAIComponentList* componentListNew; // Offset: 0x140

    // adfa
    idDeclAIDamageStateGraph* damageStateGraph; // Offset: 0x148

    // comment
    idDeclEntityDef* entity; // Offset: 0x150

    // entity damage
    idDeclEntityDamage* entityDamage; // Offset: 0x158

    // dafs
    idDeclFKGraph* fkGraph; // Offset: 0x160

    // aksdf
    idDeclFX* fxDecl; // Offset: 0x168

    // comment
    idDeclMD6* md6Def; // Offset: 0x170

    // adfa
    idDeclAIMovementGraph* movementGraph; // Offset: 0x178

    // dafad
    idDeclAIPainGraph* painGraph; // Offset: 0x180

    // aaaaa
    idList < const idDeclAIPositioningParms * , TAG_IDLIST , false > positioningParmsList; // Offset: 0x188

    // fizzbuzz
    idList < const idDeclRig * , TAG_IDLIST , false > rigDecls; // Offset: 0x1A0

    // kadjf
    idDeclTwitchPain* twitchDecl; // Offset: 0x1B8

}; // Size: 0x1C0
