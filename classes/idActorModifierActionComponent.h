struct idActorModifierActionComponent
{
    struct ActorModifierActionContainer
    {
        idActorModifierAction* action; // Offset: 0x0

    }; // Size: 0x8

    idStaticList < idActorModifierActionComponent::ActorModifierActionContainer , 4 , false , TAG_IDLIST > actions; // Offset: 0x0

    idArray < idActorModifierAction_Parms , 4 > parms; // Offset: 0x38

}; // Size: 0x2B8
