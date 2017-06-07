#ifndef _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_
#define _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

class CiscoNbarProtocolDiscoveryMib : public Entity
{
    public:
        CiscoNbarProtocolDiscoveryMib();
        ~CiscoNbarProtocolDiscoveryMib();

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


class CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig : public Entity
{
    public:
        Cnpdnotificationsconfig();
        ~Cnpdnotificationsconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnpdnotificationsenable; //type: boolean

}; // CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig


class CiscoNbarProtocolDiscoveryMib::Cnpdstatustable : public Entity
{
    public:
        Cnpdstatustable();
        ~Cnpdstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdstatusentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry> > cnpdstatusentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdstatustable


class CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry : public Entity
{
    public:
        Cnpdstatusentry();
        ~Cnpdstatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cnpdstatuspdenable; //type: boolean
        YLeaf cnpdstatuslastupdatetime; //type: uint32

}; // CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry


class CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable : public Entity
{
    public:
        Cnpdallstatstable();
        ~Cnpdallstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdallstatsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry> > cnpdallstatsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable


class CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry : public Entity
{
    public:
        Cnpdallstatsentry();
        ~Cnpdallstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cnpdallstatsprotocolsindex; //type: uint32
        YLeaf cnpdallstatsprotocolname; //type: binary
        YLeaf cnpdallstatsinpkts; //type: uint32
        YLeaf cnpdallstatsoutpkts; //type: uint32
        YLeaf cnpdallstatsinbytes; //type: uint32
        YLeaf cnpdallstatsoutbytes; //type: uint32
        YLeaf cnpdallstatshcinpkts; //type: uint64
        YLeaf cnpdallstatshcoutpkts; //type: uint64
        YLeaf cnpdallstatshcinbytes; //type: uint64
        YLeaf cnpdallstatshcoutbytes; //type: uint64
        YLeaf cnpdallstatsinbitrate; //type: uint32
        YLeaf cnpdallstatsoutbitrate; //type: uint32

}; // CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable : public Entity
{
    public:
        Cnpdtopnconfigtable();
        ~Cnpdtopnconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdtopnconfigentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry> > cnpdtopnconfigentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry : public Entity
{
    public:
        Cnpdtopnconfigentry();
        ~Cnpdtopnconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnpdtopnconfigindex; //type: uint32
        YLeaf cnpdtopnconfigifindex; //type: int32
        YLeaf cnpdtopnconfigstatsselect; //type: CiscopddatatypeEnum
        YLeaf cnpdtopnconfigsampletime; //type: uint32
        YLeaf cnpdtopnconfigrequestedsize; //type: uint32
        YLeaf cnpdtopnconfiggrantedsize; //type: uint32
        YLeaf cnpdtopnconfigtime; //type: uint32
        YLeaf cnpdtopnconfigstatus; //type: RowstatusEnum

}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable : public Entity
{
    public:
        Cnpdtopnstatstable();
        ~Cnpdtopnstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdtopnstatsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry> > cnpdtopnstatsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable


class CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry : public Entity
{
    public:
        Cnpdtopnstatsentry();
        ~Cnpdtopnstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::cnpdtopnconfigindex)
        YLeaf cnpdtopnconfigindex;
        YLeaf cnpdtopnstatsindex; //type: uint32
        YLeaf cnpdtopnstatsprotocolname; //type: binary
        YLeaf cnpdtopnstatsrate; //type: uint32
        YLeaf cnpdtopnstatshcrate; //type: uint64

}; // CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable : public Entity
{
    public:
        Cnpdthresholdconfigtable();
        ~Cnpdthresholdconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdthresholdconfigentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry> > cnpdthresholdconfigentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry : public Entity
{
    public:
        Cnpdthresholdconfigentry();
        ~Cnpdthresholdconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnpdthresholdconfigindex; //type: uint32
        YLeaf cnpdthresholdconfigifindex; //type: int32
        YLeaf cnpdthresholdconfiginterval; //type: uint32
        YLeaf cnpdthresholdconfigsampletype; //type: CnpdthresholdconfigsampletypeEnum
        YLeaf cnpdthresholdconfigprotocol; //type: uint32
        YLeaf cnpdthresholdconfigprotocolany; //type: boolean
        YLeaf cnpdthresholdconfigstatsselect; //type: CiscopddatatypeEnum
        YLeaf cnpdthresholdconfigstartup; //type: CnpdthresholdconfigstartupEnum
        YLeaf cnpdthresholdconfigrising; //type: uint32
        YLeaf cnpdthresholdconfigfalling; //type: uint32
        YLeaf cnpdthresholdconfigstatus; //type: RowstatusEnum
        class CnpdthresholdconfigsampletypeEnum;
        class CnpdthresholdconfigstartupEnum;

}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable : public Entity
{
    public:
        Cnpdthresholdhistorytable();
        ~Cnpdthresholdhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdthresholdhistoryentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry> > cnpdthresholdhistoryentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable


class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry : public Entity
{
    public:
        Cnpdthresholdhistoryentry();
        ~Cnpdthresholdhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnpdthresholdhistoryindex; //type: uint32
        YLeaf cnpdthresholdhistoryconfigindex; //type: uint32
        YLeaf cnpdthresholdhistoryvalue; //type: uint32
        YLeaf cnpdthresholdhistorytype; //type: CnpdthresholdhistorytypeEnum
        YLeaf cnpdthresholdhistorytime; //type: uint32
        YLeaf cnpdthresholdhistoryprotocol; //type: uint32
        YLeaf cnpdthresholdhistorystatsselect; //type: CiscopddatatypeEnum
        class CnpdthresholdhistorytypeEnum;

}; // CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry


class CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable : public Entity
{
    public:
        Cnpdsupportedprotocolstable();
        ~Cnpdsupportedprotocolstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnpdsupportedprotocolsentry; //type: CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

        std::vector<std::shared_ptr<CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry> > cnpdsupportedprotocolsentry;
        
}; // CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable


class CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry : public Entity
{
    public:
        Cnpdsupportedprotocolsentry();
        ~Cnpdsupportedprotocolsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnpdsupportedprotocolsindex; //type: uint32
        YLeaf cnpdsupportedprotocolsname; //type: binary

}; // CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

class CiscopddatatypeEnum : public Enum
{
    public:
        static const Enum::YLeaf bitRateIn;
        static const Enum::YLeaf bitRateOut;
        static const Enum::YLeaf bitRateSum;
        static const Enum::YLeaf byteCountIn;
        static const Enum::YLeaf byteCountOut;
        static const Enum::YLeaf byteCountSum;
        static const Enum::YLeaf packetCountIn;
        static const Enum::YLeaf packetCountOut;
        static const Enum::YLeaf packetCountSum;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigsampletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absoluteValue;
        static const Enum::YLeaf deltaValue;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigstartupEnum : public Enum
{
    public:
        static const Enum::YLeaf rising;
        static const Enum::YLeaf falling;
        static const Enum::YLeaf risingOrFalling;

};

class CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::CnpdthresholdhistorytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf risingBreach;
        static const Enum::YLeaf fallingBreach;

};


}
}

#endif /* _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_ */

