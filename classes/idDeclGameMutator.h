struct idDeclGameMutator : idGameDeclTypeInfo
{
    struct useOrLostInfo_t
    {
        // sound to play when player loses weapon
        idSoundEvent* disableSound; // Offset: 0x0

        // sound to play when player tries to switch to disabled weapon
        idSoundEvent* denySound; // Offset: 0x8

        // damage decl to apply to slayer when all weapons are lost
        idDeclDamage* allLostDamage; // Offset: 0x10

    }; // Size: 0x18

    struct timeAttackInfo_t
    {
        // milliseconds total to start time attack mode
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeLimitMS; // Offset: 0x0

        // milliseconds to add when an AI weakpoint is destroyed
        int weakpointDestroyTimeBonusMS; // Offset: 0x4

        // milliseconds to add when player Glorykills an enemy
        int gloryKillTimeBonusMS; // Offset: 0x8

        // milliseconds to add when player kills an enemy with bloodpunch
        int bloodpunchKillTimeBonusMS; // Offset: 0xC

        // milliseconds to add when player kills an enemy with chainsaw
        int chainsawKillTimeBonusMS; // Offset: 0x10

        // damage to apply to player if timer runs out
        idDeclDamage* failDamage; // Offset: 0x18

        // sound to play when challenge is failed
        idSoundEvent* failSound; // Offset: 0x20

        // sound to play when timer is initially started
        idSoundEvent* startSound; // Offset: 0x28

        // sound to play when a weakpoint is destroyed and time is added
        idSoundEvent* onBonusTimeAddedSound; // Offset: 0x30

        // sound to play incrementally when time is getting short ( last 30 seconds )
        idSoundEvent* lowTimeTick; // Offset: 0x38

        // sound to play when time is almost over ( last 10 seconds )
        idSoundEvent* lowTimeTickShort; // Offset: 0x40

        // how many seconds until we play the low time tick sound
        int lowTimeStart; // Offset: 0x48

        // how many seconds until we play low time short sound
        int lowTimeShortStart; // Offset: 0x4C

    }; // Size: 0x50

    struct weaponPickupAdditionalPerks_t
    {
        struct perkInfo_t
        {
            // perk to give
            idDeclPerk* perk; // Offset: 0x0

            // should this perk be equipped upon receipt
            bool equip; // Offset: 0x8

        }; // Size: 0x10

        // The weapon these perks get delivered with
        idDeclWeapon* weaponDecl; // Offset: 0x0

        // The perks
        idList < idDeclGameMutator::weaponPickupAdditionalPerks_t::perkInfo_t , TAG_IDLIST , false > additionalPerks; // Offset: 0x8

    }; // Size: 0x20

    struct classicModeInfo_t
    {
        // loadout to give the player at the start of classic mode
        idDeclDevInvLoadout* declLoadout; // Offset: 0x0

        // Additional perks to award on weapon pickup
        idList < idDeclGameMutator::weaponPickupAdditionalPerks_t , TAG_IDLIST , false > weaponPickupPerkList; // Offset: 0x8

    }; // Size: 0x20

    // Game Mutator type
    eGameMutatorType gameMutatorType; // Offset: 0x90

    // Use or Lose game mutator info
    idDeclGameMutator::useOrLostInfo_t useOrLoseInfo; // Offset: 0x98

    // Time attack game mutator info
    idDeclGameMutator::timeAttackInfo_t timeAttackInfo; // Offset: 0xB0

    // Classic mode game mutator info
    idDeclGameMutator::classicModeInfo_t classicModeInfo; // Offset: 0x100

}; // Size: 0x120
