#ifndef _CISCO_QOS_PIB_MIB_
#define _CISCO_QOS_PIB_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_QOS_PIB_MIB {

class CiscoQosPibMib : public Entity
{
    public:
        CiscoQosPibMib();
        ~CiscoQosPibMib();

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

        class Qosdevicepibincarnationtable; //type: CiscoQosPibMib::Qosdevicepibincarnationtable
        class Qosdeviceattributetable; //type: CiscoQosPibMib::Qosdeviceattributetable
        class Qosinterfacetypetable; //type: CiscoQosPibMib::Qosinterfacetypetable
        class Qosdiffservmappingtable; //type: CiscoQosPibMib::Qosdiffservmappingtable
        class Qoscostodscptable; //type: CiscoQosPibMib::Qoscostodscptable
        class Qosunmatchedpolicytable; //type: CiscoQosPibMib::Qosunmatchedpolicytable
        class Qospolicertable; //type: CiscoQosPibMib::Qospolicertable
        class Qosaggregatetable; //type: CiscoQosPibMib::Qosaggregatetable
        class Qosmacclassificationtable; //type: CiscoQosPibMib::Qosmacclassificationtable
        class Qosipacetable; //type: CiscoQosPibMib::Qosipacetable
        class Qosipacldefinitiontable; //type: CiscoQosPibMib::Qosipacldefinitiontable
        class Qosipaclactiontable; //type: CiscoQosPibMib::Qosipaclactiontable
        class Qosifschedulingpreferencestable; //type: CiscoQosPibMib::Qosifschedulingpreferencestable
        class Qosifdroppreferencetable; //type: CiscoQosPibMib::Qosifdroppreferencetable
        class Qosifdscpassignmenttable; //type: CiscoQosPibMib::Qosifdscpassignmenttable
        class Qosifredtable; //type: CiscoQosPibMib::Qosifredtable
        class Qosiftaildroptable; //type: CiscoQosPibMib::Qosiftaildroptable
        class Qosifweightstable; //type: CiscoQosPibMib::Qosifweightstable

        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosaggregatetable> qosaggregatetable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qoscostodscptable> qoscostodscptable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdeviceattributetable> qosdeviceattributetable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdevicepibincarnationtable> qosdevicepibincarnationtable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdiffservmappingtable> qosdiffservmappingtable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdroppreferencetable> qosifdroppreferencetable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdscpassignmenttable> qosifdscpassignmenttable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifredtable> qosifredtable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifschedulingpreferencestable> qosifschedulingpreferencestable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosiftaildroptable> qosiftaildroptable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifweightstable> qosifweightstable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosinterfacetypetable> qosinterfacetypetable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacetable> qosipacetable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipaclactiontable> qosipaclactiontable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacldefinitiontable> qosipacldefinitiontable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosmacclassificationtable> qosmacclassificationtable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qospolicertable> qospolicertable;
        std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosunmatchedpolicytable> qosunmatchedpolicytable;
        
}; // CiscoQosPibMib


class CiscoQosPibMib::Qosdevicepibincarnationtable : public Entity
{
    public:
        Qosdevicepibincarnationtable();
        ~Qosdevicepibincarnationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosdevicepibincarnationentry; //type: CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry> > qosdevicepibincarnationentry;
        
}; // CiscoQosPibMib::Qosdevicepibincarnationtable


class CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry : public Entity
{
    public:
        Qosdevicepibincarnationentry();
        ~Qosdevicepibincarnationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosdeviceincarnationid; //type: uint32
        YLeaf qosdevicepdpname; //type: string
        YLeaf qosdevicepibincarnation; //type: binary
        YLeaf qosdevicepibttl; //type: uint32

}; // CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry


class CiscoQosPibMib::Qosdeviceattributetable : public Entity
{
    public:
        Qosdeviceattributetable();
        ~Qosdeviceattributetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosdeviceattributeentry; //type: CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry> > qosdeviceattributeentry;
        
}; // CiscoQosPibMib::Qosdeviceattributetable


class CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry : public Entity
{
    public:
        Qosdeviceattributeentry();
        ~Qosdeviceattributeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosdeviceattributeid; //type: uint32
        YLeaf qosdevicepepdomain; //type: string
        YLeaf qosdeviceprimarypdp; //type: string
        YLeaf qosdevicesecondarypdp; //type: string
        YLeaf qosdevicemaxmessagesize; //type: uint32
        YLeaf qosdevicecapabilities; //type: Qosdevicecapabilities

}; // CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry


