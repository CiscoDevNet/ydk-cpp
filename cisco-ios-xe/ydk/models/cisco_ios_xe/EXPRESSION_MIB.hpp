#ifndef _EXPRESSION_MIB_
#define _EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace EXPRESSION_MIB {

class ExpressionMib : public ydk::Entity
{
    public:
        ExpressionMib();
        ~ExpressionMib();

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

        class Expresource; //type: ExpressionMib::Expresource
        class Expnames; //type: ExpressionMib::Expnames
        class Expnametable; //type: ExpressionMib::Expnametable
        class Expexpressiontable; //type: ExpressionMib::Expexpressiontable
        class Expobjecttable; //type: ExpressionMib::Expobjecttable
        class Expvaluetable; //type: ExpressionMib::Expvaluetable

        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expexpressiontable> expexpressiontable;
        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expnames> expnames;
        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expnametable> expnametable;
        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expobjecttable> expobjecttable;
        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expresource> expresource;
        std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expvaluetable> expvaluetable;
        
}; // ExpressionMib


class ExpressionMib::Expresource : public ydk::Entity
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

}; // ExpressionMib::Expresource


class ExpressionMib::Expnames : public ydk::Entity
{
    public:
        Expnames();
        ~Expnames();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expnamelastchange; //type: uint32
        ydk::YLeaf expnamehighestindex; //type: uint32

}; // ExpressionMib::Expnames


class ExpressionMib::Expnametable : public ydk::Entity
{
    public:
        Expnametable();
        ~Expnametable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Expnameentry; //type: ExpressionMib::Expnametable::Expnameentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry> > expnameentry;
        
}; // ExpressionMib::Expnametable


class ExpressionMib::Expnametable::Expnameentry : public ydk::Entity
{
    public:
        Expnameentry();
        ~Expnameentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expname; //type: binary
        ydk::YLeaf expexpressionindex; //type: uint32
        ydk::YLeaf expnamestatus; //type: Rowstatus

}; // ExpressionMib::Expnametable::Expnameentry


class ExpressionMib::Expexpressiontable : public ydk::Entity
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

        class Expexpressionentry; //type: ExpressionMib::Expexpressiontable::Expexpressionentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expexpressiontable::Expexpressionentry> > expexpressionentry;
        
}; // ExpressionMib::Expexpressiontable


class ExpressionMib::Expexpressiontable::Expexpressionentry : public ydk::Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expexpressionname; //type: binary
        ydk::YLeaf expexpression; //type: binary
        ydk::YLeaf expexpressionvaluetype; //type: Expexpressionvaluetype
        ydk::YLeaf expexpressioncomment; //type: string
        ydk::YLeaf expexpressiondeltainterval; //type: int32
        ydk::YLeaf expexpressionprefix; //type: string
        ydk::YLeaf expexpressionerrors; //type: uint32
        ydk::YLeaf expexpressionerrortime; //type: uint32
        ydk::YLeaf expexpressionerrorindex; //type: int32
        ydk::YLeaf expexpressionerror; //type: Expexpressionerror
        ydk::YLeaf expexpressioninstance; //type: string
        ydk::YLeaf expexpressionowner; //type: string
        class Expexpressionvaluetype;
        class Expexpressionerror;

}; // ExpressionMib::Expexpressiontable::Expexpressionentry


class ExpressionMib::Expobjecttable : public ydk::Entity
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

        class Expobjectentry; //type: ExpressionMib::Expobjecttable::Expobjectentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expobjecttable::Expobjectentry> > expobjectentry;
        
}; // ExpressionMib::Expobjecttable


class ExpressionMib::Expobjecttable::Expobjectentry : public ydk::Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expobjectindex; //type: uint32
        ydk::YLeaf expobjectid; //type: string
        ydk::YLeaf expobjectidwildcard; //type: boolean
        ydk::YLeaf expobjectsampletype; //type: Expobjectsampletype
        ydk::YLeaf expobjectdeltadiscontinuityid; //type: string
        ydk::YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        ydk::YLeaf expobjectdiscontinuityidtype; //type: Expobjectdiscontinuityidtype
        ydk::YLeaf expobjectconditional; //type: string
        ydk::YLeaf expobjectconditionalwildcard; //type: boolean
        ydk::YLeaf expobjectstatus; //type: Rowstatus
        class Expobjectsampletype;
        class Expobjectdiscontinuityidtype;

}; // ExpressionMib::Expobjecttable::Expobjectentry


class ExpressionMib::Expvaluetable : public ydk::Entity
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

        class Expvalueentry; //type: ExpressionMib::Expvaluetable::Expvalueentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expvaluetable::Expvalueentry> > expvalueentry;
        
}; // ExpressionMib::Expvaluetable


class ExpressionMib::Expvaluetable::Expvalueentry : public ydk::Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        ydk::YLeaf expexpressionindex;
        ydk::YLeaf expvalueinstance; //type: string
        ydk::YLeaf expvaluecounter32val; //type: uint32
        ydk::YLeaf expvalueunsigned32val; //type: uint32
        ydk::YLeaf expvalueinteger32val; //type: int32
        ydk::YLeaf expvalueipaddressval; //type: string
        ydk::YLeaf expvalueoctetstringval; //type: binary
        ydk::YLeaf expvalueoidval; //type: string
        ydk::YLeaf expvaluecounter64val; //type: uint64

}; // ExpressionMib::Expvaluetable::Expvalueentry

class ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype : public ydk::Enum
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

};

class ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror : public ydk::Enum
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

class ExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class ExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;

};


}
}

#endif /* _EXPRESSION_MIB_ */

