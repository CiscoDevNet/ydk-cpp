#ifndef _DISMAN_EXPRESSION_MIB_
#define _DISMAN_EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DISMAN_EXPRESSION_MIB {

class DismanExpressionMib : public ydk::Entity
{
    public:
        DismanExpressionMib();
        ~DismanExpressionMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Expresource; //type: DismanExpressionMib::Expresource
        class Expexpressiontable; //type: DismanExpressionMib::Expexpressiontable
        class Experrortable; //type: DismanExpressionMib::Experrortable
        class Expobjecttable; //type: DismanExpressionMib::Expobjecttable
        class Expvaluetable; //type: DismanExpressionMib::Expvaluetable

        std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Experrortable> experrortable;
        std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable> expexpressiontable;
        std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expobjecttable> expobjecttable;
        std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expresource> expresource;
        std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expvaluetable> expvaluetable;
        
}; // DismanExpressionMib


class DismanExpressionMib::Expresource : public ydk::Entity
{
    public:
        Expresource();
        ~Expresource();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expresourcedeltaminimum; //type: int32
        ydk::YLeaf expresourcedeltawildcardinstancemaximum; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstances; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstanceshigh; //type: uint32
        ydk::YLeaf expresourcedeltawildcardinstanceresourcelacks; //type: uint32

}; // DismanExpressionMib::Expresource


class DismanExpressionMib::Expexpressiontable : public ydk::Entity
{
    public:
        Expexpressiontable();
        ~Expexpressiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Expexpressionentry; //type: DismanExpressionMib::Expexpressiontable::Expexpressionentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry> > expexpressionentry;
        
}; // DismanExpressionMib::Expexpressiontable


class DismanExpressionMib::Expexpressiontable::Expexpressionentry : public ydk::Entity
{
    public:
        Expexpressionentry();
        ~Expexpressionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expexpressionowner; //type: string
        ydk::YLeaf expexpressionname; //type: string
        ydk::YLeaf expexpression; //type: binary
        ydk::YLeaf expexpressionvaluetype; //type: Expexpressionvaluetype
        ydk::YLeaf expexpressioncomment; //type: string
        ydk::YLeaf expexpressiondeltainterval; //type: int32
        ydk::YLeaf expexpressionprefix; //type: string
        ydk::YLeaf expexpressionerrors; //type: uint32
        ydk::YLeaf expexpressionentrystatus; //type: Rowstatus
        class Expexpressionvaluetype;

}; // DismanExpressionMib::Expexpressiontable::Expexpressionentry


class DismanExpressionMib::Experrortable : public ydk::Entity
{
    public:
        Experrortable();
        ~Experrortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experrorentry; //type: DismanExpressionMib::Experrortable::Experrorentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Experrortable::Experrorentry> > experrorentry;
        
}; // DismanExpressionMib::Experrortable


class DismanExpressionMib::Experrortable::Experrorentry : public ydk::Entity
{
    public:
        Experrorentry();
        ~Experrorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
        ydk::YLeaf expexpressionname;
        ydk::YLeaf experrortime; //type: uint32
        ydk::YLeaf experrorindex; //type: int32
        ydk::YLeaf experrorcode; //type: Experrorcode
        ydk::YLeaf experrorinstance; //type: string
        class Experrorcode;

}; // DismanExpressionMib::Experrortable::Experrorentry


class DismanExpressionMib::Expobjecttable : public ydk::Entity
{
    public:
        Expobjecttable();
        ~Expobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Expobjectentry; //type: DismanExpressionMib::Expobjecttable::Expobjectentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expobjecttable::Expobjectentry> > expobjectentry;
        
}; // DismanExpressionMib::Expobjecttable


class DismanExpressionMib::Expobjecttable::Expobjectentry : public ydk::Entity
{
    public:
        Expobjectentry();
        ~Expobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
        ydk::YLeaf expexpressionname;
        ydk::YLeaf expobjectindex; //type: uint32
        ydk::YLeaf expobjectid; //type: string
        ydk::YLeaf expobjectidwildcard; //type: boolean
        ydk::YLeaf expobjectsampletype; //type: Expobjectsampletype
        ydk::YLeaf expobjectdeltadiscontinuityid; //type: string
        ydk::YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        ydk::YLeaf expobjectdiscontinuityidtype; //type: Expobjectdiscontinuityidtype
        ydk::YLeaf expobjectconditional; //type: string
        ydk::YLeaf expobjectconditionalwildcard; //type: boolean
        ydk::YLeaf expobjectentrystatus; //type: Rowstatus
        class Expobjectsampletype;
        class Expobjectdiscontinuityidtype;

}; // DismanExpressionMib::Expobjecttable::Expobjectentry


class DismanExpressionMib::Expvaluetable : public ydk::Entity
{
    public:
        Expvaluetable();
        ~Expvaluetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Expvalueentry; //type: DismanExpressionMib::Expvaluetable::Expvalueentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expvaluetable::Expvalueentry> > expvalueentry;
        
}; // DismanExpressionMib::Expvaluetable


class DismanExpressionMib::Expvaluetable::Expvalueentry : public ydk::Entity
{
    public:
        Expvalueentry();
        ~Expvalueentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        ydk::YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
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

}; // DismanExpressionMib::Expvaluetable::Expvalueentry

class DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype : public ydk::Enum
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

class DismanExpressionMib::Experrortable::Experrorentry::Experrorcode : public ydk::Enum
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

class DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;
        static const ydk::Enum::YLeaf changedValue;

};

class DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;
        static const ydk::Enum::YLeaf dateAndTime;

};


}
}

#endif /* _DISMAN_EXPRESSION_MIB_ */

