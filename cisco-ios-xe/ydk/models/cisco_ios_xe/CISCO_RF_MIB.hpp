#ifndef _CISCO_RF_MIB_
#define _CISCO_RF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RF_MIB {

class CiscoRfMib : public ydk::Entity
{
    public:
        CiscoRfMib();
        ~CiscoRfMib();

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


class CiscoRfMib::Crfstatus : public ydk::Entity
{
    public:
        Crfstatus();
        ~Crfstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfstatusunitid; //type: int32
        ydk::YLeaf crfstatusunitstate; //type: Rfstate
        ydk::YLeaf crfstatuspeerunitid; //type: int32
        ydk::YLeaf crfstatuspeerunitstate; //type: Rfstate
        ydk::YLeaf crfstatusprimarymode; //type: boolean
        ydk::YLeaf crfstatusduplexmode; //type: boolean
        ydk::YLeaf crfstatusmanualswactinhibit; //type: boolean
        ydk::YLeaf crfstatuslastswactreasoncode; //type: Rfswactreasontype
        ydk::YLeaf crfstatusfailovertime; //type: uint32
        ydk::YLeaf crfstatuspeerstandbyentrytime; //type: uint32
        ydk::YLeaf crfstatusissustate; //type: Rfissustate
        ydk::YLeaf crfstatusissustaterev1; //type: Rfissustaterev1
        ydk::YLeaf crfstatusissufromversion; //type: string
        ydk::YLeaf crfstatusissutoversion; //type: string

}; // CiscoRfMib::Crfstatus


class CiscoRfMib::Crfcfg : public ydk::Entity
{
    public:
        Crfcfg();
        ~Crfcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfcfgsplitmode; //type: boolean
        ydk::YLeaf crfcfgkeepalivethresh; //type: uint32
        ydk::YLeaf crfcfgkeepalivethreshmin; //type: uint32
        ydk::YLeaf crfcfgkeepalivethreshmax; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimer; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimermin; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimermax; //type: uint32
        ydk::YLeaf crfcfgnotiftimer; //type: uint32
        ydk::YLeaf crfcfgnotiftimermin; //type: uint32
        ydk::YLeaf crfcfgnotiftimermax; //type: uint32
        ydk::YLeaf crfcfgadminaction; //type: Rfaction
        ydk::YLeaf crfcfgnotifsenabled; //type: boolean
        ydk::YLeaf crfcfgmaintenancemode; //type: boolean
        ydk::YLeaf crfcfgredundancymode; //type: Rfmode
        ydk::YLeaf crfcfgredundancymodedescr; //type: string
        ydk::YLeaf crfcfgredundancyopermode; //type: Rfmode

}; // CiscoRfMib::Crfcfg


class CiscoRfMib::Crfhistory : public ydk::Entity
{
    public:
        Crfhistory();
        ~Crfhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfhistorytablemaxlength; //type: uint32
        ydk::YLeaf crfhistorycoldstarts; //type: uint32
        ydk::YLeaf crfhistorystandbyavailtime; //type: int32

}; // CiscoRfMib::Crfhistory


class CiscoRfMib::Crfstatusrfmodecapstable : public ydk::Entity
{
    public:
        Crfstatusrfmodecapstable();
        ~Crfstatusrfmodecapstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crfstatusrfmodecapsentry; //type: CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry> > crfstatusrfmodecapsentry;
        
}; // CiscoRfMib::Crfstatusrfmodecapstable


class CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry : public ydk::Entity
{
    public:
        Crfstatusrfmodecapsentry();
        ~Crfstatusrfmodecapsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfstatusrfmodecapsmode; //type: Rfmode
        ydk::YLeaf crfstatusrfmodecapsmodedescr; //type: string

}; // CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry


class CiscoRfMib::Crfhistoryswitchovertable : public ydk::Entity
{
    public:
        Crfhistoryswitchovertable();
        ~Crfhistoryswitchovertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crfhistoryswitchoverentry; //type: CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry> > crfhistoryswitchoverentry;
        
}; // CiscoRfMib::Crfhistoryswitchovertable


class CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry : public ydk::Entity
{
    public:
        Crfhistoryswitchoverentry();
        ~Crfhistoryswitchoverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfhistoryswitchoverindex; //type: uint32
        ydk::YLeaf crfhistoryprevactiveunitid; //type: int32
        ydk::YLeaf crfhistorycurractiveunitid; //type: int32
        ydk::YLeaf crfhistoryswitchoverreason; //type: Rfswactreasontype
        ydk::YLeaf crfhistoryswacttime; //type: string

}; // CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry


class CiscoRfMib::Crfstatusrfclienttable : public ydk::Entity
{
    public:
        Crfstatusrfclienttable();
        ~Crfstatusrfclienttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crfstatusrfcliententry; //type: CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry

