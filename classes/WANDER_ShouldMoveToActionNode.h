struct WANDER_ShouldMoveToActionNode : idAIStateTransition
{
    // action node
    idAtomicString nodeMemoryKey; // Offset: 0xF8

    // align to rotation
    idAtomicString nodeAlignToRotationMemoryKey; // Offset: 0x100

    // How far we should search for actions
    float searchDistance; // Offset: 0x108

}; // Size: 0x110
