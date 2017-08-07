#ifndef _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_
#define _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

class CiscoNbarProtocolDiscoveryMib : public ydk::Entity
{
    public:
        CiscoNbarProtocolDiscoveryMib();
        ~CiscoNbarProtocolDiscoveryMib();

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

        class Cnpdnotificationsconfig; //type: CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig
        class Cnpdstatustable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdstatustable
        class Cnpdallstatstable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable
        class Cnpdtopnconfigtable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable
        class Cnpdtopnstatstable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable
        class Cnpdthresholdconfigtable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable
        class Cnpdthresholdhistorytable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable
        class Cnpdsupportedprotocolstable; //type: CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable

        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable> cnpdallstatstable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig> cnpdnotificationsconfig;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdstatustable> cnpdstatustable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable> cnpdsupportedprotocolstable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable> cnpdthresholdconfigtable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable> cnpdthresholdhistorytable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable> cnpdtopnconfigtable;
        std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable> cnpdtopnstatstable;
        
}; // CiscoNbarProtocolDiscoveryMib


class CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig : public ydk::Entity
{
    public:
        Cnpdnotificationsconfig();
        ~Cnpdnotificationsconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnpdnotificationsenable; //type: boolean

}; // CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig


class CiscoNbarProtocolDiscoveryMib::Cnpdstatustable : public ydk::Entity
{
    public:
        Cnpdstatustable();
        ~Cnpdstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdstatusentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry> > cnpdstatusentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdstatustable


class CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry : public ydk::Entity
{
    public:
        Cnpdstatusentry();
        ~Cnpdstatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdstatuspdenable; //type: boolean
        ydk::YLeaf cnpdstatuslastupdatetime; //type: uint32

}; // CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry


class CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable : public ydk::Entity
{
    public:
        Cnpdallstatstable();
        ~Cnpdallstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdallstatsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry> > cnpdallstatsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable


class CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry : public ydk::Entity
{
    public:
        Cnpdallstatsentry();
        ~Cnpdallstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdallstatsprotocolsindex; //type: uint32
        ydk::YLeaf cnpdallstatsprotocolname; //type: binary
        ydk::YLeaf cnpdallstatsinpkts; //type: uint32
        ydk::YLeaf cnpdallstatsoutpkts; //type: uint32
        ydk::YLeaf cnpdallstatsinbytes; //type: uint32
        ydk::YLeaf cnpdallstatsoutbytes; //type: uint32
        ydk::YLeaf cnpdallstatshcinpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcoutpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcinbytes; //type: uint64
        ydk::YLeaf cnpdallstatshcoutbytes; //type: uint64
        ydk::YLeaf cnpdallstatsinbitrate; //type: uint32
        ydk::YLeaf cnpdallstatsoutbitrate; //type: uint32

}; // CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable : public ydk::Entity
{
    public:
        Cnpdtopnconfigtable();
        ~Cnpdtopnconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdtopnconfigentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry> > cnpdtopnconfigentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry : public ydk::Entity
{
    public:
        Cnpdtopnconfigentry();
        ~Cnpdtopnconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnpdtopnconfigindex; //type: uint32
        ydk::YLeaf cnpdtopnconfigifindex; //type: int32
        ydk::YLeaf cnpdtopnconfigstatsselect; //type: Ciscopddatatype
        ydk::YLeaf cnpdtopnconfigsampletime; //type: uint32
        ydk::YLeaf cnpdtopnconfigrequestedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfiggrantedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfigtime; //type: uint32
        ydk::YLeaf cnpdtopnconfigstatus; //type: Rowstatus

}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable : public ydk::Entity
{
    public:
        Cnpdtopnstatstable();
        ~Cnpdtopnstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdtopnstatsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry> > cnpdtopnstatsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry : public ydk::Entity
{
    public:
        Cnpdtopnstatsentry();
        ~Cnpdtopnstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::cnpdtopnconfigindex)
        ydk::YLeaf cnpdtopnconfigindex;
        ydk::YLeaf cnpdtopnstatsindex; //type: uint32
        ydk::YLeaf cnpdtopnstatsprotocolname; //type: binary
        ydk::YLeaf cnpdtopnstatsrate; //type: uint32
        ydk::YLeaf cnpdtopnstatshcrate; //type: uint64

}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable : public ydk::Entity
{
    public:
        Cnpdthresholdconfigtable();
        ~Cnpdthresholdconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdthresholdconfigentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry> > cnpdthresholdconfigentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry : public ydk::Entity
{
    public:
        Cnpdthresholdconfigentry();
        ~Cnpdthresholdconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnpdthresholdconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdconfigifindex; //type: int32
        ydk::YLeaf cnpdthresholdconfiginterval; //type: uint32
        ydk::YLeaf cnpdthresholdconfigsampletype; //type: Cnpdthresholdconfigsampletype
        ydk::YLeaf cnpdthresholdconfigprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdconfigprotocolany; //type: boolean
        ydk::YLeaf cnpdthresholdconfigstatsselect; //type: Ciscopddatatype
        ydk::YLeaf cnpdthresholdconfigstartup; //type: Cnpdthresholdconfigstartup
        ydk::YLeaf cnpdthresholdconfigrising; //type: uint32
        ydk::YLeaf cnpdthresholdconfigfalling; //type: uint32
        ydk::YLeaf cnpdthresholdconfigstatus; //type: Rowstatus
        class Cnpdthresholdconfigsampletype;
        class Cnpdthresholdconfigstartup;

}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable : public ydk::Entity
{
    public:
        Cnpdthresholdhistorytable();
        ~Cnpdthresholdhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdthresholdhistoryentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry> > cnpdthresholdhistoryentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry : public ydk::Entity
{
    public:
        Cnpdthresholdhistoryentry();
        ~Cnpdthresholdhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnpdthresholdhistoryindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryvalue; //type: uint32
        ydk::YLeaf cnpdthresholdhistorytype; //type: Cnpdthresholdhistorytype
        ydk::YLeaf cnpdthresholdhistorytime; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdhistorystatsselect; //type: Ciscopddatatype
        class Cnpdthresholdhistorytype;

}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry


class CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable : public ydk::Entity
{
    public:
        Cnpdsupportedprotocolstable();
        ~Cnpdsupportedprotocolstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnpdsupportedprotocolsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry> > cnpdsupportedprotocolsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable


class CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry : public ydk::Entity
{
    public:
        Cnpdsupportedprotocolsentry();
        ~Cnpdsupportedprotocolsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnpdsupportedprotocolsindex; //type: uint32
        ydk::YLeaf cnpdsupportedprotocolsname; //type: binary

}; // CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

class Ciscopddatatype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bitRateIn;
        static const ydk::Enum::YLeaf bitRateOut;
        static const ydk::Enum::YLeaf bitRateSum;
        static const ydk::Enum::YLeaf byteCountIn;
        static const ydk::Enum::YLeaf byteCountOut;
        static const ydk::Enum::YLeaf byteCountSum;
        static const ydk::Enum::YLeaf packetCountIn;
        static const ydk::Enum::YLeaf packetCountOut;
        static const ydk::Enum::YLeaf packetCountSum;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigstartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistorytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingBreach;
        static const ydk::Enum::YLeaf fallingBreach;

};


}
}

#endif /* _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_ */

