#ifndef _CISCO_QOS_PIB_MIB_
#define _CISCO_QOS_PIB_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_QOS_PIB_MIB {

class CiscoQosPibMib : public ydk::Entity
{
    public:
        CiscoQosPibMib();
        ~CiscoQosPibMib();

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


class CiscoQosPibMib::Qosdevicepibincarnationtable : public ydk::Entity
{
    public:
        Qosdevicepibincarnationtable();
        ~Qosdevicepibincarnationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosdevicepibincarnationentry; //type: CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry> > qosdevicepibincarnationentry;
        
}; // CiscoQosPibMib::Qosdevicepibincarnationtable


class CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry : public ydk::Entity
{
    public:
        Qosdevicepibincarnationentry();
        ~Qosdevicepibincarnationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosdeviceincarnationid; //type: uint32
        ydk::YLeaf qosdevicepdpname; //type: string
        ydk::YLeaf qosdevicepibincarnation; //type: binary
        ydk::YLeaf qosdevicepibttl; //type: uint32

}; // CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry


class CiscoQosPibMib::Qosdeviceattributetable : public ydk::Entity
{
    public:
        Qosdeviceattributetable();
        ~Qosdeviceattributetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosdeviceattributeentry; //type: CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry> > qosdeviceattributeentry;
        
}; // CiscoQosPibMib::Qosdeviceattributetable


class CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry : public ydk::Entity
{
    public:
        Qosdeviceattributeentry();
        ~Qosdeviceattributeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosdeviceattributeid; //type: uint32
        ydk::YLeaf qosdevicepepdomain; //type: string
        ydk::YLeaf qosdeviceprimarypdp; //type: string
        ydk::YLeaf qosdevicesecondarypdp; //type: string
        ydk::YLeaf qosdevicemaxmessagesize; //type: uint32
        ydk::YLeaf qosdevicecapabilities; //type: Qosdevicecapabilities

}; // CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry


class CiscoQosPibMib::Qosinterfacetypetable : public ydk::Entity
{
    public:
        Qosinterfacetypetable();
        ~Qosinterfacetypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosinterfacetypeentry; //type: CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry> > qosinterfacetypeentry;
        
}; // CiscoQosPibMib::Qosinterfacetypetable


class CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry : public ydk::Entity
{
    public:
        Qosinterfacetypeentry();
        ~Qosinterfacetypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosinterfacetypeid; //type: uint32
        ydk::YLeaf qosinterfacequeuetype; //type: Qosinterfacequeuetype
        ydk::YLeaf qosinterfacetyperoles; //type: binary
        ydk::YLeaf qosinterfacetypecapabilities; //type: Qosinterfacetypecapabilities

}; // CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry


class CiscoQosPibMib::Qosdiffservmappingtable : public ydk::Entity
{
    public:
        Qosdiffservmappingtable();
        ~Qosdiffservmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosdiffservmappingentry; //type: CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry> > qosdiffservmappingentry;
        
}; // CiscoQosPibMib::Qosdiffservmappingtable


class CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry : public ydk::Entity
{
    public:
        Qosdiffservmappingentry();
        ~Qosdiffservmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosdscp; //type: int32
        ydk::YLeaf qosmarkeddscp; //type: int32
        ydk::YLeaf qosl2cos; //type: int32

}; // CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry


class CiscoQosPibMib::Qoscostodscptable : public ydk::Entity
{
    public:
        Qoscostodscptable();
        ~Qoscostodscptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qoscostodscpentry; //type: CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry> > qoscostodscpentry;
        
}; // CiscoQosPibMib::Qoscostodscptable


class CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry : public ydk::Entity
{
    public:
        Qoscostodscpentry();
        ~Qoscostodscpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qoscostodscpcos; //type: int32
        ydk::YLeaf qoscostodscpdscp; //type: int32

}; // CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry


class CiscoQosPibMib::Qosunmatchedpolicytable : public ydk::Entity
{
    public:
        Qosunmatchedpolicytable();
        ~Qosunmatchedpolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosunmatchedpolicyentry; //type: CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry> > qosunmatchedpolicyentry;
        
}; // CiscoQosPibMib::Qosunmatchedpolicytable


class CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry : public ydk::Entity
{
    public:
        Qosunmatchedpolicyentry();
        ~Qosunmatchedpolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosunmatchedpolicyid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyrole; //type: binary
        ydk::YLeaf qosunmatchedpolicydirection; //type: Qosunmatchedpolicydirection
        ydk::YLeaf qosunmatchedpolicydscp; //type: int32
        ydk::YLeaf qosunmatchedpolicydscptrusted; //type: boolean
        ydk::YLeaf qosunmatchpolmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyaggregateid; //type: uint32
        class Qosunmatchedpolicydirection;

}; // CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry


class CiscoQosPibMib::Qospolicertable : public ydk::Entity
{
    public:
        Qospolicertable();
        ~Qospolicertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qospolicerentry; //type: CiscoQosPibMib::Qospolicertable::Qospolicerentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qospolicertable::Qospolicerentry> > qospolicerentry;
        
}; // CiscoQosPibMib::Qospolicertable


class CiscoQosPibMib::Qospolicertable::Qospolicerentry : public ydk::Entity
{
    public:
        Qospolicerentry();
        ~Qospolicerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qospolicerid; //type: uint32
        ydk::YLeaf qospolicerrate; //type: uint32
        ydk::YLeaf qospolicernormalburst; //type: uint32
        ydk::YLeaf qospolicerexcessburst; //type: uint32
        ydk::YLeaf qospoliceraction; //type: Qospoliceraction
        class Qospoliceraction;

}; // CiscoQosPibMib::Qospolicertable::Qospolicerentry


class CiscoQosPibMib::Qosaggregatetable : public ydk::Entity
{
    public:
        Qosaggregatetable();
        ~Qosaggregatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosaggregateentry; //type: CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry> > qosaggregateentry;
        
}; // CiscoQosPibMib::Qosaggregatetable


class CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry : public ydk::Entity
{
    public:
        Qosaggregateentry();
        ~Qosaggregateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosaggregateid; //type: uint32
        ydk::YLeaf qosaggregatepolicerid; //type: uint32

}; // CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry


class CiscoQosPibMib::Qosmacclassificationtable : public ydk::Entity
{
    public:
        Qosmacclassificationtable();
        ~Qosmacclassificationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosmacclassificationentry; //type: CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry> > qosmacclassificationentry;
        
}; // CiscoQosPibMib::Qosmacclassificationtable


class CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry : public ydk::Entity
{
    public:
        Qosmacclassificationentry();
        ~Qosmacclassificationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosmacclassificationid; //type: uint32
        ydk::YLeaf qosdstmacvlan; //type: int32
        ydk::YLeaf qosdstmacaddress; //type: string
        ydk::YLeaf qosdstmaccos; //type: int32

}; // CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry


class CiscoQosPibMib::Qosipacetable : public ydk::Entity
{
    public:
        Qosipacetable();
        ~Qosipacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosipaceentry; //type: CiscoQosPibMib::Qosipacetable::Qosipaceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacetable::Qosipaceentry> > qosipaceentry;
        
}; // CiscoQosPibMib::Qosipacetable


class CiscoQosPibMib::Qosipacetable::Qosipaceentry : public ydk::Entity
{
    public:
        Qosipaceentry();
        ~Qosipaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosipaceid; //type: uint32
        ydk::YLeaf qosipacedstaddr; //type: string
        ydk::YLeaf qosipacedstaddrmask; //type: string
        ydk::YLeaf qosipacesrcaddr; //type: string
        ydk::YLeaf qosipacesrcaddrmask; //type: string
        ydk::YLeaf qosipacedscpmin; //type: int32
        ydk::YLeaf qosipacedscpmax; //type: int32
        ydk::YLeaf qosipaceprotocol; //type: int32
        ydk::YLeaf qosipacedstl4portmin; //type: int32
        ydk::YLeaf qosipacedstl4portmax; //type: int32
        ydk::YLeaf qosipacesrcl4portmin; //type: int32
        ydk::YLeaf qosipacesrcl4portmax; //type: int32
        ydk::YLeaf qosipacepermit; //type: boolean

}; // CiscoQosPibMib::Qosipacetable::Qosipaceentry


class CiscoQosPibMib::Qosipacldefinitiontable : public ydk::Entity
{
    public:
        Qosipacldefinitiontable();
        ~Qosipacldefinitiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosipacldefinitionentry; //type: CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry> > qosipacldefinitionentry;
        
}; // CiscoQosPibMib::Qosipacldefinitiontable


class CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry : public ydk::Entity
{
    public:
        Qosipacldefinitionentry();
        ~Qosipacldefinitionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosipacldefinitionid; //type: uint32
        ydk::YLeaf qosipaclid; //type: uint32
        ydk::YLeaf qosipaceorder; //type: uint32
        ydk::YLeaf qosipacldefaceid; //type: uint32

}; // CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry


class CiscoQosPibMib::Qosipaclactiontable : public ydk::Entity
{
    public:
        Qosipaclactiontable();
        ~Qosipaclactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosipaclactionentry; //type: CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry> > qosipaclactionentry;
        
}; // CiscoQosPibMib::Qosipaclactiontable


class CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry : public ydk::Entity
{
    public:
        Qosipaclactionentry();
        ~Qosipaclactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosipaclactionid; //type: uint32
        ydk::YLeaf qosipaclactaclid; //type: uint32
        ydk::YLeaf qosipaclinterfaceroles; //type: binary
        ydk::YLeaf qosipaclinterfacedirection; //type: Qosipaclinterfacedirection
        ydk::YLeaf qosipaclorder; //type: uint32
        ydk::YLeaf qosipacldscp; //type: int32
        ydk::YLeaf qosipacldscptrusted; //type: boolean
        ydk::YLeaf qosipaclmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosipaclaggregateid; //type: uint32
        class Qosipaclinterfacedirection;

}; // CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry


class CiscoQosPibMib::Qosifschedulingpreferencestable : public ydk::Entity
{
    public:
        Qosifschedulingpreferencestable();
        ~Qosifschedulingpreferencestable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosifschedulingpreferenceentry; //type: CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry> > qosifschedulingpreferenceentry;
        
}; // CiscoQosPibMib::Qosifschedulingpreferencestable


class CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry : public ydk::Entity
{
    public:
        Qosifschedulingpreferenceentry();
        ~Qosifschedulingpreferenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosifschedulingpreferenceid; //type: uint32
        ydk::YLeaf qosifschedulingroles; //type: binary
        ydk::YLeaf qosifschedulingpreference; //type: int32
        ydk::YLeaf qosifschedulingdiscipline; //type: Qosifschedulingdiscipline
        ydk::YLeaf qosifschedulingqueuetype; //type: Qosinterfacequeuetype
        class Qosifschedulingdiscipline;

}; // CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry


class CiscoQosPibMib::Qosifdroppreferencetable : public ydk::Entity
{
    public:
        Qosifdroppreferencetable();
        ~Qosifdroppreferencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosifdroppreferenceentry; //type: CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry> > qosifdroppreferenceentry;
        
}; // CiscoQosPibMib::Qosifdroppreferencetable


class CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry : public ydk::Entity
{
    public:
        Qosifdroppreferenceentry();
        ~Qosifdroppreferenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosifdroppreferenceid; //type: uint32
        ydk::YLeaf qosifdroproles; //type: binary
        ydk::YLeaf qosifdroppreference; //type: int32
        ydk::YLeaf qosifdropdiscipline; //type: Qosifdropdiscipline
        class Qosifdropdiscipline;

}; // CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry


class CiscoQosPibMib::Qosifdscpassignmenttable : public ydk::Entity
{
    public:
        Qosifdscpassignmenttable();
        ~Qosifdscpassignmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosifdscpassignmententry; //type: CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry> > qosifdscpassignmententry;
        
}; // CiscoQosPibMib::Qosifdscpassignmenttable


class CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry : public ydk::Entity
{
    public:
        Qosifdscpassignmententry();
        ~Qosifdscpassignmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosifdscpassignmentid; //type: uint32
        ydk::YLeaf qosifdscproles; //type: binary
        ydk::YLeaf qosifqueuetype; //type: Qosinterfacequeuetype
        ydk::YLeaf qosifdscp; //type: int32
        ydk::YLeaf qosifqueue; //type: int32
        ydk::YLeaf qosifthresholdset; //type: int32

}; // CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry


class CiscoQosPibMib::Qosifredtable : public ydk::Entity
{
    public:
        Qosifredtable();
        ~Qosifredtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosifredentry; //type: CiscoQosPibMib::Qosifredtable::Qosifredentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifredtable::Qosifredentry> > qosifredentry;
        
}; // CiscoQosPibMib::Qosifredtable


class CiscoQosPibMib::Qosifredtable::Qosifredentry : public ydk::Entity
{
    public:
        Qosifredentry();
        ~Qosifredentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosifredid; //type: uint32
        ydk::YLeaf qosifredroles; //type: binary
        ydk::YLeaf qosifrednumthresholdsets; //type: Thresholdsetrange
        ydk::YLeaf qosifredthresholdset; //type: int32
        ydk::YLeaf qosifredthresholdsetlower; //type: int32
        ydk::YLeaf qosifredthresholdsetupper; //type: int32

}; // CiscoQosPibMib::Qosifredtable::Qosifredentry


class CiscoQosPibMib::Qosiftaildroptable : public ydk::Entity
{
    public:
        Qosiftaildroptable();
        ~Qosiftaildroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosiftaildropentry; //type: CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry> > qosiftaildropentry;
        
}; // CiscoQosPibMib::Qosiftaildroptable


class CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry : public ydk::Entity
{
    public:
        Qosiftaildropentry();
        ~Qosiftaildropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosiftaildropid; //type: uint32
        ydk::YLeaf qosiftaildroproles; //type: binary
        ydk::YLeaf qosiftaildropnumthresholdsets; //type: Thresholdsetrange
        ydk::YLeaf qosiftaildropthresholdset; //type: int32
        ydk::YLeaf qosiftaildropthresholdsetvalue; //type: int32

}; // CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry


class CiscoQosPibMib::Qosifweightstable : public ydk::Entity
{
    public:
        Qosifweightstable();
        ~Qosifweightstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qosifweightsentry; //type: CiscoQosPibMib::Qosifweightstable::Qosifweightsentry

