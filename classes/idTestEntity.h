struct idTestEntity : idBloatedEntity
{
    struct testFlags_t
    {
        bool flag1; // Offset: 0x0

        bool flag2; // Offset: 0x0

        bool flag3; // Offset: 0x0

        bool flag4; // Offset: 0x0

        bool flag5; // Offset: 0x0

        bool flag6; // Offset: 0x0

    }; // Size: 0x1

    struct test_t
    {
        // blah
        idVec3 vector; // Offset: 0x0

        // blah
        idAngles angles; // Offset: 0xC

    }; // Size: 0x18

    // click on the value to edit the boolean
    bool bool_; // Offset: 0xB88

    // click on the value to edit the char
    char char_; // Offset: 0xB89

    // click on the value to edit the unsigned char
    unsigned char unsignedchar; // Offset: 0xB8A

    // click on the value to edit the short
    short short_; // Offset: 0xB8C

    // click on the value to edit the unsigned short
    unsigned short unsignedshort; // Offset: 0xB8E

    // click on the value to edit the int
    int int_; // Offset: 0xB90

    // click on the value to edit the unsigned int
    unsigned int unsignedint; // Offset: 0xB94

    // click on the value to edit the long
    long long_; // Offset: 0xB98

    // click on the value to edit the unsigned long
    unsigned long unsignedlong; // Offset: 0xB9C

    // click on the value to edit the float
    float float_; // Offset: 0xBA0

    // click on the value to edit the double
    double double_; // Offset: 0xBA8

    // click on the value to edit the bounded int
    idBoundedInt < 0 , 4 > boundedInt; // Offset: 0xBB0

    // click on the value to edit the bounded float
    idBoundedFloat < 0 , 0 , 1 , 0 > boundedFloat; // Offset: 0xBC0

    // open the vector to edit the x and y component
    idVec2 vec2; // Offset: 0xBD0

    // open the vector to edit the x, y and z component
    idVec3 vec3; // Offset: 0xBD8

    // open the vector to edit the x, y, z and w component
    idVec4 vec4; // Offset: 0xBE4

    // open the matrix to edit the basis vectors
    idMat3 mat3; // Offset: 0xBF4

    // open the angles to edit the pitch, yaw and roll
    idAngles angles; // Offset: 0xC18

    // click on the value to select a flag
    testEnum_t enum_; // Offset: 0xC24

    // open the struct to edit the flags
    idTestEntity::testFlags_t testFlags; // Offset: 0xC28

    // click on the value to edit the string
    idStr string; // Offset: 0xC30

    // click on the value to select a color
    idColor color; // Offset: 0xC60

    // click on the value to select a collison model
    idCollisionModel* collisionModel; // Offset: 0xC70

    // click on the value to select a render model
    idRenderModel* renderModel; // Offset: 0xC78

    // click on the value to select a table
    idDeclTable* table; // Offset: 0xC80

    // click on the value to select a material
    idMaterial2* material; // Offset: 0xC88

    // click on the value to select a sound shader
    idSoundEvent* soundShader; // Offset: 0xC90

    // click on the value to select an entity def
    idDeclEntityDef* testEntityDef; // Offset: 0xC98

    // click on the value to select an fx system
    idDeclFX* fx; // Offset: 0xCA0

    // click on the value to select a particle system
    idDeclParticle* particle; // Offset: 0xCA8

    // click on the value to select an articulated figure
    idDeclAF* af; // Offset: 0xCB0

    // click on the value to select a render parm
    idDeclRenderParm* renderParm; // Offset: 0xCB8

    // click on the value to select a render prog
    idDeclRenderProg* renderProg; // Offset: 0xCC0

    // click on the value to select a damage def
    idDeclDamage* damageDef; // Offset: 0xCC8

    // click on the value to select an inventory def
    idDeclInventory* inventoryDef; // Offset: 0xCD0

    // click on the value to select a weapon def
    idDeclWeapon* weaponDef; // Offset: 0xCD8

    // click on the value to select a projectile def
    idDeclProjectile* projectileDef; // Offset: 0xCE0

    // an array of idManagedClassPtr< idEntity >
    idManagedClassPtr < idEntity > otherEntity; // Offset: 0xCE8

    // an array of integers
    int intArray[10]; // Offset: 0xD08

    // an idList of integers
    idList < int , TAG_IDLIST , false > intList; // Offset: 0xD30

    // an idList of idStr
    idList < idStr , TAG_IDLIST , false > strList; // Offset: 0xD48

    // an idList of idSoundEvent *
    idList < const idSoundEvent * , TAG_IDLIST , false > soundList; // Offset: 0xD60

    // an idList of idSpawnRenderParm
    idList < idSpawnRenderParm , TAG_IDLIST , false > spawnRenderParmBlock; // Offset: 0xD78

    // an array of idSpawnRenderParm
    idSpawnRenderParm spawnRenderParmArray[10]; // Offset: 0xD90

    // blah
    idList < idTestEntity::test_t , TAG_IDLIST , false > structList; // Offset: 0xFC0

    // these variables cannot be initialized because they have no __edit type specifier
    int test1; // Offset: 0xFD8

    float test2; // Offset: 0xFDC

    idVec3 test3; // Offset: 0xFE0

}; // Size: 0xFF0
