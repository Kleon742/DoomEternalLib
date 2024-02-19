struct idSWFWidget_WheelData
{
    struct wedgeAdjustment_t
    {
        // Wedge to adjust.
        int wedgeIndex; // Offset: 0x0

        // Wedge Adjustment Data.
        idVec2 offset; // Offset: 0x4

        // which frame do we use for selection highlight.
        int selectionFrame; // Offset: 0xC

    }; // Size: 0x10

    struct wheelDefinition_t
    {
        // the angle to place the first item
        float startingAngle; // Offset: 0x0

        // the number of wedges in this wheel
        int numberWedges; // Offset: 0x4

        // the name of the UI component that this wheel uses for its elements
        idStr wedgeUIComponent; // Offset: 0x8

        // how far from 0,0 to place the wedges
        float wedgeOffset; // Offset: 0x38

        // how far from 0,0 to move the wedge when selected
        float wedgeOffsetSelected; // Offset: 0x3C

        // how far from the wedges 0,0 to move the weapon info item
        float wedgeWeaponInfoOffset; // Offset: 0x40

        // The duration of the wedge move animation. Only works when "useSimpleWedgeTransforms" is true
        idTypesafeTime < int , millisecondUnique_t , 1000 > selectionMoveDurationMS; // Offset: 0x44

    }; // Size: 0x48

    // Number of wedges on the wheel.
    int numWedges; // Offset: 0x0

    // Minimum number of wedges which can be set.
    int minWedges; // Offset: 0x4

    // Maximum number of wedges which can be set.
    int maxWedges; // Offset: 0x8

    // Increment for adjusting the number of wedges.
    int wedgeNumStep; // Offset: 0xC

    // radius of the wheel.
    float radius; // Offset: 0x10

    // rootWidget of the wheel.
    idStr rootWidget; // Offset: 0x18

    // Use simple positioning and rotation rather than trying to calculate absolute centers and wedge positions
    bool useSimpleWedgeTransforms; // Offset: 0x48

    // The distance, in pixels, to move a wedge when it is selected. Only works when "useSimpleWedgeTransforms" is true
    float selectionMoveValue; // Offset: 0x4C

    // The duration of the wedge move animation. Only works when "useSimpleWedgeTransforms" is true
    idTypesafeTime < int , millisecondUnique_t , 1000 > selectionMoveDurationMS; // Offset: 0x50

    // Do we adjust whole Data portion or just icon.
    bool adjustIconOnly; // Offset: 0x54

    // Do we allow the wheel to set -1 as the current selection index
    bool requireValidSelection; // Offset: 0x55

    // Adjustments to Data Placement.
    idList < idSWFWidget_WheelData::wedgeAdjustment_t , TAG_IDLIST , false > adjustments; // Offset: 0x58

    // a list of the different wheel form factors we use.
    idList < idSWFWidget_WheelData::wheelDefinition_t , TAG_IDLIST , false > wheelDefinitions; // Offset: 0x70

}; // Size: 0x88