        std::vector<std::shared_ptr<CISCO_QOS_PIB_MIB::CiscoQosPibMib::Qosifweightstable::Qosifweightsentry> > qosifweightsentry;
        
}; // CiscoQosPibMib::Qosifweightstable


class CiscoQosPibMib::Qosifweightstable::Qosifweightsentry : public ydk::Entity
{
    public:
        Qosifweightsentry();
        ~Qosifweightsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qosifweightsid; //type: uint32
        ydk::YLeaf qosifweightsroles; //type: binary
        ydk::YLeaf qosifweightsnumqueues; //type: Queuerange
        ydk::YLeaf qosifweightsqueue; //type: int32
        ydk::YLeaf qosifweightsdrainsize; //type: uint32
        ydk::YLeaf qosifweightsqueuesize; //type: uint32

}; // CiscoQosPibMib::Qosifweightstable::Qosifweightsentry

class Qosinterfacequeuetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ1t;
        static const ydk::Enum::YLeaf oneQ2t;
        static const ydk::Enum::YLeaf oneQ4t;
        static const ydk::Enum::YLeaf oneQ8t;
        static const ydk::Enum::YLeaf twoQ1t;
        static const ydk::Enum::YLeaf twoQ2t;
        static const ydk::Enum::YLeaf twoQ4t;
        static const ydk::Enum::YLeaf twoQ8t;
        static const ydk::Enum::YLeaf threeQ1t;
        static const ydk::Enum::YLeaf threeQ2t;
        static const ydk::Enum::YLeaf threeQ4t;
        static const ydk::Enum::YLeaf threeQ8t;
        static const ydk::Enum::YLeaf fourQ1t;
        static const ydk::Enum::YLeaf fourQ2t;
        static const ydk::Enum::YLeaf fourQ4t;
        static const ydk::Enum::YLeaf fourQ8t;
        static const ydk::Enum::YLeaf eightQ1t;
        static const ydk::Enum::YLeaf eightQ2t;
        static const ydk::Enum::YLeaf eightQ4t;
        static const ydk::Enum::YLeaf eightQ8t;
        static const ydk::Enum::YLeaf sixteenQ1t;
        static const ydk::Enum::YLeaf sixteenQ2t;
        static const ydk::Enum::YLeaf sixteenQ4t;
        static const ydk::Enum::YLeaf sixtyfourQ1t;
        static const ydk::Enum::YLeaf sixtyfourQ2t;
        static const ydk::Enum::YLeaf sixtyfourQ4t;
        static const ydk::Enum::YLeaf oneP1Q0t;
        static const ydk::Enum::YLeaf oneP1Q4t;
        static const ydk::Enum::YLeaf oneP1Q8t;
        static const ydk::Enum::YLeaf oneP2Q1t;
        static const ydk::Enum::YLeaf oneP2Q2t;
        static const ydk::Enum::YLeaf oneP3Q1t;
        static const ydk::Enum::YLeaf oneP7Q8t;
        static const ydk::Enum::YLeaf oneP3Q8t;
        static const ydk::Enum::YLeaf sixteenQ8t;
        static const ydk::Enum::YLeaf oneP15Q8t;
        static const ydk::Enum::YLeaf oneP15Q1t;
        static const ydk::Enum::YLeaf oneP7Q1t;
        static const ydk::Enum::YLeaf oneP31Q1t;
        static const ydk::Enum::YLeaf thirtytwoQ1t;
        static const ydk::Enum::YLeaf thirtytwoQ8t;
        static const ydk::Enum::YLeaf oneP31Q8t;
        static const ydk::Enum::YLeaf oneP7Q4t;
        static const ydk::Enum::YLeaf oneP3Q4t;
        static const ydk::Enum::YLeaf oneP7Q2t;

};

