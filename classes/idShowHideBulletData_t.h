struct idShowHideBulletData_t
{
    // the names of the bullet joints that can be hidden or shown depending on remaining ammo count
    idList < idAtomicString , TAG_IDLIST , false > collapsibleJointNames; // Offset: 0x0

    // the names of the bullet joints that must always be hidden
    idList < idAtomicString , TAG_IDLIST , false > hideJointNames; // Offset: 0x18

    // if true then the chambered bullet is visible and geometry exists for it
    bool chamberedBulletIsVisible; // Offset: 0x30

    // the names of the bullet meshes that can be hidden or shown depending on remaining ammo count
    idList < idAtomicString , TAG_IDLIST , false > meshNames; // Offset: 0x38

    // if true then use secondary data instead of primary data
    bool overridePrimary; // Offset: 0x50

}; // Size: 0x58