class CiscoQosPibMib::Qosinterfacetypetable : public Entity
{
    public:
        Qosinterfacetypetable();
        ~Qosinterfacetypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosinterfacetypeentry; //type: CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry> > qosinterfacetypeentry;
        
}; // CiscoQosPibMib::Qosinterfacetypetable


class CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry : public Entity
{
    public:
        Qosinterfacetypeentry();
        ~Qosinterfacetypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosinterfacetypeid; //type: uint32
        YLeaf qosinterfacequeuetype; //type: QosinterfacequeuetypeEnum
        YLeaf qosinterfacetyperoles; //type: binary
        YLeaf qosinterfacetypecapabilities; //type: Qosinterfacetypecapabilities

}; // CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry


class CiscoQosPibMib::Qosdiffservmappingtable : public Entity
{
    public:
        Qosdiffservmappingtable();
        ~Qosdiffservmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosdiffservmappingentry; //type: CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry> > qosdiffservmappingentry;
        
}; // CiscoQosPibMib::Qosdiffservmappingtable


class CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry : public Entity
{
    public:
        Qosdiffservmappingentry();
        ~Qosdiffservmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosdscp; //type: int32
        YLeaf qosmarkeddscp; //type: int32
        YLeaf qosl2cos; //type: int32

}; // CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry


class CiscoQosPibMib::Qoscostodscptable : public Entity
{
    public:
        Qoscostodscptable();
        ~Qoscostodscptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qoscostodscpentry; //type: CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry> > qoscostodscpentry;
        
}; // CiscoQosPibMib::Qoscostodscptable


class CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry : public Entity
{
    public:
        Qoscostodscpentry();
        ~Qoscostodscpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qoscostodscpcos; //type: int32
        YLeaf qoscostodscpdscp; //type: int32

}; // CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry


class CiscoQosPibMib::Qosunmatchedpolicytable : public Entity
{
    public:
        Qosunmatchedpolicytable();
        ~Qosunmatchedpolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosunmatchedpolicyentry; //type: CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry> > qosunmatchedpolicyentry;
        
}; // CiscoQosPibMib::Qosunmatchedpolicytable


class CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry : public Entity
{
    public:
        Qosunmatchedpolicyentry();
        ~Qosunmatchedpolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosunmatchedpolicyid; //type: uint32
        YLeaf qosunmatchedpolicyrole; //type: binary
        YLeaf qosunmatchedpolicydirection; //type: QosunmatchedpolicydirectionEnum
        YLeaf qosunmatchedpolicydscp; //type: int32
        YLeaf qosunmatchedpolicydscptrusted; //type: boolean
        YLeaf qosunmatchpolmicroflowpolicerid; //type: uint32
        YLeaf qosunmatchedpolicyaggregateid; //type: uint32
        class QosunmatchedpolicydirectionEnum;

}; // CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry


class CiscoQosPibMib::Qospolicertable : public Entity
{
    public:
        Qospolicertable();
        ~Qospolicertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qospolicerentry; //type: CiscoQosPibMib::Qospolicertable::Qospolicerentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qospolicertable::Qospolicerentry> > qospolicerentry;
        
}; // CiscoQosPibMib::Qospolicertable


class CiscoQosPibMib::Qospolicertable::Qospolicerentry : public Entity
{
    public:
        Qospolicerentry();
        ~Qospolicerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qospolicerid; //type: uint32
        YLeaf qospolicerrate; //type: uint32
        YLeaf qospolicernormalburst; //type: uint32
        YLeaf qospolicerexcessburst; //type: uint32
        YLeaf qospoliceraction; //type: QospoliceractionEnum
        class QospoliceractionEnum;

}; // CiscoQosPibMib::Qospolicertable::Qospolicerentry


class CiscoQosPibMib::Qosaggregatetable : public Entity
{
    public:
        Qosaggregatetable();
        ~Qosaggregatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosaggregateentry; //type: CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry> > qosaggregateentry;
        
}; // CiscoQosPibMib::Qosaggregatetable


class CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry : public Entity
{
    public:
        Qosaggregateentry();
        ~Qosaggregateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosaggregateid; //type: uint32
        YLeaf qosaggregatepolicerid; //type: uint32

}; // CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry


class CiscoQosPibMib::Qosmacclassificationtable : public Entity
{
    public:
        Qosmacclassificationtable();
        ~Qosmacclassificationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosmacclassificationentry; //type: CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry> > qosmacclassificationentry;
        
}; // CiscoQosPibMib::Qosmacclassificationtable


class CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry : public Entity
{
    public:
        Qosmacclassificationentry();
        ~Qosmacclassificationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosmacclassificationid; //type: uint32
        YLeaf qosdstmacvlan; //type: int32
        YLeaf qosdstmacaddress; //type: string
        YLeaf qosdstmaccos; //type: int32

}; // CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry


class CiscoQosPibMib::Qosipacetable : public Entity
{
    public:
        Qosipacetable();
        ~Qosipacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosipaceentry; //type: CiscoQosPibMib::Qosipacetable::Qosipaceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacetable::Qosipaceentry> > qosipaceentry;
        
}; // CiscoQosPibMib::Qosipacetable


class CiscoQosPibMib::Qosipacetable::Qosipaceentry : public Entity
{
    public:
        Qosipaceentry();
        ~Qosipaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosipaceid; //type: uint32
        YLeaf qosipacedstaddr; //type: string
        YLeaf qosipacedstaddrmask; //type: string
        YLeaf qosipacesrcaddr; //type: string
        YLeaf qosipacesrcaddrmask; //type: string
        YLeaf qosipacedscpmin; //type: int32
        YLeaf qosipacedscpmax; //type: int32
        YLeaf qosipaceprotocol; //type: int32
        YLeaf qosipacedstl4portmin; //type: int32
        YLeaf qosipacedstl4portmax; //type: int32
        YLeaf qosipacesrcl4portmin; //type: int32
        YLeaf qosipacesrcl4portmax; //type: int32
        YLeaf qosipacepermit; //type: boolean

}; // CiscoQosPibMib::Qosipacetable::Qosipaceentry


class CiscoQosPibMib::Qosipacldefinitiontable : public Entity
{
    public:
        Qosipacldefinitiontable();
        ~Qosipacldefinitiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosipacldefinitionentry; //type: CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry> > qosipacldefinitionentry;
        
}; // CiscoQosPibMib::Qosipacldefinitiontable


class CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry : public Entity
{
    public:
        Qosipacldefinitionentry();
        ~Qosipacldefinitionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosipacldefinitionid; //type: uint32
        YLeaf qosipaclid; //type: uint32
        YLeaf qosipaceorder; //type: uint32
        YLeaf qosipacldefaceid; //type: uint32

}; // CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry


class CiscoQosPibMib::Qosipaclactiontable : public Entity
{
    public:
        Qosipaclactiontable();
        ~Qosipaclactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosipaclactionentry; //type: CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry> > qosipaclactionentry;
        
}; // CiscoQosPibMib::Qosipaclactiontable


class CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry : public Entity
{
    public:
        Qosipaclactionentry();
        ~Qosipaclactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosipaclactionid; //type: uint32
        YLeaf qosipaclactaclid; //type: uint32
        YLeaf qosipaclinterfaceroles; //type: binary
        YLeaf qosipaclinterfacedirection; //type: QosipaclinterfacedirectionEnum
        YLeaf qosipaclorder; //type: uint32
        YLeaf qosipacldscp; //type: int32
        YLeaf qosipacldscptrusted; //type: boolean
        YLeaf qosipaclmicroflowpolicerid; //type: uint32
        YLeaf qosipaclaggregateid; //type: uint32
        class QosipaclinterfacedirectionEnum;

}; // CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry


class CiscoQosPibMib::Qosifschedulingpreferencestable : public Entity
{
    public:
        Qosifschedulingpreferencestable();
        ~Qosifschedulingpreferencestable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosifschedulingpreferenceentry; //type: CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry> > qosifschedulingpreferenceentry;
        
}; // CiscoQosPibMib::Qosifschedulingpreferencestable


class CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry : public Entity
{
    public:
        Qosifschedulingpreferenceentry();
        ~Qosifschedulingpreferenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosifschedulingpreferenceid; //type: uint32
        YLeaf qosifschedulingroles; //type: binary
        YLeaf qosifschedulingpreference; //type: int32
        YLeaf qosifschedulingdiscipline; //type: QosifschedulingdisciplineEnum
        YLeaf qosifschedulingqueuetype; //type: QosinterfacequeuetypeEnum
        class QosifschedulingdisciplineEnum;

}; // CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry


class CiscoQosPibMib::Qosifdroppreferencetable : public Entity
{
    public:
        Qosifdroppreferencetable();
        ~Qosifdroppreferencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosifdroppreferenceentry; //type: CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry> > qosifdroppreferenceentry;
        
}; // CiscoQosPibMib::Qosifdroppreferencetable


class CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry : public Entity
{
    public:
        Qosifdroppreferenceentry();
        ~Qosifdroppreferenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosifdroppreferenceid; //type: uint32
        YLeaf qosifdroproles; //type: binary
        YLeaf qosifdroppreference; //type: int32
        YLeaf qosifdropdiscipline; //type: QosifdropdisciplineEnum
        class QosifdropdisciplineEnum;

}; // CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry


class CiscoQosPibMib::Qosifdscpassignmenttable : public Entity
{
    public:
        Qosifdscpassignmenttable();
        ~Qosifdscpassignmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosifdscpassignmententry; //type: CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry> > qosifdscpassignmententry;
        
}; // CiscoQosPibMib::Qosifdscpassignmenttable


class CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry : public Entity
{
    public:
        Qosifdscpassignmententry();
        ~Qosifdscpassignmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosifdscpassignmentid; //type: uint32
        YLeaf qosifdscproles; //type: binary
        YLeaf qosifqueuetype; //type: QosinterfacequeuetypeEnum
        YLeaf qosifdscp; //type: int32
        YLeaf qosifqueue; //type: int32
        YLeaf qosifthresholdset; //type: int32

}; // CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry


class CiscoQosPibMib::Qosifredtable : public Entity
{
    public:
        Qosifredtable();
        ~Qosifredtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosifredentry; //type: CiscoQosPibMib::Qosifredtable::Qosifredentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifredtable::Qosifredentry> > qosifredentry;
        
}; // CiscoQosPibMib::Qosifredtable


class CiscoQosPibMib::Qosifredtable::Qosifredentry : public Entity
{
    public:
        Qosifredentry();
        ~Qosifredentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosifredid; //type: uint32
        YLeaf qosifredroles; //type: binary
        YLeaf qosifrednumthresholdsets; //type: ThresholdsetrangeEnum
        YLeaf qosifredthresholdset; //type: int32
        YLeaf qosifredthresholdsetlower; //type: int32
        YLeaf qosifredthresholdsetupper; //type: int32

}; // CiscoQosPibMib::Qosifredtable::Qosifredentry


class CiscoQosPibMib::Qosiftaildroptable : public Entity
{
    public:
        Qosiftaildroptable();
        ~Qosiftaildroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosiftaildropentry; //type: CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry> > qosiftaildropentry;
        
}; // CiscoQosPibMib::Qosiftaildroptable


class CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry : public Entity
{
    public:
        Qosiftaildropentry();
        ~Qosiftaildropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosiftaildropid; //type: uint32
        YLeaf qosiftaildroproles; //type: binary
        YLeaf qosiftaildropnumthresholdsets; //type: ThresholdsetrangeEnum
        YLeaf qosiftaildropthresholdset; //type: int32
        YLeaf qosiftaildropthresholdsetvalue; //type: int32

}; // CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry


class CiscoQosPibMib::Qosifweightstable : public Entity
{
    public:
        Qosifweightstable();
        ~Qosifweightstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qosifweightsentry; //type: CiscoQosPibMib::Qosifweightstable::Qosifweightsentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifweightstable::Qosifweightsentry> > qosifweightsentry;
        
}; // CiscoQosPibMib::Qosifweightstable


class CiscoQosPibMib::Qosifweightstable::Qosifweightsentry : public Entity
{
    public:
        Qosifweightsentry();
        ~Qosifweightsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qosifweightsid; //type: uint32
        YLeaf qosifweightsroles; //type: binary
        YLeaf qosifweightsnumqueues; //type: QueuerangeEnum
        YLeaf qosifweightsqueue; //type: int32
        YLeaf qosifweightsdrainsize; //type: uint32
        YLeaf qosifweightsqueuesize; //type: uint32

}; // CiscoQosPibMib::Qosifweightstable::Qosifweightsentry

