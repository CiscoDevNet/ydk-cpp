#ifndef _EXPRESSION_MIB_
#define _EXPRESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace EXPRESSION_MIB {

class ExpressionMib : public Entity
{
    public:
        ExpressionMib();
        ~ExpressionMib();

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


class ExpressionMib::Expresource : public Entity
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

}; // ExpressionMib::Expresource


class ExpressionMib::Expnames : public Entity
{
    public:
        Expnames();
        ~Expnames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expnamelastchange; //type: uint32
        YLeaf expnamehighestindex; //type: uint32

}; // ExpressionMib::Expnames


class ExpressionMib::Expnametable : public Entity
{
    public:
        Expnametable();
        ~Expnametable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Expnameentry; //type: ExpressionMib::Expnametable::Expnameentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry> > expnameentry;
        
}; // ExpressionMib::Expnametable


class ExpressionMib::Expnametable::Expnameentry : public Entity
{
    public:
        Expnameentry();
        ~Expnameentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expname; //type: binary
        YLeaf expexpressionindex; //type: uint32
        YLeaf expnamestatus; //type: RowstatusEnum

}; // ExpressionMib::Expnametable::Expnameentry


class ExpressionMib::Expexpressiontable : public Entity
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

        class Expexpressionentry; //type: ExpressionMib::Expexpressiontable::Expexpressionentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expexpressiontable::Expexpressionentry> > expexpressionentry;
        
}; // ExpressionMib::Expexpressiontable


class ExpressionMib::Expexpressiontable::Expexpressionentry : public Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        YLeaf expexpressionindex;
        YLeaf expexpressionname; //type: binary
        YLeaf expexpression; //type: binary
        YLeaf expexpressionvaluetype; //type: ExpexpressionvaluetypeEnum
        YLeaf expexpressioncomment; //type: string
        YLeaf expexpressiondeltainterval; //type: int32
        YLeaf expexpressionprefix; //type: string
        YLeaf expexpressionerrors; //type: uint32
        YLeaf expexpressionerrortime; //type: uint32
        YLeaf expexpressionerrorindex; //type: int32
        YLeaf expexpressionerror; //type: ExpexpressionerrorEnum
        YLeaf expexpressioninstance; //type: string
        YLeaf expexpressionowner; //type: string
        class ExpexpressionvaluetypeEnum;
        class ExpexpressionerrorEnum;

}; // ExpressionMib::Expexpressiontable::Expexpressionentry


class ExpressionMib::Expobjecttable : public Entity
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

        class Expobjectentry; //type: ExpressionMib::Expobjecttable::Expobjectentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expobjecttable::Expobjectentry> > expobjectentry;
        
}; // ExpressionMib::Expobjecttable


class ExpressionMib::Expobjecttable::Expobjectentry : public Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        YLeaf expexpressionindex;
        YLeaf expobjectindex; //type: uint32
        YLeaf expobjectid; //type: string
        YLeaf expobjectidwildcard; //type: boolean
        YLeaf expobjectsampletype; //type: ExpobjectsampletypeEnum
        YLeaf expobjectdeltadiscontinuityid; //type: string
        YLeaf expobjectdiscontinuityidwildcard; //type: boolean
        YLeaf expobjectdiscontinuityidtype; //type: ExpobjectdiscontinuityidtypeEnum
        YLeaf expobjectconditional; //type: string
        YLeaf expobjectconditionalwildcard; //type: boolean
        YLeaf expobjectstatus; //type: RowstatusEnum
        class ExpobjectsampletypeEnum;
        class ExpobjectdiscontinuityidtypeEnum;

}; // ExpressionMib::Expobjecttable::Expobjectentry


class ExpressionMib::Expvaluetable : public Entity
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

        class Expvalueentry; //type: ExpressionMib::Expvaluetable::Expvalueentry

        std::vector<std::shared_ptr<EXPRESSION_MIB::ExpressionMib::Expvaluetable::Expvalueentry> > expvalueentry;
        
}; // ExpressionMib::Expvaluetable


class ExpressionMib::Expvaluetable::Expvalueentry : public Entity
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

        //type: uint32 (refers to EXPRESSION_MIB::ExpressionMib::Expnametable::Expnameentry::expexpressionindex)
        YLeaf expexpressionindex;
        YLeaf expvalueinstance; //type: string
        YLeaf expvaluecounter32val; //type: uint32
        YLeaf expvalueunsigned32val; //type: uint32
        YLeaf expvalueinteger32val; //type: int32
        YLeaf expvalueipaddressval; //type: string
        YLeaf expvalueoctetstringval; //type: binary
        YLeaf expvalueoidval; //type: string
        YLeaf expvaluecounter64val; //type: uint64

}; // ExpressionMib::Expvaluetable::Expvalueentry

class ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf counter32;
        static const Enum::YLeaf unsignedOrGauge32;
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf integer32;
        static const Enum::YLeaf ipAddress;
        static const Enum::YLeaf octetString;
        static const Enum::YLeaf objectId;
        static const Enum::YLeaf counter64;

};

class ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum : public Enum
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

class ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absoluteValue;
        static const Enum::YLeaf deltaValue;

};

class ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf timeStamp;

};


}
}

#endif /* _EXPRESSION_MIB_ */

