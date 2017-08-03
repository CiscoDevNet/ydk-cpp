#ifndef _CISCO_VPDN_MGMT_MIB_
#define _CISCO_VPDN_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VPDN_MGMT_MIB {

class CiscoVpdnMgmtMib : public ydk::Entity
{
    public:
        CiscoVpdnMgmtMib();
        ~CiscoVpdnMgmtMib();

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

        class Ciscovpdnmgmtmibnotifs; //type: CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs
        class Cvpdnsysteminfo; //type: CiscoVpdnMgmtMib::Cvpdnsysteminfo
        class Cvpdnmultilinkinfo; //type: CiscoVpdnMgmtMib::Cvpdnmultilinkinfo
        class Cvpdnsystemtable; //type: CiscoVpdnMgmtMib::Cvpdnsystemtable
        class Cvpdntunneltable; //type: CiscoVpdnMgmtMib::Cvpdntunneltable
        class Cvpdntunnelattrtable; //type: CiscoVpdnMgmtMib::Cvpdntunnelattrtable
        class Cvpdntunnelsessiontable; //type: CiscoVpdnMgmtMib::Cvpdntunnelsessiontable
        class Cvpdnsessionattrtable; //type: CiscoVpdnMgmtMib::Cvpdnsessionattrtable
        class Cvpdnusertofailhistinfotable; //type: CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable
        class Cvpdntemplatetable; //type: CiscoVpdnMgmtMib::Cvpdntemplatetable
        class Cvpdnbundletable; //type: CiscoVpdnMgmtMib::Cvpdnbundletable
        class Cvpdnbundlechildtable; //type: CiscoVpdnMgmtMib::Cvpdnbundlechildtable

        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs> ciscovpdnmgmtmibnotifs;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundlechildtable> cvpdnbundlechildtable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundletable> cvpdnbundletable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnmultilinkinfo> cvpdnmultilinkinfo;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsessionattrtable> cvpdnsessionattrtable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsysteminfo> cvpdnsysteminfo;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsystemtable> cvpdnsystemtable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntemplatetable> cvpdntemplatetable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelattrtable> cvpdntunnelattrtable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelsessiontable> cvpdntunnelsessiontable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunneltable> cvpdntunneltable;
        std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable> cvpdnusertofailhistinfotable;
        
}; // CiscoVpdnMgmtMib


class CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs : public ydk::Entity
{
    public:
        Ciscovpdnmgmtmibnotifs();
        ~Ciscovpdnmgmtmibnotifs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnnotifsessionid; //type: int32
        ydk::YLeaf cvpdnnotifsessionevent; //type: Cvpdnnotifsessionevent
        class Cvpdnnotifsessionevent;

}; // CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs


class CiscoVpdnMgmtMib::Cvpdnsysteminfo : public ydk::Entity
{
    public:
        Cvpdnsysteminfo();
        ~Cvpdnsysteminfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdntunneltotal; //type: uint32
        ydk::YLeaf cvpdnsessiontotal; //type: uint32
        ydk::YLeaf cvpdndenieduserstotal; //type: uint32
        ydk::YLeaf cvpdnsystemnotifsessionenabled; //type: boolean
        ydk::YLeaf cvpdnsystemclearsessions; //type: Cvpdnsystemclearsessions
        class Cvpdnsystemclearsessions;

}; // CiscoVpdnMgmtMib::Cvpdnsysteminfo


