#ifndef _DISMAN_EXPRESSION_MIB_
#define _DISMAN_EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace DISMAN_EXPRESSION_MIB {

class DismanExpressionMib : public Entity
{
    public:
        DismanExpressionMib();
        ~DismanExpressionMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class DismanExpressionMib::Expresource : public Entity
{
    public:
        Expresource();
        ~Expresource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expresourcedeltaminimum; //type: int32
        YLeaf expresourcedeltawildcardinstancemaximum; //type: uint32
        YLeaf expresourcedeltawildcardinstances; //type: uint32
        YLeaf expresourcedeltawildcardinstanceshigh; //type: uint32
        YLeaf expresourcedeltawildcardinstanceresourcelacks; //type: uint32

}; // DismanExpressionMib::Expresource


class DismanExpressionMib::Expexpressiontable : public Entity
{
    public:
        Expexpressiontable();
        ~Expexpressiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Expexpressionentry; //type: DismanExpressionMib::Expexpressiontable::Expexpressionentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry> > expexpressionentry;
        
}; // DismanExpressionMib::Expexpressiontable


class DismanExpressionMib::Expexpressiontable::Expexpressionentry : public Entity
{
    public:
        Expexpressionentry();
        ~Expexpressionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expexpressionowner; //type: string
        YLeaf expexpressionname; //type: string
        YLeaf expexpression; //type: binary
        YLeaf expexpressionvaluetype; //type: ExpexpressionvaluetypeEnum
        YLeaf expexpressioncomment; //type: string
        YLeaf expexpressiondeltainterval; //type: int32
        YLeaf expexpressionprefix; //type: string
        YLeaf expexpressionerrors; //type: uint32
        YLeaf expexpressionentrystatus; //type: RowstatusEnum
        class ExpexpressionvaluetypeEnum;

}; // DismanExpressionMib::Expexpressiontable::Expexpressionentry


class DismanExpressionMib::Experrortable : public Entity
{
    public:
        Experrortable();
        ~Experrortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experrorentry; //type: DismanExpressionMib::Experrortable::Experrorentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Experrortable::Experrorentry> > experrorentry;
        
}; // DismanExpressionMib::Experrortable


class DismanExpressionMib::Experrortable::Experrorentry : public Entity
{
    public:
        Experrorentry();
        ~Experrorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
        YLeaf expexpressionname;
        YLeaf experrortime; //type: uint32
        YLeaf experrorindex; //type: int32
        YLeaf experrorcode; //type: ExperrorcodeEnum
        YLeaf experrorinstance; //type: string
        class ExperrorcodeEnum;

}; // DismanExpressionMib::Experrortable::Experrorentry


class DismanExpressionMib::Expobjecttable : public Entity
{
    public:
        Expobjecttable();
        ~Expobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Expobjectentry; //type: DismanExpressionMib::Expobjecttable::Expobjectentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expobjecttable::Expobjectentry> > expobjectentry;
        
}; // DismanExpressionMib::Expobjecttable


class DismanExpressionMib::Expobjecttable::Expobjectentry : public Entity
{
    public:
        Expobjectentry();
        ~Expobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
        YLeaf expexpressionname;
        YLeaf expobjectindex; //type: uint32
        YLeaf expobjectid; //type: string
        YLeaf expobjectidwildcard; //type: boolean
        YLeaf expobjectsampletype; //type: ExpobjectsampletypeEnum
        YLeaf expobjectdeltadiscontinuityid; //type: string
        YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        YLeaf expobjectdiscontinuityidtype; //type: ExpobjectdiscontinuityidtypeEnum
        YLeaf expobjectconditional; //type: string
        YLeaf expobjectconditionalwildcard; //type: boolean
        YLeaf expobjectentrystatus; //type: RowstatusEnum
        class ExpobjectsampletypeEnum;
        class ExpobjectdiscontinuityidtypeEnum;

}; // DismanExpressionMib::Expobjecttable::Expobjectentry


class DismanExpressionMib::Expvaluetable : public Entity
{
    public:
        Expvaluetable();
        ~Expvaluetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Expvalueentry; //type: DismanExpressionMib::Expvaluetable::Expvalueentry

        std::vector<std::shared_ptr<DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expvaluetable::Expvalueentry> > expvalueentry;
        
}; // DismanExpressionMib::Expvaluetable


class DismanExpressionMib::Expvaluetable::Expvalueentry : public Entity
{
    public:
        Expvalueentry();
        ~Expvalueentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionowner)
        YLeaf expexpressionowner;
        //type: string (refers to DISMAN_EXPRESSION_MIB::DismanExpressionMib::Expexpressiontable::Expexpressionentry::expexpressionname)
        YLeaf expexpressionname;
        YLeaf expvalueinstance; //type: string
        YLeaf expvaluecounter32val; //type: uint32
        YLeaf expvalueunsigned32val; //type: uint32
        YLeaf expvaluetimeticksval; //type: uint32
        YLeaf expvalueinteger32val; //type: int32
        YLeaf expvalueipaddressval; //type: string
        YLeaf expvalueoctetstringval; //type: binary
        YLeaf expvalueoidval; //type: string
        YLeaf expvaluecounter64val; //type: uint64

}; // DismanExpressionMib::Expvaluetable::Expvalueentry

class DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf counter32;
        static const Enum::YLeaf unsigned32;
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf integer32;
        static const Enum::YLeaf ipAddress;
        static const Enum::YLeaf octetString;
        static const Enum::YLeaf objectId;
        static const Enum::YLeaf counter64;

};

class DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf invalidSyntax;
        static const Enum::YLeaf undefinedObjectIndex;
        static const Enum::YLeaf unrecognizedOperator;
        static const Enum::YLeaf unrecognizedFunction;
        static const Enum::YLeaf invalidOperandType;
        static const Enum::YLeaf unmatchedParenthesis;
        static const Enum::YLeaf tooManyWildcardValues;
        static const Enum::YLeaf recursion;
        static const Enum::YLeaf deltaTooShort;
        static const Enum::YLeaf resourceUnavailable;
        static const Enum::YLeaf divideByZero;

};

class DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absoluteValue;
        static const Enum::YLeaf deltaValue;
        static const Enum::YLeaf changedValue;

};

class DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf timeStamp;
        static const Enum::YLeaf dateAndTime;

};


}
}

#endif /* _DISMAN_EXPRESSION_MIB_ */

