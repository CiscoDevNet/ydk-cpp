#ifndef _EXPRESSION_MIB_
#define _EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace EXPRESSION_MIB {

class EXPRESSIONMIB : public ydk::Entity
{
    public:
        EXPRESSIONMIB();
        ~EXPRESSIONMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class ExpResource; //type: EXPRESSIONMIB::ExpResource
        class ExpNames; //type: EXPRESSIONMIB::ExpNames
        class ExpNameTable; //type: EXPRESSIONMIB::ExpNameTable
        class ExpExpressionTable; //type: EXPRESSIONMIB::ExpExpressionTable
        class ExpObjectTable; //type: EXPRESSIONMIB::ExpObjectTable
        class ExpValueTable; //type: EXPRESSIONMIB::ExpValueTable

        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpResource> expresource;
        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpNames> expnames;
        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpNameTable> expnametable;
        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpExpressionTable> expexpressiontable;
        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpObjectTable> expobjecttable;
        std::shared_ptr<cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpValueTable> expvaluetable;
        
}; // EXPRESSIONMIB


class EXPRESSIONMIB::ExpResource : public ydk::Entity
{
    public:
        ExpResource();
        ~ExpResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expresourcedeltaminimum; //type: int32
        ydk::YLeaf expresourcedeltawildcardinstancemaximum; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstances; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstanceshigh; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstanceresourcelacks; //type: uint32

}; // EXPRESSIONMIB::ExpResource


class EXPRESSIONMIB::ExpNames : public ydk::Entity
{
    public:
        ExpNames();
        ~ExpNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expnamelastchange; //type: uint32
        ydk::YLeaf expnamehighestindex; //type: uint32

}; // EXPRESSIONMIB::ExpNames


class EXPRESSIONMIB::ExpNameTable : public ydk::Entity
{
    public:
        ExpNameTable();
        ~ExpNameTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpNameEntry; //type: EXPRESSIONMIB::ExpNameTable::ExpNameEntry

        ydk::YList expnameentry;
        
}; // EXPRESSIONMIB::ExpNameTable


class EXPRESSIONMIB::ExpNameTable::ExpNameEntry : public ydk::Entity
{
    public:
        ExpNameEntry();
        ~ExpNameEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expname; //type: binary
        ydk::YLeaf expexpressionindex; //type: uint32
        ydk::YLeaf expnamestatus; //type: RowStatus

}; // EXPRESSIONMIB::ExpNameTable::ExpNameEntry


class EXPRESSIONMIB::ExpExpressionTable : public ydk::Entity
{
    public:
        ExpExpressionTable();
        ~ExpExpressionTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpExpressionEntry; //type: EXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry

        ydk::YList expexpressionentry;
        
}; // EXPRESSIONMIB::ExpExpressionTable


class EXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry : public ydk::Entity
{
    public:
        ExpExpressionEntry();
        ~ExpExpressionEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpNameTable::ExpNameEntry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expexpressionname; //type: binary
        ydk::YLeaf expexpression; //type: binary
        ydk::YLeaf expexpressionvaluetype; //type: ExpExpressionValueType
        ydk::YLeaf expexpressioncomment; //type: string
        ydk::YLeaf expexpressiondeltainterval; //type: int32
        ydk::YLeaf expexpressionprefix; //type: string
        ydk::YLeaf expexpressionerrors; //type: uint32
        ydk::YLeaf expexpressionerrortime; //type: uint32
        ydk::YLeaf expexpressionerrorindex; //type: int32
        ydk::YLeaf expexpressionerror; //type: ExpExpressionError
        ydk::YLeaf expexpressioninstance; //type: string
        ydk::YLeaf expexpressionowner; //type: string
        class ExpExpressionValueType;
        class ExpExpressionError;

}; // EXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry


class EXPRESSIONMIB::ExpObjectTable : public ydk::Entity
{
    public:
        ExpObjectTable();
        ~ExpObjectTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpObjectEntry; //type: EXPRESSIONMIB::ExpObjectTable::ExpObjectEntry

        ydk::YList expobjectentry;
        
}; // EXPRESSIONMIB::ExpObjectTable