class CiscoVpdnMgmtMib::Cvpdnmultilinkinfo : public ydk::Entity
{
    public:
        Cvpdnmultilinkinfo();
        ~Cvpdnmultilinkinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnbundleswithonelink; //type: uint32
        ydk::YLeaf cvpdnbundleswithtwolinks; //type: uint32
        ydk::YLeaf cvpdnbundleswithmorethantwolinks; //type: uint32
        ydk::YLeaf cvpdnbundlelastchanged; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnmultilinkinfo


class CiscoVpdnMgmtMib::Cvpdnsystemtable : public ydk::Entity
{
    public:
        Cvpdnsystemtable();
        ~Cvpdnsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdnsystementry; //type: CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry> > cvpdnsystementry;
        
}; // CiscoVpdnMgmtMib::Cvpdnsystemtable


class CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry : public ydk::Entity
{
    public:
        Cvpdnsystementry();
        ~Cvpdnsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: Tunneltype
        ydk::YLeaf cvpdnsystemtunneltotal; //type: uint32
        ydk::YLeaf cvpdnsystemsessiontotal; //type: uint32
        ydk::YLeaf cvpdnsystemdenieduserstotal; //type: uint32
        ydk::YLeaf cvpdnsysteminitialconnreq; //type: uint32
        ydk::YLeaf cvpdnsystemsuccessconnreq; //type: uint32
        ydk::YLeaf cvpdnsystemfailedconnreq; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry


class CiscoVpdnMgmtMib::Cvpdntunneltable : public ydk::Entity
{
    public:
        Cvpdntunneltable();
        ~Cvpdntunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdntunnelentry; //type: CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry> > cvpdntunnelentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunneltable


class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry : public ydk::Entity
{
    public:
        Cvpdntunnelentry();
        ~Cvpdntunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdntunneltunnelid; //type: uint32
        ydk::YLeaf cvpdntunnelremotetunnelid; //type: uint32
        ydk::YLeaf cvpdntunnellocalname; //type: string
        ydk::YLeaf cvpdntunnelremotename; //type: string
        ydk::YLeaf cvpdntunnelremoteendpointname; //type: string
        ydk::YLeaf cvpdntunnellocalinitconnection; //type: boolean
        ydk::YLeaf cvpdntunnelorigcause; //type: Cvpdntunnelorigcause
        ydk::YLeaf cvpdntunnelstate; //type: Cvpdntunnelstate
        ydk::YLeaf cvpdntunnelactivesessions; //type: uint32
        ydk::YLeaf cvpdntunneldeniedusers; //type: uint32
        ydk::YLeaf cvpdntunnelsoftshut; //type: boolean
        ydk::YLeaf cvpdntunnelnetworkservicetype; //type: Cvpdntunnelnetworkservicetype
        ydk::YLeaf cvpdntunnellocalipaddress; //type: string
        ydk::YLeaf cvpdntunnelsourceipaddress; //type: string
        ydk::YLeaf cvpdntunnelremoteipaddress; //type: string
        class Cvpdntunnelorigcause;
        class Cvpdntunnelstate;
        class Cvpdntunnelnetworkservicetype;

}; // CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry


class CiscoVpdnMgmtMib::Cvpdntunnelattrtable : public ydk::Entity
{
    public:
        Cvpdntunnelattrtable();
        ~Cvpdntunnelattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdntunnelattrentry; //type: CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry> > cvpdntunnelattrentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunnelattrtable


class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry : public ydk::Entity
{
    public:
        Cvpdntunnelattrentry();
        ~Cvpdntunnelattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: Tunneltype
        ydk::YLeaf cvpdntunnelattrtunnelid; //type: int32
        ydk::YLeaf cvpdntunnelattrremotetunnelid; //type: int32
        ydk::YLeaf cvpdntunnelattrlocalname; //type: string
        ydk::YLeaf cvpdntunnelattrremotename; //type: string
        ydk::YLeaf cvpdntunnelattrremoteendpointname; //type: string
        ydk::YLeaf cvpdntunnelattrlocalinitconnection; //type: boolean
        ydk::YLeaf cvpdntunnelattrorigcause; //type: Cvpdntunnelattrorigcause
        ydk::YLeaf cvpdntunnelattrstate; //type: Cvpdntunnelattrstate
        ydk::YLeaf cvpdntunnelattractivesessions; //type: uint32
        ydk::YLeaf cvpdntunnelattrdeniedusers; //type: uint32
        ydk::YLeaf cvpdntunnelattrsoftshut; //type: boolean
        ydk::YLeaf cvpdntunnelattrnetworkservicetype; //type: Cvpdntunnelattrnetworkservicetype
        ydk::YLeaf cvpdntunnelattrlocalipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrsourceipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrremoteipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrlocalinetaddresstype; //type: Inetaddresstype
        ydk::YLeaf cvpdntunnelattrlocalinetaddress; //type: binary
        ydk::YLeaf cvpdntunnelattrsourceinetaddresstype; //type: Inetaddresstype
        ydk::YLeaf cvpdntunnelattrsourceinetaddress; //type: binary
        ydk::YLeaf cvpdntunnelattrremoteinetaddresstype; //type: Inetaddresstype
        ydk::YLeaf cvpdntunnelattrremoteinetaddress; //type: binary
        class Cvpdntunnelattrorigcause;
        class Cvpdntunnelattrstate;
        class Cvpdntunnelattrnetworkservicetype;

}; // CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry


class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable : public ydk::Entity
{
    public:
        Cvpdntunnelsessiontable();
        ~Cvpdntunnelsessiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdntunnelsessionentry; //type: CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry> > cvpdntunnelsessionentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunnelsessiontable


class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry : public ydk::Entity
{
    public:
        Cvpdntunnelsessionentry();
        ~Cvpdntunnelsessionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::cvpdntunneltunnelid)
        ydk::YLeaf cvpdntunneltunnelid;
        ydk::YLeaf cvpdntunnelsessionid; //type: uint32
        ydk::YLeaf cvpdntunnelsessionusername; //type: string
        ydk::YLeaf cvpdntunnelsessionstate; //type: Cvpdntunnelsessionstate
        ydk::YLeaf cvpdntunnelsessioncallduration; //type: uint32
        ydk::YLeaf cvpdntunnelsessionpacketsout; //type: uint32
        ydk::YLeaf cvpdntunnelsessionbytesout; //type: uint32
        ydk::YLeaf cvpdntunnelsessionpacketsin; //type: uint32
        ydk::YLeaf cvpdntunnelsessionbytesin; //type: uint32
        ydk::YLeaf cvpdntunnelsessiondevicetype; //type: Cvpdntunnelsessiondevicetype
        ydk::YLeaf cvpdntunnelsessiondevicecallerid; //type: string
        ydk::YLeaf cvpdntunnelsessiondevicephyid; //type: int32
        ydk::YLeaf cvpdntunnelsessionmultilink; //type: boolean
        ydk::YLeaf cvpdntunnelsessionmodemslotindex; //type: uint32
        ydk::YLeaf cvpdntunnelsessionmodemportindex; //type: uint32
        ydk::YLeaf cvpdntunnelsessionds1slotindex; //type: uint32
        ydk::YLeaf cvpdntunnelsessionds1portindex; //type: uint32
        ydk::YLeaf cvpdntunnelsessionds1channelindex; //type: uint32
        ydk::YLeaf cvpdntunnelsessionmodemcallstarttime; //type: uint32
        ydk::YLeaf cvpdntunnelsessionmodemcallstartindex; //type: uint32
        class Cvpdntunnelsessionstate;
        class Cvpdntunnelsessiondevicetype;

}; // CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry


class CiscoVpdnMgmtMib::Cvpdnsessionattrtable : public ydk::Entity
{
    public:
        Cvpdnsessionattrtable();
        ~Cvpdnsessionattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdnsessionattrentry; //type: CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry> > cvpdnsessionattrentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnsessionattrtable


class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry : public ydk::Entity
{
    public:
        Cvpdnsessionattrentry();
        ~Cvpdnsessionattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: Tunneltype
        //type: int32 (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::cvpdntunnelattrtunnelid)
        ydk::YLeaf cvpdntunnelattrtunnelid;
        ydk::YLeaf cvpdnsessionattrsessionid; //type: int32
        ydk::YLeaf cvpdnsessionattrusername; //type: string
        ydk::YLeaf cvpdnsessionattrstate; //type: Cvpdnsessionattrstate
        ydk::YLeaf cvpdnsessionattrcallduration; //type: uint32
        ydk::YLeaf cvpdnsessionattrpacketsout; //type: uint32
        ydk::YLeaf cvpdnsessionattrbytesout; //type: uint32
        ydk::YLeaf cvpdnsessionattrpacketsin; //type: uint32
        ydk::YLeaf cvpdnsessionattrbytesin; //type: uint32
        ydk::YLeaf cvpdnsessionattrdevicetype; //type: Cvpdnsessionattrdevicetype
        ydk::YLeaf cvpdnsessionattrdevicecallerid; //type: string
        ydk::YLeaf cvpdnsessionattrdevicephyid; //type: int32
        ydk::YLeaf cvpdnsessionattrmultilink; //type: boolean
        ydk::YLeaf cvpdnsessionattrmodemslotindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrmodemportindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrds1slotindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrds1portindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrds1channelindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrmodemcallstarttime; //type: uint32
        ydk::YLeaf cvpdnsessionattrmodemcallstartindex; //type: uint32
        ydk::YLeaf cvpdnsessionattrvirtualcircuitid; //type: uint32
        ydk::YLeaf cvpdnsessionattrsentpktsdropped; //type: uint32
        ydk::YLeaf cvpdnsessionattrrecvpktsdropped; //type: uint32
        ydk::YLeaf cvpdnsessionattrmultilinkbundle; //type: string
        ydk::YLeaf cvpdnsessionattrmultilinkifindex; //type: int32
        class Cvpdnsessionattrstate;
        class Cvpdnsessionattrdevicetype;

}; // CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry


class CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable : public ydk::Entity
{
    public:
        Cvpdnusertofailhistinfotable();
        ~Cvpdnusertofailhistinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdnusertofailhistinfoentry; //type: CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry> > cvpdnusertofailhistinfoentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable


class CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry : public ydk::Entity
{
    public:
        Cvpdnusertofailhistinfoentry();
        ~Cvpdnusertofailhistinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnunametofailhistuname; //type: string
        ydk::YLeaf cvpdnunametofailhisttunnelid; //type: uint32
        ydk::YLeaf cvpdnunametofailhistuserid; //type: uint32
        ydk::YLeaf cvpdnunametofailhistlocalinitconn; //type: boolean
        ydk::YLeaf cvpdnunametofailhistlocalname; //type: string
        ydk::YLeaf cvpdnunametofailhistremotename; //type: string
        ydk::YLeaf cvpdnunametofailhistsourceip; //type: string
        ydk::YLeaf cvpdnunametofailhistdestip; //type: string
        ydk::YLeaf cvpdnunametofailhistcount; //type: uint32
        ydk::YLeaf cvpdnunametofailhistfailtime; //type: uint32
        ydk::YLeaf cvpdnunametofailhistfailtype; //type: string
        ydk::YLeaf cvpdnunametofailhistfailreason; //type: string
        ydk::YLeaf cvpdnunametofailhistsourceinettype; //type: Inetaddresstype
        ydk::YLeaf cvpdnunametofailhistsourceinetaddr; //type: binary
        ydk::YLeaf cvpdnunametofailhistdestinettype; //type: Inetaddresstype
        ydk::YLeaf cvpdnunametofailhistdestinetaddr; //type: binary

}; // CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry


class CiscoVpdnMgmtMib::Cvpdntemplatetable : public ydk::Entity
{
    public:
        Cvpdntemplatetable();
        ~Cvpdntemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdntemplateentry; //type: CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry> > cvpdntemplateentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntemplatetable


class CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry : public ydk::Entity
{
    public:
        Cvpdntemplateentry();
        ~Cvpdntemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdntemplatename; //type: string
        ydk::YLeaf cvpdntemplateactivesessions; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry


class CiscoVpdnMgmtMib::Cvpdnbundletable : public ydk::Entity
{
    public:
        Cvpdnbundletable();
        ~Cvpdnbundletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdnbundleentry; //type: CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry> > cvpdnbundleentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnbundletable


class CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry : public ydk::Entity
{
    public:
        Cvpdnbundleentry();
        ~Cvpdnbundleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpdnbundlename; //type: string
        ydk::YLeaf cvpdnbundlelinkcount; //type: uint32
        ydk::YLeaf cvpdnbundleendpointtype; //type: Cvpdnbundleendpointtype
        ydk::YLeaf cvpdnbundleendpoint; //type: binary
        ydk::YLeaf cvpdnbundlepeeripaddrtype; //type: Inetaddresstype
        ydk::YLeaf cvpdnbundlepeeripaddr; //type: binary
        ydk::YLeaf cvpdnbundleendpointclass; //type: Endpointclass
        class Cvpdnbundleendpointtype;

}; // CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry


class CiscoVpdnMgmtMib::Cvpdnbundlechildtable : public ydk::Entity
{
    public:
        Cvpdnbundlechildtable();
        ~Cvpdnbundlechildtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpdnbundlechildentry; //type: CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry> > cvpdnbundlechildentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnbundlechildtable


class CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry : public ydk::Entity
{
    public:
        Cvpdnbundlechildentry();
        ~Cvpdnbundlechildentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::cvpdnbundlename)
        ydk::YLeaf cvpdnbundlename;
        ydk::YLeaf cvpdnbundlechildtunneltype; //type: Tunneltype
        ydk::YLeaf cvpdnbundlechildtunnelid; //type: uint32
        ydk::YLeaf cvpdnbundlechildsessionid; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry

class Endpointclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf ipV4Address;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf magicNumber;
        static const ydk::Enum::YLeaf phone;

};

class Tunneltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2f;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf pptp;

};

class CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::Cvpdnnotifsessionevent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pwUp;
        static const ydk::Enum::YLeaf pwDown;

};

class CiscoVpdnMgmtMib::Cvpdnsysteminfo::Cvpdnsystemclearsessions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf l2f;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf pptp;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelorigcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf stack;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closing;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelnetworkservicetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrorigcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf xconnect;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf l2fOpening;
        static const ydk::Enum::YLeaf l2fOpenWait;
        static const ydk::Enum::YLeaf l2fOpen;
        static const ydk::Enum::YLeaf l2fClosing;
        static const ydk::Enum::YLeaf l2fCloseWait;
        static const ydk::Enum::YLeaf l2tpIdle;
        static const ydk::Enum::YLeaf l2tpWaitCtlReply;
        static const ydk::Enum::YLeaf l2tpEstablished;
        static const ydk::Enum::YLeaf l2tpShuttingDown;
        static const ydk::Enum::YLeaf l2tpNoSessionLeft;
        static const ydk::Enum::YLeaf pptpIdle;
        static const ydk::Enum::YLeaf pptpWaitConnect;
        static const ydk::Enum::YLeaf pptpWaitCtlRequest;
        static const ydk::Enum::YLeaf pptpWaitCtlReply;
        static const ydk::Enum::YLeaf pptpEstablished;
        static const ydk::Enum::YLeaf pptpWaitStopReply;
        static const ydk::Enum::YLeaf pptpTerminal;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrnetworkservicetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;

};

class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf waitingForTunnel;

};

class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf asyncInternalModem;
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf bchan;
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf virtualAccess;
        static const ydk::Enum::YLeaf xdsl;
        static const ydk::Enum::YLeaf cable;

};

class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf l2fOpening;
        static const ydk::Enum::YLeaf l2fOpen;
        static const ydk::Enum::YLeaf l2fCloseWait;
        static const ydk::Enum::YLeaf l2fWaitingForTunnel;
        static const ydk::Enum::YLeaf l2tpIdle;
        static const ydk::Enum::YLeaf l2tpWaitingTunnel;
        static const ydk::Enum::YLeaf l2tpWaitReply;
        static const ydk::Enum::YLeaf l2tpWaitConnect;
        static const ydk::Enum::YLeaf l2tpEstablished;
        static const ydk::Enum::YLeaf l2tpShuttingDown;
        static const ydk::Enum::YLeaf pptpWaitVAccess;
        static const ydk::Enum::YLeaf pptpPacEstablished;
        static const ydk::Enum::YLeaf pptpWaitTunnel;
        static const ydk::Enum::YLeaf pptpWaitOCRP;
        static const ydk::Enum::YLeaf pptpPnsEstablished;
        static const ydk::Enum::YLeaf pptpWaitCallDisc;
        static const ydk::Enum::YLeaf pptpTerminal;

};

class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf asyncInternalModem;
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf bchan;
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf virtualAccess;
        static const ydk::Enum::YLeaf xdsl;
        static const ydk::Enum::YLeaf cable;

};

class CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf ipV4Address;
        static const ydk::Enum::YLeaf ipV6Address;
        static const ydk::Enum::YLeaf phone;
        static const ydk::Enum::YLeaf magicNumber;

};


}
}

#endif /* _CISCO_VPDN_MGMT_MIB_ */

