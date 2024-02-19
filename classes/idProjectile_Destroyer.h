struct idProjectile_Destroyer : idProjectile_Rocket
{
    struct idDestroyerBladeSplinterFXInfo
    {
        // fx entity to create
        idDeclEntityDef* fxEntityDef; // Offset: 0x0

        // queries to consider
        idRange < int > queryRange; // Offset: 0x8

        // hit fx condition ( can be none )
        fxCondition_t fxCondition; // Offset: 0x10

        // max difference compared to origin explosion position to allow using hit position
        float maxDifferenceToUseHitPos; // Offset: 0x14

        // max angle between contact normal and projectile direction to use that normal
        float maxAngleToUseContactNormalDegrees; // Offset: 0x18

    }; // Size: 0x20

    struct splinterParms_t
    {
        // true or false
        bool enable; // Offset: 0x0

        // how many hit tests to do across the width of the projectile (must be >=2)
        float hitTestNum; // Offset: 0x4

        // determines whether splintering occurs on a kill or not
        bool splinterOnKill; // Offset: 0x8

        // each time a projectile splinters the resulting projectiles gain a level, and this is a way to limit that (-1 for unlimited)
        int splinterMaxLevel; // Offset: 0xC

        // the splinter damage scale is the parent's damageScale times this value times the size ratio (if used) with the parent
        float splinterDamageScale; // Offset: 0x10

        // don't let the calculated damage scale drop below this value
        float splinterDamageScaleMin; // Offset: 0x14

        // if true then scale splinter damage according to its scale compared to its parent, if false then don't
        bool splinterDamageScaleSize; // Offset: 0x18

        // whether unsplinter is enabled or not (can also be enabled or disabled with upgrades)
        bool unsplinterEnabled; // Offset: 0x19

        // how fast projectiles can stretch toward each other to reform
        float unsplinterSpeed; // Offset: 0x1C

        // only unsplinter if points are closer together than this, or 0 for no maximum
        float unsplinterMaxDist; // Offset: 0x20

        // if two splinters are this close or closer, let them merge into one
        float unsplinterMergeDist; // Offset: 0x24

        // total length of unsplinter time for this projectile and all its splinters, or -1 for unlimited
        idTypesafeTime < int , millisecondUnique_t , 1000 > unsplinterMaxMS; // Offset: 0x28

        // false to only let adjacent splinters expand toward each other, true to also allow side splinters to expand to original width
        bool unsplinterToOriginalWidth; // Offset: 0x2C

        // allows scaling of the attachments relative to the main rendermodel / skeleton at the min charge level
        idVec3 attachmentScaleMinCharge; // Offset: 0x30

        // allows scaling of the attachments relative to the main rendermodel / skeleton at the min charge level
        idVec3 attachmentScaleMaxCharge; // Offset: 0x3C

        // size of height and depth of clip model used against geo - width is scaled to size of each splinter piece
        float geoClipSize; // Offset: 0x48

        // Multiplier for cur - old position for the sweep of the geo vfx probes
        float geoVFXSweepMultiplier; // Offset: 0x4C

        // percentage of geo traces that need to hit something to destroy the projectile
        float percHitQueriesToDestroyProjectile; // Offset: 0x50

        // we only destroy the projectile if (numQueriesHitGeo / numQueries) >= percHitQueriesToDestroyProjectile but the contacts timeout after this period of time
        idTypesafeTime < int , millisecondUnique_t , 1000 > hitGeoCooldown; // Offset: 0x54

        // if set to 0.75 only consider the middle 75% of segment queries. This can be used to ignore collision at the ends.
        float middlePercentOfQueriesToConsiderToDestroyProjectile; // Offset: 0x58

        // information for independent vfx after an explosion
        idList < idProjectile_Destroyer::idDestroyerBladeSplinterFXInfo , TAG_IDLIST , false > fxParts; // Offset: 0x60

    }; // Size: 0x78

    struct idLastDestroyerBladeHitInfo
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > hitTime; // Offset: 0x0

        idVec3 hitPosition; // Offset: 0x8

        idVec3 hitNormal; // Offset: 0x14

    }; // Size: 0x20

    struct idOneSplinterData
    {
        // the index of the leftmost query for this splinter
        int leftQuery; // Offset: 0x0

        // the index of the rightmost query for this splinter
        int rightQuery; // Offset: 0x4

        // the actual left offset of the splinter
        float leftOffset; // Offset: 0x8

        // the actual right offset of the splinter
        float rightOffset; // Offset: 0xC

        // used for debugging
        idList < idVec3 , TAG_IDLIST , false > clipQueriesStartPos; // Offset: 0x10

        // actorClipModel multi-hit motion contacts queries against actors
        idList < idHavokMultiHitQueryId , TAG_IDLIST , false > actorMultiHitQueries_Havok; // Offset: 0x28

        // geoClipModel translation queries against geo
        idList < idHavokQueryId , TAG_IDLIST , false > geoTranslationQueries_Havok; // Offset: 0x40

        // geoVFXClipModel translation queries against geo
        idList < idHavokQueryId , TAG_IDLIST , false > geoVFXTranslationQueries_Havok; // Offset: 0x58

        // point translation queries against everything - clipmodel collisions can deviate significantly from the perceived impact point because they're so large
        idList < idHavokQueryId , TAG_IDLIST , false > lineTranslationQueries_Havok; // Offset: 0x70

        // hit information with geometry for this query
        idList < idProjectile_Destroyer::idLastDestroyerBladeHitInfo , TAG_IDLIST , false > geoTranslationQueries_LastHitInfo; // Offset: 0x88

        // hit information with geometry for this query
        idList < idProjectile_Destroyer::idLastDestroyerBladeHitInfo , TAG_IDLIST , false > geoVFXTranslationQueries_LastHitInfo; // Offset: 0xA0

        // filter what the geo collision queries hit
        idList < idDestroyerBladeGeometryCollisionCollector * , TAG_IDLIST , false > geoTranslationQueries_CollisionFilters; // Offset: 0xB8

        // filter what the geo vfx collision queries hit
        idList < idDestroyerBladeGeometryCollisionCollector * , TAG_IDLIST , false > geoVFXTranslationQueries_CollisionFilters; // Offset: 0xD0

        // so submit line tests to use instead, if possible query from our left edge to the right edge of the splinter on our left
        idHavokQueryId leftSplinterTranslationQuery_Havok; // Offset: 0xE8

        // query from our left edge to the left edge of the original width
        idHavokQueryId leftEdgeTranslationQuery_Havok; // Offset: 0xF0

        // query from our right edge to the right edge of the original width
        idHavokQueryId rightEdgeTranslationQuery_Havok; // Offset: 0xF8

        // stores the current damage scale for the size and splinterLevel
        float damageScale; // Offset: 0x100

        // what level of splintering does this projectile have
        int splinterLevel; // Offset: 0x104

    }; // Size: 0x108

    struct idAllSplintersData
    {
        // the list of splinters ordered from left to right
        idList < idProjectile_Destroyer::idOneSplinterData , TAG_IDLIST , false > splinterList; // Offset: 0x0

        // how many MS has been spent unsplintering
        float unsplinterMS; // Offset: 0x18

        idVec3 clipModelScale; // Offset: 0x1C

        // records the width of the original projectile
        float originalWidth; // Offset: 0x28

        // records the damage scale of the original projectile
        float originalDamageScale; // Offset: 0x2C

        // track the entities hit this frame so that they can be added to the ignore list at the end of processing
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > frameHitEnts; // Offset: 0x30

        idHavokShapePointer actorClipModel_Havok; // Offset: 0x48

        idHavokShapePointer geoClipModel_Havok; // Offset: 0x50

        idHavokShapePointer geoVFXClipModel_Havok; // Offset: 0x58

    }; // Size: 0x60

    // The destroyer projectile has 'splinter' behavior. This means when it hits geometry or a target that doesn't die, the portion of the projectile that didn't hit anything continues flying but the portions that did are ended, and this can result in the projectile 'splintering' into multiple smaller projectiles. For this the projectile is treated as a sequence of segments, and hit tests are done at the center of each segment along its flight path and this is used to determine which segments continue and which end. If during hit testing a segment or segments are turned off, the remaining contiguous sets of segments become their own new projectiles and continue the behavior. When splintering occurs and a new projectile or projectiles result parms allow control of the size of the resulting projectile(s) and also the angular deflection. If a new projectile results due to a collision on its right side the deflection will be applied in the  left direction, if the collision is on its left the deflection will  be
    idProjectile_Destroyer::splinterParms_t splinterParms; // Offset: 0x3038

    // this is the data for the collection of all splinters resulting from this projectile mainly, a list ordered from left to right all all the splinters
    idProjectile_Destroyer::idAllSplintersData allSplintersData; // Offset: 0x30B0

    // only hit each entity once
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > hitEnts; // Offset: 0x3110

    // ignore the attacker for splinter level 0 and ignore the entity that caused the splinter for each level after that
    idManagedClassPtr < idEntity > ignoreEnt; // Offset: 0x3128

    // so that newly created projectiles don't collide and damage the hit ent again projectile should explode when colliding with slayer
    bool explodeOnSlayer; // Offset: 0x3148

    // projectile should explode when colliding with demon players
    bool explodeOnDemonPlayers; // Offset: 0x3149

    // CONTENTS flags to collide with
    contentsFlags_t collideWithContents; // Offset: 0x314C

    // if true use geo collide with contents flags for geo collision
    bool overrideGeoCollisionContents; // Offset: 0x3150

    // CONTENTS flags to collide with geo
    contentsFlags_t geoCollideWithContents; // Offset: 0x3154

    // allows collisions with non AI to be ignored if they're a certain dist to the side of center {{ units = m }}
    float explodeOnNonAISideDist; // Offset: 0x3158

    // how many MS to wait after launching before collisions with geo can occur
    idTypesafeTime < int , millisecondUnique_t , 1000 > geoNoCollideMS; // Offset: 0x315C

    // manage bounds manually
    idBounds bounds; // Offset: 0x3160

    // for manually scaling when there's no launch weapon to charge the scale values
    idVec3 sizeScale; // Offset: 0x3178

    // currently attached items
    idAttachmentCollection attachments; // Offset: 0x3188

    // list of render models to attach to the splinters (1-1 correspondence with splinters)
    idList < idStrRenderModel , TAG_IDLIST , false > attachRenderModels; // Offset: 0x31A8

    // tags where attachRenderModels should attach (1-1 correspondence with splinters & attach render models)
    idList < idAtomicString , TAG_IDLIST , false > attachTags; // Offset: 0x31C0

    // if true then something has happened and every splinter segment must explode
    bool destroyCompletely; // Offset: 0x31D8

    // destroy for excessive geometry contacts
    bool destroyForGeoContacts; // Offset: 0x31D9

    // entity that causes complete destruction
    idManagedClassPtr < idEntity > destroyedByEnt; // Offset: 0x31E0

    bool shouldForceExplode; // Offset: 0x3200

}; // Size: 0x3208
