// idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > >
template <typename _branchType_, typename _type_>
struct idBranchedOptionValue
{
    // idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > >::branchPair_t
    struct branchPair_t
    {
        // the key for a value for this branch
        _branchType_ branchKey; // Offset: 0x0

        // the branch result for said value
        _type_ branchResult; // Offset: 0x4

    }; // Size: 0x8

    // default value used if no branch is found in branchPairs list
    _type_ defaultValue; // Offset: 0x0

    // uses value in here if branch matches current active branch value
    idList < idBranchedOptionValue < _branchType_ , _type_ >::branchPair_t , TAG_IDLIST , false > branchPairs; // Offset: 0x8

    // the cached value we are currently using. EKT: Added typeinfospecifiers to add variable to CopyTypeInfo, but not written/parsed to typeinfo text or exposed in the decl editor. Needed to pass to inherited decls
    _type_ currentValue; // Offset: 0x20

}; // Size: 0x28
