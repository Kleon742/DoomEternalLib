struct idEffectPhysicsPieceEmitterHavok : idEffectPhysicsPieceEmitter
{
    struct piece_t
    {
        // Havok rigid-body physics object/state
        idHavokPhysics_RigidBody* rigidBody; // Offset: 0x0

        // Timestamp of when piece was "emitted"
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x8

        // Timestamp of when piece was first in contact with something
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestampContact; // Offset: 0x10

    }; // Size: 0x18

    idHavokPhysics* havokPhysics; // Offset: 0x48

    idRandom random; // Offset: 0x50

    idList < idEffectPhysicsPieceEmitterHavok::piece_t , TAG_FXPHYSICS , false > pieces; // Offset: 0x58

    idList < int , TAG_FXPHYSICS , false > freePieces; // Offset: 0x70

    idList < int , TAG_FXPHYSICS , false > usedPieces; // Offset: 0x88

    bool hidden; // Offset: 0xA0

    bool hiddenOverride; // Offset: 0xA1

    idSoundObject soundObject; // Offset: 0xA8

}; // Size: 0xB8