class Queuerange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ;
        static const ydk::Enum::YLeaf twoQ;
        static const ydk::Enum::YLeaf threeQ;
        static const ydk::Enum::YLeaf fourQ;
        static const ydk::Enum::YLeaf eightQ;
        static const ydk::Enum::YLeaf sixteenQ;
        static const ydk::Enum::YLeaf thirtyTwoQ;
        static const ydk::Enum::YLeaf sixtyFourQ;

};

class Thresholdsetrange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zeroT;
        static const ydk::Enum::YLeaf oneT;
        static const ydk::Enum::YLeaf twoT;
        static const ydk::Enum::YLeaf fourT;
        static const ydk::Enum::YLeaf eightT;

};

class CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicydirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospoliceraction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf mark;
        static const ydk::Enum::YLeaf shape;

};

class CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::Qosipaclinterfacedirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf weightedFairQueueing;
        static const ydk::Enum::YLeaf weightedRoundRobin;
        static const ydk::Enum::YLeaf customQueueing;
        static const ydk::Enum::YLeaf priorityQueueing;
        static const ydk::Enum::YLeaf classBasedWFQ;
        static const ydk::Enum::YLeaf fifo;
        static const ydk::Enum::YLeaf pqWrr;
        static const ydk::Enum::YLeaf pqCbwfq;

};

class CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdropdiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qosIfDropWRED;
        static const ydk::Enum::YLeaf qosIfDropTailDrop;

};


}
}

#endif /* _CISCO_QOS_PIB_MIB_ */

