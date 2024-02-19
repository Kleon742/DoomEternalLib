struct idLogicNodeModelPodiumAnimation : idLogicNodeModel
{
    // The type of podium animation to play
    idPodiumWrapper::podiumWrapperAnimation_t animationToStart; // Offset: 0x10

    // String to indicate which animation is selected
    idStr name; // Offset: 0x18

}; // Size: 0x48
