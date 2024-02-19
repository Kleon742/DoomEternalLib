struct idLogicNodeModelPlayerSetGodMode : idLogicNodeModel
{
    // Logic identifiers. Add new identifiers to end of enumeration to avoid invalidating links/references.   Logic callbacks. static voidActivate( idLogicActivation & activation, idLogicNodeInstance & instance ); optional: the player id for the player we are looking for, -1 == local player
    int playerNum; // Offset: 0x10

    // 0 - turn off god mode, 1 turn on god mode
    bool value; // Offset: 0x14

}; // Size: 0x18
