struct idDemonCardDeckComponent : idDamageCompiler_Listener
{
    enum targetEntityState_t : int
    {
        TES_HIDDEN = 0,
        TES_VALID = 1,
        TES_INVALID_POSITION = 2,
        TES_INSUFFICIENT_RESOURCES = 3
    };

    typedef idArray < idManagedClassPtr < idEntity > , MAX_ONE_HIT_FX_ENTITIES > oneHitEntityArray_t;

    // the decl that contains the start values for this demon deck component
    idDeclDemonCardDeck* declDemonCardDeck; // Offset: 0x8

    // the actual inventory items we are playing with the attributes for this game cant have them in the inventory collection as we need each one to be differentiated
    idList < idDemonCard , TAG_IDLIST , false > cardDeck; // Offset: 0x10

    // the max num of pips that are able to be played at a time on this deck
    int maxNumCardPips; // Offset: 0x28

    // the time at which to fill one pip of the meter
    idTypesafeTime < int , millisecondUnique_t , 1000 > pipFillTime; // Offset: 0x2C

    // the pip meter for this deck
    idPipMeteringComponent cardDeckMetering; // Offset: 0x30

    // the last time we updated the deck
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastUpdateTime; // Offset: 0x178

    // the num of pips in use right now, simple for now we might need to tie these to the card that used it
    int numReservedPips; // Offset: 0x17C

    // the index of the card we are currently using
    int currentCardIndex; // Offset: 0x180

    // the current button to use to activate cards from the decl init
    usercmdButton_t useCardBtn; // Offset: 0x188

    // button for quick use card 1
    usercmdButton_t quickUseBtn1; // Offset: 0x190

    // button for quick use card 2
    usercmdButton_t quickUseBtn2; // Offset: 0x198

    // button for quick use card 3
    usercmdButton_t quickUseBtn3; // Offset: 0x1A0

    // button for quick use card 4
    usercmdButton_t quickUseBtn4; // Offset: 0x1A8

    // button for quick use card 5
    usercmdButton_t quickUseBtn5; // Offset: 0x1B0

    // button for quick use card 6
    usercmdButton_t quickUseBtn6; // Offset: 0x1B8

    // track press/release of use button
    bool useWasPressed; // Offset: 0x1C0

    // track press/release of quick 1 button
    bool quick1WasPressed; // Offset: 0x1C1

    // track press/release of quick 2 button
    bool quick2WasPressed; // Offset: 0x1C2

    // track press/release of quick 3 button
    bool quick3WasPressed; // Offset: 0x1C3

    // track press/release of quick 4 button
    bool quick4WasPressed; // Offset: 0x1C4

    // track press/release of quick 5 button
    bool quick5WasPressed; // Offset: 0x1C5

    // track press/release of quick 5 button
    bool quick6WasPressed; // Offset: 0x1C6

    // track this to avoid registering more than once
    bool hasRegisteredWithDamageCompiler; // Offset: 0x1C7

    // Ghosting was completed
    bool ghostingCompleted; // Offset: 0x1C8

    // if true, no need to keep serializing network data
    bool ownerDemonKilled; // Offset: 0x1C9

    // we create an entity to display FX at the target point
    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x1D0

    // track last target entity state
    idDemonCardDeckComponent::targetEntityState_t lastTargetState; // Offset: 0x1F0

    // track last target position
    idVec3 lastTargetPos; // Offset: 0x1F4

    // track last target surface normal
    idVec3 lastTargetNormal; // Offset: 0x200

    // pool of entities that are used to play one hit fx, e.g. local spawn effect or invalid position effect
    idArray < idManagedClassPtr < idEntity > , 8 > oneHitFXEntities; // Offset: 0x210

    // index of next one hit entity to use
    int nextOneHit; // Offset: 0x310

    // previous gametime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevGameTime; // Offset: 0x318

}; // Size: 0x320
