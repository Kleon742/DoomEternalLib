struct idDeclAIComponent_Whiplash : idDeclAIComponent
{
    struct whipGeneralData_t
    {
        // List of joints (in order from base to tip) to build the whip from
        idList < idAtomicString , TAG_IDLIST , false > leftWhipJoints; // Offset: 0x0

        // List of joints (in order from base to tip) to build the whip from
        idList < idAtomicString , TAG_IDLIST , false > rightWhipJoints; // Offset: 0x18

    }; // Size: 0x30

    struct maceStrikeData_t
    {
        // Meshes to hide on mace strike
        idList < idAtomicString , TAG_IDLIST , false > hideMeshes; // Offset: 0x0

        // Disable sphere model trace
        bool disableSphereModelTrace; // Offset: 0x18

        // Memkeys to set on mace hit
        idList < idAtomicString , TAG_IDLIST , false > memkeysToSet; // Offset: 0x20

        // Enables mace geo interaction with geo
        bool enableMaceGeoHit; // Offset: 0x38

    }; // Size: 0x40

    struct directStrikeData_t
    {
        // damage decl for direct strike (double)
        idDeclDamage* directStrikeDamage; // Offset: 0x0

        // amount of time in the future (in sec) to predict enemy position for double strike
        idTypesafeTime < float , secondUnique_t , 1 > directStrikePredictTime; // Offset: 0x8

        // clamp x,y,z of whip scaling factor between these values
        idRange < float > directStrikeWhipScaleRange; // Offset: 0xC

    }; // Size: 0x18

    struct clearoutData_t
    {
        // clamp x,y,z of whip scaling factor between these values
        idRange < float > clearoutWhipScaleRange; // Offset: 0x0

        // how many iterations to perform when calculating lateral whip scale factor (see idAI2Component_Whiplash::Whip_State_ClearoutAttack() ). More iterations = higher accuracy
        int numLateralScaleTestIterations; // Offset: 0x8

    }; // Size: 0xC

    struct whipSegmentData_t
    {
        // name of whip segment model
        idStrRenderModel modelName; // Offset: 0x0

        // distance interval along spline to render a new whip segment
        float intervalLength; // Offset: 0x8

        // min and max allowable distances along spline, after adjusting distDelta along spline
        idRange < float > intervalToleranceRange; // Offset: 0xC

        // render scale of each whip segment
        float renderScale; // Offset: 0x14

    }; // Size: 0x18

    // any info needed for general whip component functionality
    idDeclAIComponent_Whiplash::whipGeneralData_t whipGeneralInfo; // Offset: 0x98

    // Exclude AI hands from updating
    idList < aiHand_t , TAG_IDLIST , false > excludedAIHands; // Offset: 0xC8

    // Mace hit info
    idDeclAIComponent_Whiplash::maceStrikeData_t maceStrikeData; // Offset: 0xE0

    // any gameplay-dependent info needed for double-whip direct strike attack
    idDeclAIComponent_Whiplash::directStrikeData_t directStrikeInfo; // Offset: 0x120

    // any info associated with the whiplash clearout attack
    idDeclAIComponent_Whiplash::clearoutData_t clearoutInfo; // Offset: 0x138

    // any info related to the whip segment render geo
    idDeclAIComponent_Whiplash::whipSegmentData_t whipSegmentInfo; // Offset: 0x148

    // VFX - RIBBONS List of ribbons to use for the whips
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > whipRibbonList; // Offset: 0x160

    // VFX - IMPACT Impact effect list for the direct strike attack point (at full extension where the whip hooks meet).
    idDeclImpactEffect* directStrikeImpactEffectTable; // Offset: 0x178

    // Impact effect list for lash attack (where whips drag along the ground).
    idDeclImpactEffect* lashImpactEffectTable; // Offset: 0x180

    // Impact effect list for traversal behavior (where whips attach to geo).
    idDeclImpactEffect* traversalImpactEffectTable; // Offset: 0x188

}; // Size: 0x190
