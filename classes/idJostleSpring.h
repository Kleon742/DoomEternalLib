struct idJostleSpring : idBloatedEntity
{
    enum damageState_t : int
    {
        INVALID = 0,
        NORMAL = 1,
        DAMAGE = 2,
        BREAK = 3,
        DESTROYED = 4
    };

    enum damageLevel_t : int
    {
        DAMAGE_LEVEL_NONE = 0,
        DAMAGE_LEVEL_1 = 1,
        DAMAGE_LEVEL_2 = 2,
        DAMAGE_LEVEL_3 = 3,
        DAMAGE_LEVEL_4 = 4
    };

    struct attachment_t
    {
        // entity offset from origin {{ units = m }}
        idVec3 offset; // Offset: 0x0

        // entity offset angles
        idAngles offsetAngles; // Offset: 0xC

        // entity def this attachment will spawn
        idDeclEntityDef* entityDef; // Offset: 0x18

        // index of the spring the entity is attached to - entity disregards offset if the spring index is valid
        int springIndex; // Offset: 0x20

        // how much to scale the rest length of the spring when the attached entity dies
        float springDeathRestLengthScale; // Offset: 0x24

    }; // Size: 0x28

    struct spring_t
    {
        // spring offset from origin {{ units = m }}
        idVec3 offset; // Offset: 0x0

        // rest height (z-Axis) from origin {{ units = m }}
        float restHeight; // Offset: 0xC

        // mass of spring usually 1.0f {{ units = kg }}
        float mass; // Offset: 0x10

        // tension of spring aka K {{ units = kg / ( s * s ) }}
        float tension; // Offset: 0x14

        // critical Damping value of spring usually 2*Sqrt(k) {{ units = kg / s }}
        float criticalDamping; // Offset: 0x18

    }; // Size: 0x1C

    // Data amount of health the entity starts with;
    float maxHealth; // Offset: 0xB88

    // entity that replaces this one when this part gets destroyed
    idDeclEntityDef* replacement; // Offset: 0xB90

    // breakable
    idDeclEntityDef* breakable; // Offset: 0xB98

    // whether the entity tries to break when its health reaches zero.
    bool breakOnDeath; // Offset: 0xBA0

    // attachments that the entity starts with
    idList < idJostleSpring::attachment_t , TAG_IDLIST , false > startingParts; // Offset: 0xBA8

    // the fx decl
    idDeclFX* fxDecl; // Offset: 0xBC0

    // delay in seconds before the entity gets removed after it breaks
    float removeDelay; // Offset: 0xBC8

    // sound to play when object breaks
    idSoundEvent* sound_break; // Offset: 0xBD0

    // starting springs of entity
    idList < idJostleSpring::spring_t , TAG_IDLIST , false > startingSprings; // Offset: 0xBD8

    // damage decl to use to inflict radius damage when entity breaks
    idDamageParms* breakDamage; // Offset: 0xBF0

    // upForce Spring Info
    idJostleSpring::spring_t explosionPitchForceSpringInfo; // Offset: 0xBF8

    // upForce Spring Info
    idJostleSpring::spring_t explosionRollForceSpringInfo; // Offset: 0xC14

    // upForce Spring Info
    idJostleSpring::spring_t explosionUpForceSpringInfo; // Offset: 0xC30

    // pitch Impulse Spring Info
    idJostleSpring::spring_t pitchImpulseSpringInfo; // Offset: 0xC4C

    // roll Impulse Spring Info
    idJostleSpring::spring_t rollImpulseSpringInfo; // Offset: 0xC68

    // force that pushes the entity up when it explodes {{ units = m / s }}
    float explosionUpForce; // Offset: 0xC84

    // force that pitches the entity it explodes
    float explosionPitchForce; // Offset: 0xC88

    // force that rolls the entity when it explodes
    float explosionRollForce; // Offset: 0xC8C

    // how long in MS to apply the upforce during the explosion - this should be less than explosionDuration
    idTypesafeTime < int , millisecondUnique_t , 1000 > explosionUpForceDuration; // Offset: 0xC90

    // roll Impulse force
    float rollImpulseForce; // Offset: 0xC94

    // pitch Impulse force
    float pitchImpulseForce; // Offset: 0xC98

    // Members current health
    float health; // Offset: 0xC9C

    // {{ units = m }}
    float originalSpringHeight; // Offset: 0xCA0

    // {{ units = m }}
    float originalHeight; // Offset: 0xCA4

    // timer for applying the up force
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > upForceTimer; // Offset: 0xCA8

    // damage level enum used for FX
    idJostleSpring::damageLevel_t currentDamageLevel; // Offset: 0xCB0

    // the part to swap to once we are dead
    idManagedClassPtr < idEntity > replacementPart; // Offset: 0xCB8

    // {{ ___ts = m }}
    idList < idSpring < idVec3 > , TAG_IDLIST , false > springs; // Offset: 0xCD8

    idSpring < idVec1 > rollImpulseSpring; // Offset: 0xCF0

    idSpring < idVec1 > pitchImpulseSpring; // Offset: 0xD20

    // {{ ___ts = m }}
    idSpring < idVec1 > explosionHeightSpring; // Offset: 0xD50

    idSpring < idVec1 > explosionPitchSpring; // Offset: 0xD80

    idSpring < idVec1 > explosionRollSpring; // Offset: 0xDB0

    idJostleSpring::damageState_t state; // Offset: 0xDE0

    idList < idEntity * , TAG_IDLIST , false > startingPartsList; // Offset: 0xDE8

    // this is true if SetAxis() / SetOrigin() was called so we need to update all of the attachments
    bool dirtyOrigin; // Offset: 0xE00

}; // Size: 0xE08