        std::vector<std::shared_ptr<CISCO_RF_MIB::CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry> > crfstatusrfcliententry;
        
}; // CiscoRfMib::Crfstatusrfclienttable


class CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry : public ydk::Entity
{
    public:
        Crfstatusrfcliententry();
        ~Crfstatusrfcliententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crfstatusrfclientid; //type: uint32
        ydk::YLeaf crfstatusrfclientdescr; //type: string
        ydk::YLeaf crfstatusrfclientseq; //type: uint32
        ydk::YLeaf crfstatusrfclientredtime; //type: uint32
        ydk::YLeaf crfstatusrfclientstatus; //type: Rfclientstatus

}; // CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry

class Rfaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAction;
        static const ydk::Enum::YLeaf reloadPeer;
        static const ydk::Enum::YLeaf reloadShelf;
        static const ydk::Enum::YLeaf switchActivity;
        static const ydk::Enum::YLeaf forceSwitchActivity;

};

class Rfmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonRedundant;
        static const ydk::Enum::YLeaf staticLoadShareNonRedundant;
        static const ydk::Enum::YLeaf dynamicLoadShareNonRedundant;
        static const ydk::Enum::YLeaf staticLoadShareRedundant;
        static const ydk::Enum::YLeaf dynamicLoadShareRedundant;
        static const ydk::Enum::YLeaf coldStandbyRedundant;
        static const ydk::Enum::YLeaf warmStandbyRedundant;
        static const ydk::Enum::YLeaf hotStandbyRedundant;

};

class Rfstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notKnown;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf initialization;
        static const ydk::Enum::YLeaf negotiation;
        static const ydk::Enum::YLeaf standbyCold;
        static const ydk::Enum::YLeaf standbyColdConfig;
        static const ydk::Enum::YLeaf standbyColdFileSys;
        static const ydk::Enum::YLeaf standbyColdBulk;
        static const ydk::Enum::YLeaf standbyHot;
        static const ydk::Enum::YLeaf activeFast;
        static const ydk::Enum::YLeaf activeDrain;
        static const ydk::Enum::YLeaf activePreconfig;
        static const ydk::Enum::YLeaf activePostconfig;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeExtraload;
        static const ydk::Enum::YLeaf activeHandback;

};

class Rfissustaterev1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf systemReset;
        static const ydk::Enum::YLeaf loadVersion;
        static const ydk::Enum::YLeaf loadVersionSwitchover;
        static const ydk::Enum::YLeaf runVersion;
        static const ydk::Enum::YLeaf runVersionSwitchover;
        static const ydk::Enum::YLeaf commitVersion;

};

class Rfswactreasontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notKnown;
        static const ydk::Enum::YLeaf userInitiated;
        static const ydk::Enum::YLeaf userForced;
        static const ydk::Enum::YLeaf activeUnitFailed;
        static const ydk::Enum::YLeaf activeUnitRemoved;

};

class Rfissustate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf loadVersion;
        static const ydk::Enum::YLeaf runVersion;
        static const ydk::Enum::YLeaf commitVersion;

};

class Rfclientstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noStatus;
        static const ydk::Enum::YLeaf clientNotRedundant;
        static const ydk::Enum::YLeaf clientRedundancyInProgress;
        static const ydk::Enum::YLeaf clientRedundant;

};


}
}

#endif /* _CISCO_RF_MIB_ */