class EXPRESSIONMIB::ExpObjectTable::ExpObjectEntry : public ydk::Entity
{
    public:
        ExpObjectEntry();
        ~ExpObjectEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpNameTable::ExpNameEntry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expobjectindex; //type: uint32
        ydk::YLeaf expobjectid; //type: string
        ydk::YLeaf expobjectidwildcard; //type: boolean
        ydk::YLeaf expobjectsampletype; //type: ExpObjectSampleType
        ydk::YLeaf expobjectdeltadiscontinuityid; //type: string
        ydk::YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        ydk::YLeaf expobjectdiscontinuityidtype; //type: ExpObjectDiscontinuityIDType
        ydk::YLeaf expobjectconditional; //type: string
        ydk::YLeaf expobjectconditionalwildcard; //type: boolean
        ydk::YLeaf expobjectstatus; //type: RowStatus
        class ExpObjectSampleType;
        class ExpObjectDiscontinuityIDType;

}; // EXPRESSIONMIB::ExpObjectTable::ExpObjectEntry


class EXPRESSIONMIB::ExpValueTable : public ydk::Entity
{
    public:
        ExpValueTable();
        ~ExpValueTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpValueEntry; //type: EXPRESSIONMIB::ExpValueTable::ExpValueEntry

        ydk::YList expvalueentry;
        
}; // EXPRESSIONMIB::ExpValueTable


class EXPRESSIONMIB::ExpValueTable::ExpValueEntry : public ydk::Entity
{
    public:
        ExpValueEntry();
        ~ExpValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::EXPRESSION_MIB::EXPRESSIONMIB::ExpNameTable::ExpNameEntry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expvalueinstance; //type: string
        ydk::YLeaf expvaluecounter32val; //type: uint32
        ydk::YLeaf expvalueunsigned32val; //type: uint32
        ydk::YLeaf expvalueinteger32val; //type: int32
        ydk::YLeaf expvalueipaddressval; //type: string
        ydk::YLeaf expvalueoctetstringval; //type: binary
        ydk::YLeaf expvalueoidval; //type: string
        ydk::YLeaf expvaluecounter64val; //type: uint64

}; // EXPRESSIONMIB::ExpValueTable::ExpValueEntry

class EXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::ExpExpressionValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf counter32;
        static const ydk::Enum::YLeaf unsignedOrGauge32;
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf integer32;
        static const ydk::Enum::YLeaf ipAddress;
        static const ydk::Enum::YLeaf octetString;
        static const ydk::Enum::YLeaf objectId;
        static const ydk::Enum::YLeaf counter64;

        static int get_enum_value(const std::string & name) {
            if (name == "counter32") return 1;
            if (name == "unsignedOrGauge32") return 2;
            if (name == "timeTicks") return 3;
            if (name == "integer32") return 4;
            if (name == "ipAddress") return 5;
            if (name == "octetString") return 6;
            if (name == "objectId") return 7;
            if (name == "counter64") return 8;
            return -1;
        }
};

class EXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::ExpExpressionError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalidSyntax;
        static const ydk::Enum::YLeaf undefinedObjectIndex;
        static const ydk::Enum::YLeaf unrecognizedOperator;
        static const ydk::Enum::YLeaf unrecognizedFunction;
        static const ydk::Enum::YLeaf invalidOperandType;
        static const ydk::Enum::YLeaf unmatchedParenthesis;
        static const ydk::Enum::YLeaf tooManyWildcardValues;
        static const ydk::Enum::YLeaf recursion;
        static const ydk::Enum::YLeaf deltaTooShort;
        static const ydk::Enum::YLeaf resourceUnavailable;
        static const ydk::Enum::YLeaf divideByZero;

        static int get_enum_value(const std::string & name) {
            if (name == "invalidSyntax") return 1;
            if (name == "undefinedObjectIndex") return 2;
            if (name == "unrecognizedOperator") return 3;
            if (name == "unrecognizedFunction") return 4;
            if (name == "invalidOperandType") return 5;
            if (name == "unmatchedParenthesis") return 6;
            if (name == "tooManyWildcardValues") return 7;
            if (name == "recursion") return 8;
            if (name == "deltaTooShort") return 9;
            if (name == "resourceUnavailable") return 10;
            if (name == "divideByZero") return 11;
            return -1;
        }
};

class EXPRESSIONMIB::ExpObjectTable::ExpObjectEntry::ExpObjectSampleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

        static int get_enum_value(const std::string & name) {
            if (name == "absoluteValue") return 1;
            if (name == "deltaValue") return 2;
            return -1;
        }
};

class EXPRESSIONMIB::ExpObjectTable::ExpObjectEntry::ExpObjectDiscontinuityIDType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;

        static int get_enum_value(const std::string & name) {
            if (name == "timeTicks") return 1;
            if (name == "timeStamp") return 2;
            return -1;
        }
};


}
}

#endif /* _EXPRESSION_MIB_ */

