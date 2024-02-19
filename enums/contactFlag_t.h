enum contactFlag_t : int
{
    CONTACT_FLAG_NONE = 0,
    CONTACT_FLAG_SUBMODEL_NOT_RESIDENT = 1,
    CONTACT_FLAG_STEPMOVE_ONSOLID = 2,
    CONTACT_FLAG_STEPMOVE_ONGROUND = 4,
    CONTACT_FLAG_CAR_TO_CAR_COLLISION = 8,
    CONTACT_FLAG_OUTSIDE_LARGEST_SUPPORT_TRIANGLE = 16,
    CONTACT_FLAG_SLIDEMOVE_FINISHED = 32
};
