struct idLogicNodeModelTutorial : idLogicNodeModel
{
    // tutorial event to show the player
    idDeclTutorialEvent* tutorialToShow; // Offset: 0x10

    // If true, activation will save to profile. Only one allowed.
    bool oneActivationPerProfile; // Offset: 0x18

}; // Size: 0x20