class QueuerangeEnum : public Enum
{
    public:
        static const Enum::YLeaf oneQ;
        static const Enum::YLeaf twoQ;
        static const Enum::YLeaf threeQ;
        static const Enum::YLeaf fourQ;
        static const Enum::YLeaf eightQ;
        static const Enum::YLeaf sixteenQ;
        static const Enum::YLeaf thirtyTwoQ;
        static const Enum::YLeaf sixtyFourQ;

};

class QosinterfacequeuetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf oneQ1t;
        static const Enum::YLeaf oneQ2t;
        static const Enum::YLeaf oneQ4t;
        static const Enum::YLeaf oneQ8t;
        static const Enum::YLeaf twoQ1t;
        static const Enum::YLeaf twoQ2t;
        static const Enum::YLeaf twoQ4t;
        static const Enum::YLeaf twoQ8t;
        static const Enum::YLeaf threeQ1t;
        static const Enum::YLeaf threeQ2t;
        static const Enum::YLeaf threeQ4t;
        static const Enum::YLeaf threeQ8t;
        static const Enum::YLeaf fourQ1t;
        static const Enum::YLeaf fourQ2t;
        static const Enum::YLeaf fourQ4t;
        static const Enum::YLeaf fourQ8t;
        static const Enum::YLeaf eightQ1t;
        static const Enum::YLeaf eightQ2t;
        static const Enum::YLeaf eightQ4t;
        static const Enum::YLeaf eightQ8t;
        static const Enum::YLeaf sixteenQ1t;
        static const Enum::YLeaf sixteenQ2t;
        static const Enum::YLeaf sixteenQ4t;
        static const Enum::YLeaf sixtyfourQ1t;
        static const Enum::YLeaf sixtyfourQ2t;
        static const Enum::YLeaf sixtyfourQ4t;
        static const Enum::YLeaf oneP1Q0t;
        static const Enum::YLeaf oneP1Q4t;
        static const Enum::YLeaf oneP1Q8t;
        static const Enum::YLeaf oneP2Q1t;
        static const Enum::YLeaf oneP2Q2t;
        static const Enum::YLeaf oneP3Q1t;
        static const Enum::YLeaf oneP7Q8t;
        static const Enum::YLeaf oneP3Q8t;
        static const Enum::YLeaf sixteenQ8t;
        static const Enum::YLeaf oneP15Q8t;
        static const Enum::YLeaf oneP15Q1t;
        static const Enum::YLeaf oneP7Q1t;
        static const Enum::YLeaf oneP31Q1t;
        static const Enum::YLeaf thirtytwoQ1t;
        static const Enum::YLeaf thirtytwoQ8t;
        static const Enum::YLeaf oneP31Q8t;
        static const Enum::YLeaf oneP7Q4t;
        static const Enum::YLeaf oneP3Q4t;
        static const Enum::YLeaf oneP7Q2t;

};

class ThresholdsetrangeEnum : public Enum
{
    public:
        static const Enum::YLeaf zeroT;
        static const Enum::YLeaf oneT;
        static const Enum::YLeaf twoT;
        static const Enum::YLeaf fourT;
        static const Enum::YLeaf eightT;

};

class CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::QosunmatchedpolicydirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class CiscoQosPibMib::Qospolicertable::Qospolicerentry::QospoliceractionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf mark;
        static const Enum::YLeaf shape;

};

class CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::QosipaclinterfacedirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum : public Enum
{
    public:
        static const Enum::YLeaf weightedFairQueueing;
        static const Enum::YLeaf weightedRoundRobin;
        static const Enum::YLeaf customQueueing;
        static const Enum::YLeaf priorityQueueing;
        static const Enum::YLeaf classBasedWFQ;
        static const Enum::YLeaf fifo;
        static const Enum::YLeaf pqWrr;
        static const Enum::YLeaf pqCbwfq;

};

class CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::QosifdropdisciplineEnum : public Enum
{
    public:
        static const Enum::YLeaf qosIfDropWRED;
        static const Enum::YLeaf qosIfDropTailDrop;

};


}
}

#endif /* _CISCO_QOS_PIB_MIB_ */

