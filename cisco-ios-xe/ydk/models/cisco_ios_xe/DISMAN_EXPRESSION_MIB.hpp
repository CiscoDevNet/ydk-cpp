#ifndef _DISMAN_EXPRESSION_MIB_
#define _DISMAN_EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DISMAN_EXPRESSION_MIB {

class DISMANEXPRESSIONMIB : public ydk::Entity
{
    public:
        DISMANEXPRESSIONMIB();
        ~DISMANEXPRESSIONMIB();

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

        class ExpResource; //type: DISMANEXPRESSIONMIB::ExpResource
        class ExpExpressionTable; //type: DISMANEXPRESSIONMIB::ExpExpressionTable
        class ExpErrorTable; //type: DISMANEXPRESSIONMIB::ExpErrorTable
        class ExpObjectTable; //type: DISMANEXPRESSIONMIB::ExpObjectTable
        class ExpValueTable; //type: DISMANEXPRESSIONMIB::ExpValueTable

        std::shared_ptr<cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpResource> expresource;
        std::shared_ptr<cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable> expexpressiontable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpErrorTable> experrortable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpObjectTable> expobjecttable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpValueTable> expvaluetable;
        
}; // DISMANEXPRESSIONMIB


class DISMANEXPRESSIONMIB::ExpResource : public ydk::Entity
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

}; // DISMANEXPRESSIONMIB::ExpResource


class DISMANEXPRESSIONMIB::ExpExpressionTable : public ydk::Entity
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

        class ExpExpressionEntry; //type: DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry

        ydk::YList expexpressionentry;
        
}; // DISMANEXPRESSIONMIB::ExpExpressionTable


class DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry : public ydk::Entity
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

        ydk::YLeaf expexpressionowner; //type: string
        ydk::YLeaf expexpressionname; //type: string
        ydk::YLeaf expexpression; //type: binary
        ydk::YLeaf expexpressionvaluetype; //type: ExpExpressionValueType
        ydk::YLeaf expexpressioncomment; //type: string
        ydk::YLeaf expexpressiondeltainterval; //type: int32
        ydk::YLeaf expexpressionprefix; //type: string
        ydk::YLeaf expexpressionerrors; //type: uint32
        ydk::YLeaf expexpressionentrystatus; //type: RowStatus
        class ExpExpressionValueType;

}; // DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry


class DISMANEXPRESSIONMIB::ExpErrorTable : public ydk::Entity
{
    public:
        ExpErrorTable();
        ~ExpErrorTable();

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

        class ExpErrorEntry; //type: DISMANEXPRESSIONMIB::ExpErrorTable::ExpErrorEntry

        ydk::YList experrorentry;
        
}; // DISMANEXPRESSIONMIB::ExpErrorTable


class DISMANEXPRESSIONMIB::ExpErrorTable::ExpErrorEntry : public ydk::Entity
{
    public:
        ExpErrorEntry();
        ~ExpErrorEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionname)
        ydk::YLeaf expexpressionname;
        ydk::YLeaf experrortime; //type: uint32
        ydk::YLeaf experrorindex; //type: int32
        ydk::YLeaf experrorcode; //type: ExpErrorCode
        ydk::YLeaf experrorinstance; //type: string
        class ExpErrorCode;

}; // DISMANEXPRESSIONMIB::ExpErrorTable::ExpErrorEntry


class DISMANEXPRESSIONMIB::ExpObjectTable : public ydk::Entity
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

        class ExpObjectEntry; //type: DISMANEXPRESSIONMIB::ExpObjectTable::ExpObjectEntry

        ydk::YList expobjectentry;
        
}; // DISMANEXPRESSIONMIB::ExpObjectTable


class DISMANEXPRESSIONMIB::ExpObjectTable::ExpObjectEntry : public ydk::Entity
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

        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionname)
        ydk::YLeaf expexpressionname;
        ydk::YLeaf expobjectindex; //type: uint32
        ydk::YLeaf expobjectid; //type: string
        ydk::YLeaf expobjectidwildcard; //type: boolean
        ydk::YLeaf expobjectsampletype; //type: ExpObjectSampleType
        ydk::YLeaf expobjectdeltadiscontinuityid; //type: string
        ydk::YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        ydk::YLeaf expobjectdiscontinuityidtype; //type: ExpObjectDiscontinuityIDType
        ydk::YLeaf expobjectconditional; //type: string
        ydk::YLeaf expobjectconditionalwildcard; //type: boolean
        ydk::YLeaf expobjectentrystatus; //type: RowStatus
        class ExpObjectSampleType;
        class ExpObjectDiscontinuityIDType;

}; // DISMANEXPRESSIONMIB::ExpObjectTable::ExpObjectEntry


class DISMANEXPRESSIONMIB::ExpValueTable : public ydk::Entity
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

        class ExpValueEntry; //type: DISMANEXPRESSIONMIB::ExpValueTable::ExpValueEntry

        ydk::YList expvalueentry;
        
}; // DISMANEXPRESSIONMIB::ExpValueTable


class DISMANEXPRESSIONMIB::ExpValueTable::ExpValueEntry : public ydk::Entity
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

        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EXPRESSION_MIB::DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::expexpressionname)
        ydk::YLeaf expexpressionname;
        ydk::YLeaf expvalueinstance; //type: string
        ydk::YLeaf expvaluecounter32val; //type: uint32
        ydk::YLeaf expvalueunsigned32val; //type: uint32
        ydk::YLeaf expvaluetimeticksval; //type: uint32
        ydk::YLeaf expvalueinteger32val; //type: int32
        ydk::YLeaf expvalueipaddressval; //type: string
        ydk::YLeaf expvalueoctetstringval; //type: binary
        ydk::YLeaf expvalueoidval; //type: string
        ydk::YLeaf expvaluecounter64val; //type: uint64

}; // DISMANEXPRESSIONMIB::ExpValueTable::ExpValueEntry

class DISMANEXPRESSIONMIB::ExpExpressionTable::ExpExpressionEntry::ExpExpressionValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf counter32;
        static const ydk::Enum::YLeaf unsigned32;
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf integer32;
        static const ydk::Enum::YLeaf ipAddress;
        static const ydk::Enum::YLeaf octetString;
        static const ydk::Enum::YLeaf objectId;
        static const ydk::Enum::YLeaf counter64;

};

class DISMANEXPRESSIONMIB::ExpErrorTable::ExpErrorEntry::ExpErrorCode : public ydk::Enum
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

};

class DISMANEXPRESSIONMIB::ExpObjectTable::ExpObjectEntry::ExpObjectSampleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;
        static const ydk::Enum::YLeaf changedValue;

};

class DISMANEXPRESSIONMIB::ExpObjectTable::ExpObjectEntry::ExpObjectDiscontinuityIDType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;
        static const ydk::Enum::YLeaf dateAndTime;

};


}
}

#endif /* _DISMAN_EXPRESSION_MIB_ */

