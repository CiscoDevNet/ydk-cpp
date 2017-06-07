#ifndef _CISCO_RF_MIB_
#define _CISCO_RF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_RF_MIB {

class CiscoRfMib : public Entity
{
    public:
        CiscoRfMib();
        ~CiscoRfMib();

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

        class Crfstatus; //type: CiscoRfMib::Crfstatus
        class Crfcfg; //type: CiscoRfMib::Crfcfg
        class Crfhistory; //type: CiscoRfMib::Crfhistory
        class Crfstatusrfmodecapstable; //type: CiscoRfMib::Crfstatusrfmodecapstable
        class Crfhistoryswitchovertable; //type: CiscoRfMib::Crfhistoryswitchovertable
        class Crfstatusrfclienttable; //type: CiscoRfMib::Crfstatusrfclienttable

        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfcfg> crfcfg;
        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfhistory> crfhistory;
        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfhistoryswitchovertable> crfhistoryswitchovertable;
        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatus> crfstatus;
        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfclienttable> crfstatusrfclienttable;
        std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfmodecapstable> crfstatusrfmodecapstable;
        
}; // CiscoRfMib


class CiscoRfMib::Crfstatus : public Entity
{
    public:
        Crfstatus();
        ~Crfstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfstatusunitid; //type: int32
        YLeaf crfstatusunitstate; //type: RfstateEnum
        YLeaf crfstatuspeerunitid; //type: int32
        YLeaf crfstatuspeerunitstate; //type: RfstateEnum
        YLeaf crfstatusprimarymode; //type: boolean
        YLeaf crfstatusduplexmode; //type: boolean
        YLeaf crfstatusmanualswactinhibit; //type: boolean
        YLeaf crfstatuslastswactreasoncode; //type: RfswactreasontypeEnum
        YLeaf crfstatusfailovertime; //type: uint32
        YLeaf crfstatuspeerstandbyentrytime; //type: uint32
        YLeaf crfstatusissustate; //type: RfissustateEnum
        YLeaf crfstatusissustaterev1; //type: Rfissustaterev1Enum
        YLeaf crfstatusissufromversion; //type: string
        YLeaf crfstatusissutoversion; //type: string

}; // CiscoRfMib::Crfstatus


class CiscoRfMib::Crfcfg : public Entity
{
    public:
        Crfcfg();
        ~Crfcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfcfgsplitmode; //type: boolean
        YLeaf crfcfgkeepalivethresh; //type: uint32
        YLeaf crfcfgkeepalivethreshmin; //type: uint32
        YLeaf crfcfgkeepalivethreshmax; //type: uint32
        YLeaf crfcfgkeepalivetimer; //type: uint32
        YLeaf crfcfgkeepalivetimermin; //type: uint32
        YLeaf crfcfgkeepalivetimermax; //type: uint32
        YLeaf crfcfgnotiftimer; //type: uint32
        YLeaf crfcfgnotiftimermin; //type: uint32
        YLeaf crfcfgnotiftimermax; //type: uint32
        YLeaf crfcfgadminaction; //type: RfactionEnum
        YLeaf crfcfgnotifsenabled; //type: boolean
        YLeaf crfcfgmaintenancemode; //type: boolean
        YLeaf crfcfgredundancymode; //type: RfmodeEnum
        YLeaf crfcfgredundancymodedescr; //type: string
        YLeaf crfcfgredundancyopermode; //type: RfmodeEnum

}; // CiscoRfMib::Crfcfg


class CiscoRfMib::Crfhistory : public Entity
{
    public:
        Crfhistory();
        ~Crfhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfhistorytablemaxlength; //type: uint32
        YLeaf crfhistorycoldstarts; //type: uint32
        YLeaf crfhistorystandbyavailtime; //type: int32

}; // CiscoRfMib::Crfhistory


class CiscoRfMib::Crfstatusrfmodecapstable : public Entity
{
    public:
        Crfstatusrfmodecapstable();
        ~Crfstatusrfmodecapstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crfstatusrfmodecapsentry; //type: CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry> > crfstatusrfmodecapsentry;
        
}; // CiscoRfMib::Crfstatusrfmodecapstable


class CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry : public Entity
{
    public:
        Crfstatusrfmodecapsentry();
        ~Crfstatusrfmodecapsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfstatusrfmodecapsmode; //type: RfmodeEnum
        YLeaf crfstatusrfmodecapsmodedescr; //type: string

}; // CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry


class CiscoRfMib::Crfhistoryswitchovertable : public Entity
{
    public:
        Crfhistoryswitchovertable();
        ~Crfhistoryswitchovertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crfhistoryswitchoverentry; //type: CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry> > crfhistoryswitchoverentry;
        
}; // CiscoRfMib::Crfhistoryswitchovertable


class CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry : public Entity
{
    public:
        Crfhistoryswitchoverentry();
        ~Crfhistoryswitchoverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfhistoryswitchoverindex; //type: uint32
        YLeaf crfhistoryprevactiveunitid; //type: int32
        YLeaf crfhistorycurractiveunitid; //type: int32
        YLeaf crfhistoryswitchoverreason; //type: RfswactreasontypeEnum
        YLeaf crfhistoryswacttime; //type: string

}; // CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry


class CiscoRfMib::Crfstatusrfclienttable : public Entity
{
    public:
        Crfstatusrfclienttable();
        ~Crfstatusrfclienttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crfstatusrfcliententry; //type: CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry> > crfstatusrfcliententry;
        
}; // CiscoRfMib::Crfstatusrfclienttable


class CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry : public Entity
{
    public:
        Crfstatusrfcliententry();
        ~Crfstatusrfcliententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crfstatusrfclientid; //type: uint32
        YLeaf crfstatusrfclientdescr; //type: string
        YLeaf crfstatusrfclientseq; //type: uint32
        YLeaf crfstatusrfclientredtime; //type: uint32
        YLeaf crfstatusrfclientstatus; //type: RfclientstatusEnum

}; // CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry

class RfstateEnum : public Enum
{
    public:
        static const Enum::YLeaf notKnown;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf initialization;
        static const Enum::YLeaf negotiation;
        static const Enum::YLeaf standbyCold;
        static const Enum::YLeaf standbyColdConfig;
        static const Enum::YLeaf standbyColdFileSys;
        static const Enum::YLeaf standbyColdBulk;
        static const Enum::YLeaf standbyHot;
        static const Enum::YLeaf activeFast;
        static const Enum::YLeaf activeDrain;
        static const Enum::YLeaf activePreconfig;
        static const Enum::YLeaf activePostconfig;
        static const Enum::YLeaf active;
        static const Enum::YLeaf activeExtraload;
        static const Enum::YLeaf activeHandback;

};

class RfissustateEnum : public Enum
{
    public:
        static const Enum::YLeaf unset;
        static const Enum::YLeaf init;
        static const Enum::YLeaf loadVersion;
        static const Enum::YLeaf runVersion;
        static const Enum::YLeaf commitVersion;

};

class RfactionEnum : public Enum
{
    public:
        static const Enum::YLeaf noAction;
        static const Enum::YLeaf reloadPeer;
        static const Enum::YLeaf reloadShelf;
        static const Enum::YLeaf switchActivity;
        static const Enum::YLeaf forceSwitchActivity;

};

class RfmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf nonRedundant;
        static const Enum::YLeaf staticLoadShareNonRedundant;
        static const Enum::YLeaf dynamicLoadShareNonRedundant;
        static const Enum::YLeaf staticLoadShareRedundant;
        static const Enum::YLeaf dynamicLoadShareRedundant;
        static const Enum::YLeaf coldStandbyRedundant;
        static const Enum::YLeaf warmStandbyRedundant;
        static const Enum::YLeaf hotStandbyRedundant;

};

class RfclientstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf noStatus;
        static const Enum::YLeaf clientNotRedundant;
        static const Enum::YLeaf clientRedundancyInProgress;
        static const Enum::YLeaf clientRedundant;

};

class RfswactreasontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unsupported;
        static const Enum::YLeaf none;
        static const Enum::YLeaf notKnown;
        static const Enum::YLeaf userInitiated;
        static const Enum::YLeaf userForced;
        static const Enum::YLeaf activeUnitFailed;
        static const Enum::YLeaf activeUnitRemoved;

};

class Rfissustaterev1Enum : public Enum
{
    public:
        static const Enum::YLeaf init;
        static const Enum::YLeaf systemReset;
        static const Enum::YLeaf loadVersion;
        static const Enum::YLeaf loadVersionSwitchover;
        static const Enum::YLeaf runVersion;
        static const Enum::YLeaf runVersionSwitchover;
        static const Enum::YLeaf commitVersion;

};


}
}

#endif /* _CISCO_RF_MIB_ */

