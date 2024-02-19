struct Json
{
    enum ValueType : int
    {
        nullValue = 0,
        intValue = 1,
        uintValue = 2,
        realValue = 3,
        stringValue = 4,
        booleanValue = 5,
        arrayValue = 6,
        objectValue = 7,
        serializableValue = 8
    };

    enum CommentPlacement : int
    {
        commentBefore = 0,
        commentAfterOnSameLine = 1,
        commentAfter = 2,
        numberOfCommentPlacement = 3
    };

    struct Value
    {
        struct CZString
        {
            enum DuplicationPolicy : int
            {
                noDuplication = 0,
                duplicate = 1,
                duplicateOnCopy = 2
            };

            char* cstr_; // Offset: 0x0

            int index_; // Offset: 0x8

        }; // Size: 0x10

        struct CommentInfo
        {
            char* comment_; // Offset: 0x0

        }; // Size: 0x8

        struct ValueHolder
        {
            // Intint_; UIntuint_;
            long long int64_; // Offset: 0x0

            unsigned long long uint64_; // Offset: 0x0

            double real_; // Offset: 0x0

            bool bool_; // Offset: 0x0

            char* string_; // Offset: 0x0

            Json::Value::idKeyValuePairMgr < Json::Value::CZString , Json::Value >* map_; // Offset: 0x0

            SerializableValue* ser_; // Offset: 0x0

        }; // Size: 0x8

        // Json::Value::idKeyValuePairMgr < Json::Value::CZString , Json::Value >
        template <typename keyType, typename valueType>
        struct idKeyValuePairMgr
        {
            idList < valueType::idKeyValuePairMgr < keyType , valueType >::pair_type * , TAG_IDLIST , false > keyValues; // Offset: 0x0

        }; // Size: 0x18

        typedef idList < idStr > Members;

        typedef unsigned int ArrayIndex;

        typedef Json::Value::idKeyValuePairMgr < Json::Value::CZString , Json::Value > ObjectValues;

        typedef Json::Value::idKeyValuePair < const char * , const Json::Value * > MemberValueView;

        typedef idList < Json::Value::MemberValueView > MemberValuesView;

        Json::Value::ValueHolder value_; // Offset: 0x0

        Json::ValueType type_; // Offset: 0x8

        bool allocated_; // Offset: 0xC

        Json::Value::CommentInfo* comments_; // Offset: 0x10

    }; // Size: 0x18

    struct StaticString
    {
        char* str_; // Offset: 0x0

    }; // Size: 0x8

    struct ValueAllocator
    {
        enum enum_7400 : int
        {
            unknown = -1
        };

    }; // Size: 0x8

    typedef int Int;

    typedef unsigned int UInt;

    typedef long long Int64;

    typedef unsigned long long UInt64;

}; // Size: 0x0
