#ifndef _CISCO_VPDN_MGMT_MIB_
#define _CISCO_VPDN_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_VPDN_MGMT_MIB {

class CiscoVpdnMgmtMib : public Entity
{
    public:
        CiscoVpdnMgmtMib();
        ~CiscoVpdnMgmtMib();

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


class CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs : public Entity
{
    public:
        Ciscovpdnmgmtmibnotifs();
        ~Ciscovpdnmgmtmibnotifs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnnotifsessionid; //type: int32
        YLeaf cvpdnnotifsessionevent; //type: CvpdnnotifsessioneventEnum
        class CvpdnnotifsessioneventEnum;

}; // CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs


class CiscoVpdnMgmtMib::Cvpdnsysteminfo : public Entity
{
    public:
        Cvpdnsysteminfo();
        ~Cvpdnsysteminfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdntunneltotal; //type: uint32
        YLeaf cvpdnsessiontotal; //type: uint32
        YLeaf cvpdndenieduserstotal; //type: uint32
        YLeaf cvpdnsystemnotifsessionenabled; //type: boolean
        YLeaf cvpdnsystemclearsessions; //type: CvpdnsystemclearsessionsEnum
        class CvpdnsystemclearsessionsEnum;

}; // CiscoVpdnMgmtMib::Cvpdnsysteminfo


class CiscoVpdnMgmtMib::Cvpdnmultilinkinfo : public Entity
{
    public:
        Cvpdnmultilinkinfo();
        ~Cvpdnmultilinkinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnbundleswithonelink; //type: uint32
        YLeaf cvpdnbundleswithtwolinks; //type: uint32
        YLeaf cvpdnbundleswithmorethantwolinks; //type: uint32
        YLeaf cvpdnbundlelastchanged; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnmultilinkinfo


class CiscoVpdnMgmtMib::Cvpdnsystemtable : public Entity
{
    public:
        Cvpdnsystemtable();
        ~Cvpdnsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdnsystementry; //type: CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry> > cvpdnsystementry;
        
}; // CiscoVpdnMgmtMib::Cvpdnsystemtable


class CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry : public Entity
{
    public:
        Cvpdnsystementry();
        ~Cvpdnsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnsystemtunneltype; //type: TunneltypeEnum
        YLeaf cvpdnsystemtunneltotal; //type: uint32
        YLeaf cvpdnsystemsessiontotal; //type: uint32
        YLeaf cvpdnsystemdenieduserstotal; //type: uint32
        YLeaf cvpdnsysteminitialconnreq; //type: uint32
        YLeaf cvpdnsystemsuccessconnreq; //type: uint32
        YLeaf cvpdnsystemfailedconnreq; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry


class CiscoVpdnMgmtMib::Cvpdntunneltable : public Entity
{
    public:
        Cvpdntunneltable();
        ~Cvpdntunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdntunnelentry; //type: CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry> > cvpdntunnelentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunneltable


class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry : public Entity
{
    public:
        Cvpdntunnelentry();
        ~Cvpdntunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdntunneltunnelid; //type: uint32
        YLeaf cvpdntunnelremotetunnelid; //type: uint32
        YLeaf cvpdntunnellocalname; //type: string
        YLeaf cvpdntunnelremotename; //type: string
        YLeaf cvpdntunnelremoteendpointname; //type: string
        YLeaf cvpdntunnellocalinitconnection; //type: boolean
        YLeaf cvpdntunnelorigcause; //type: CvpdntunnelorigcauseEnum
        YLeaf cvpdntunnelstate; //type: CvpdntunnelstateEnum
        YLeaf cvpdntunnelactivesessions; //type: uint32
        YLeaf cvpdntunneldeniedusers; //type: uint32
        YLeaf cvpdntunnelsoftshut; //type: boolean
        YLeaf cvpdntunnelnetworkservicetype; //type: CvpdntunnelnetworkservicetypeEnum
        YLeaf cvpdntunnellocalipaddress; //type: string
        YLeaf cvpdntunnelsourceipaddress; //type: string
        YLeaf cvpdntunnelremoteipaddress; //type: string
        class CvpdntunnelorigcauseEnum;
        class CvpdntunnelstateEnum;
        class CvpdntunnelnetworkservicetypeEnum;

}; // CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry


class CiscoVpdnMgmtMib::Cvpdntunnelattrtable : public Entity
{
    public:
        Cvpdntunnelattrtable();
        ~Cvpdntunnelattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdntunnelattrentry; //type: CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry> > cvpdntunnelattrentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunnelattrtable


class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry : public Entity
{
    public:
        Cvpdntunnelattrentry();
        ~Cvpdntunnelattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnsystemtunneltype; //type: TunneltypeEnum
        YLeaf cvpdntunnelattrtunnelid; //type: int32
        YLeaf cvpdntunnelattrremotetunnelid; //type: int32
        YLeaf cvpdntunnelattrlocalname; //type: string
        YLeaf cvpdntunnelattrremotename; //type: string
        YLeaf cvpdntunnelattrremoteendpointname; //type: string
        YLeaf cvpdntunnelattrlocalinitconnection; //type: boolean
        YLeaf cvpdntunnelattrorigcause; //type: CvpdntunnelattrorigcauseEnum
        YLeaf cvpdntunnelattrstate; //type: CvpdntunnelattrstateEnum
        YLeaf cvpdntunnelattractivesessions; //type: uint32
        YLeaf cvpdntunnelattrdeniedusers; //type: uint32
        YLeaf cvpdntunnelattrsoftshut; //type: boolean
        YLeaf cvpdntunnelattrnetworkservicetype; //type: CvpdntunnelattrnetworkservicetypeEnum
        YLeaf cvpdntunnelattrlocalipaddress; //type: string
        YLeaf cvpdntunnelattrsourceipaddress; //type: string
        YLeaf cvpdntunnelattrremoteipaddress; //type: string
        YLeaf cvpdntunnelattrlocalinetaddresstype; //type: InetaddresstypeEnum
        YLeaf cvpdntunnelattrlocalinetaddress; //type: binary
        YLeaf cvpdntunnelattrsourceinetaddresstype; //type: InetaddresstypeEnum
        YLeaf cvpdntunnelattrsourceinetaddress; //type: binary
        YLeaf cvpdntunnelattrremoteinetaddresstype; //type: InetaddresstypeEnum
        YLeaf cvpdntunnelattrremoteinetaddress; //type: binary
        class CvpdntunnelattrorigcauseEnum;
        class CvpdntunnelattrstateEnum;
        class CvpdntunnelattrnetworkservicetypeEnum;

}; // CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry


class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable : public Entity
{
    public:
        Cvpdntunnelsessiontable();
        ~Cvpdntunnelsessiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdntunnelsessionentry; //type: CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry> > cvpdntunnelsessionentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntunnelsessiontable


class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry : public Entity
{
    public:
        Cvpdntunnelsessionentry();
        ~Cvpdntunnelsessionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::cvpdntunneltunnelid)
        YLeaf cvpdntunneltunnelid;
        YLeaf cvpdntunnelsessionid; //type: uint32
        YLeaf cvpdntunnelsessionusername; //type: string
        YLeaf cvpdntunnelsessionstate; //type: CvpdntunnelsessionstateEnum
        YLeaf cvpdntunnelsessioncallduration; //type: uint32
        YLeaf cvpdntunnelsessionpacketsout; //type: uint32
        YLeaf cvpdntunnelsessionbytesout; //type: uint32
        YLeaf cvpdntunnelsessionpacketsin; //type: uint32
        YLeaf cvpdntunnelsessionbytesin; //type: uint32
        YLeaf cvpdntunnelsessiondevicetype; //type: CvpdntunnelsessiondevicetypeEnum
        YLeaf cvpdntunnelsessiondevicecallerid; //type: string
        YLeaf cvpdntunnelsessiondevicephyid; //type: int32
        YLeaf cvpdntunnelsessionmultilink; //type: boolean
        YLeaf cvpdntunnelsessionmodemslotindex; //type: uint32
        YLeaf cvpdntunnelsessionmodemportindex; //type: uint32
        YLeaf cvpdntunnelsessionds1slotindex; //type: uint32
        YLeaf cvpdntunnelsessionds1portindex; //type: uint32
        YLeaf cvpdntunnelsessionds1channelindex; //type: uint32
        YLeaf cvpdntunnelsessionmodemcallstarttime; //type: uint32
        YLeaf cvpdntunnelsessionmodemcallstartindex; //type: uint32
        class CvpdntunnelsessionstateEnum;
        class CvpdntunnelsessiondevicetypeEnum;

}; // CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry


class CiscoVpdnMgmtMib::Cvpdnsessionattrtable : public Entity
{
    public:
        Cvpdnsessionattrtable();
        ~Cvpdnsessionattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdnsessionattrentry; //type: CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry> > cvpdnsessionattrentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnsessionattrtable


class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry : public Entity
{
    public:
        Cvpdnsessionattrentry();
        ~Cvpdnsessionattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnsystemtunneltype; //type: TunneltypeEnum
        //type: int32 (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::cvpdntunnelattrtunnelid)
        YLeaf cvpdntunnelattrtunnelid;
        YLeaf cvpdnsessionattrsessionid; //type: int32
        YLeaf cvpdnsessionattrusername; //type: string
        YLeaf cvpdnsessionattrstate; //type: CvpdnsessionattrstateEnum
        YLeaf cvpdnsessionattrcallduration; //type: uint32
        YLeaf cvpdnsessionattrpacketsout; //type: uint32
        YLeaf cvpdnsessionattrbytesout; //type: uint32
        YLeaf cvpdnsessionattrpacketsin; //type: uint32
        YLeaf cvpdnsessionattrbytesin; //type: uint32
        YLeaf cvpdnsessionattrdevicetype; //type: CvpdnsessionattrdevicetypeEnum
        YLeaf cvpdnsessionattrdevicecallerid; //type: string
        YLeaf cvpdnsessionattrdevicephyid; //type: int32
        YLeaf cvpdnsessionattrmultilink; //type: boolean
        YLeaf cvpdnsessionattrmodemslotindex; //type: uint32
        YLeaf cvpdnsessionattrmodemportindex; //type: uint32
        YLeaf cvpdnsessionattrds1slotindex; //type: uint32
        YLeaf cvpdnsessionattrds1portindex; //type: uint32
        YLeaf cvpdnsessionattrds1channelindex; //type: uint32
        YLeaf cvpdnsessionattrmodemcallstarttime; //type: uint32
        YLeaf cvpdnsessionattrmodemcallstartindex; //type: uint32
        YLeaf cvpdnsessionattrvirtualcircuitid; //type: uint32
        YLeaf cvpdnsessionattrsentpktsdropped; //type: uint32
        YLeaf cvpdnsessionattrrecvpktsdropped; //type: uint32
        YLeaf cvpdnsessionattrmultilinkbundle; //type: string
        YLeaf cvpdnsessionattrmultilinkifindex; //type: int32
        class CvpdnsessionattrstateEnum;
        class CvpdnsessionattrdevicetypeEnum;

}; // CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry


class CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable : public Entity
{
    public:
        Cvpdnusertofailhistinfotable();
        ~Cvpdnusertofailhistinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdnusertofailhistinfoentry; //type: CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry> > cvpdnusertofailhistinfoentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable


class CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry : public Entity
{
    public:
        Cvpdnusertofailhistinfoentry();
        ~Cvpdnusertofailhistinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnunametofailhistuname; //type: string
        YLeaf cvpdnunametofailhisttunnelid; //type: uint32
        YLeaf cvpdnunametofailhistuserid; //type: uint32
        YLeaf cvpdnunametofailhistlocalinitconn; //type: boolean
        YLeaf cvpdnunametofailhistlocalname; //type: string
        YLeaf cvpdnunametofailhistremotename; //type: string
        YLeaf cvpdnunametofailhistsourceip; //type: string
        YLeaf cvpdnunametofailhistdestip; //type: string
        YLeaf cvpdnunametofailhistcount; //type: uint32
        YLeaf cvpdnunametofailhistfailtime; //type: uint32
        YLeaf cvpdnunametofailhistfailtype; //type: string
        YLeaf cvpdnunametofailhistfailreason; //type: string
        YLeaf cvpdnunametofailhistsourceinettype; //type: InetaddresstypeEnum
        YLeaf cvpdnunametofailhistsourceinetaddr; //type: binary
        YLeaf cvpdnunametofailhistdestinettype; //type: InetaddresstypeEnum
        YLeaf cvpdnunametofailhistdestinetaddr; //type: binary

}; // CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry


class CiscoVpdnMgmtMib::Cvpdntemplatetable : public Entity
{
    public:
        Cvpdntemplatetable();
        ~Cvpdntemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdntemplateentry; //type: CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry> > cvpdntemplateentry;
        
}; // CiscoVpdnMgmtMib::Cvpdntemplatetable


class CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry : public Entity
{
    public:
        Cvpdntemplateentry();
        ~Cvpdntemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdntemplatename; //type: string
        YLeaf cvpdntemplateactivesessions; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry


class CiscoVpdnMgmtMib::Cvpdnbundletable : public Entity
{
    public:
        Cvpdnbundletable();
        ~Cvpdnbundletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdnbundleentry; //type: CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry> > cvpdnbundleentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnbundletable


class CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry : public Entity
{
    public:
        Cvpdnbundleentry();
        ~Cvpdnbundleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpdnbundlename; //type: string
        YLeaf cvpdnbundlelinkcount; //type: uint32
        YLeaf cvpdnbundleendpointtype; //type: CvpdnbundleendpointtypeEnum
        YLeaf cvpdnbundleendpoint; //type: binary
        YLeaf cvpdnbundlepeeripaddrtype; //type: InetaddresstypeEnum
        YLeaf cvpdnbundlepeeripaddr; //type: binary
        YLeaf cvpdnbundleendpointclass; //type: EndpointclassEnum
        class CvpdnbundleendpointtypeEnum;

}; // CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry


class CiscoVpdnMgmtMib::Cvpdnbundlechildtable : public Entity
{
    public:
        Cvpdnbundlechildtable();
        ~Cvpdnbundlechildtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpdnbundlechildentry; //type: CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry

        std::vector<std::shared_ptr<CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry> > cvpdnbundlechildentry;
        
}; // CiscoVpdnMgmtMib::Cvpdnbundlechildtable


class CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry : public Entity
{
    public:
        Cvpdnbundlechildentry();
        ~Cvpdnbundlechildentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_VPDN_MGMT_MIB::CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::cvpdnbundlename)
        YLeaf cvpdnbundlename;
        YLeaf cvpdnbundlechildtunneltype; //type: TunneltypeEnum
        YLeaf cvpdnbundlechildtunnelid; //type: uint32
        YLeaf cvpdnbundlechildsessionid; //type: uint32

}; // CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry

class EndpointclassEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf ipV4Address;
        static const Enum::YLeaf macAddress;
        static const Enum::YLeaf magicNumber;
        static const Enum::YLeaf phone;

};

class TunneltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2f;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf pptp;

};

class CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::CvpdnnotifsessioneventEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf pwUp;
        static const Enum::YLeaf pwDown;

};

class CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf all;
        static const Enum::YLeaf l2f;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf pptp;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelorigcauseEnum : public Enum
{
    public:
        static const Enum::YLeaf domain;
        static const Enum::YLeaf dnis;
        static const Enum::YLeaf stack;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf opening;
        static const Enum::YLeaf open;
        static const Enum::YLeaf closing;

};

class CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelnetworkservicetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrorigcauseEnum : public Enum
{
    public:
        static const Enum::YLeaf domain;
        static const Enum::YLeaf dnis;
        static const Enum::YLeaf stack;
        static const Enum::YLeaf xconnect;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf l2fOpening;
        static const Enum::YLeaf l2fOpenWait;
        static const Enum::YLeaf l2fOpen;
        static const Enum::YLeaf l2fClosing;
        static const Enum::YLeaf l2fCloseWait;
        static const Enum::YLeaf l2tpIdle;
        static const Enum::YLeaf l2tpWaitCtlReply;
        static const Enum::YLeaf l2tpEstablished;
        static const Enum::YLeaf l2tpShuttingDown;
        static const Enum::YLeaf l2tpNoSessionLeft;
        static const Enum::YLeaf pptpIdle;
        static const Enum::YLeaf pptpWaitConnect;
        static const Enum::YLeaf pptpWaitCtlRequest;
        static const Enum::YLeaf pptpWaitCtlReply;
        static const Enum::YLeaf pptpEstablished;
        static const Enum::YLeaf pptpWaitStopReply;
        static const Enum::YLeaf pptpTerminal;

};

class CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrnetworkservicetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;

};

class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf opening;
        static const Enum::YLeaf open;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf waitingForTunnel;

};

class CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf asyncInternalModem;
        static const Enum::YLeaf async;
        static const Enum::YLeaf bchan;
        static const Enum::YLeaf sync;
        static const Enum::YLeaf virtualAccess;
        static const Enum::YLeaf xdsl;
        static const Enum::YLeaf cable;

};

class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf l2fOpening;
        static const Enum::YLeaf l2fOpen;
        static const Enum::YLeaf l2fCloseWait;
        static const Enum::YLeaf l2fWaitingForTunnel;
        static const Enum::YLeaf l2tpIdle;
        static const Enum::YLeaf l2tpWaitingTunnel;
        static const Enum::YLeaf l2tpWaitReply;
        static const Enum::YLeaf l2tpWaitConnect;
        static const Enum::YLeaf l2tpEstablished;
        static const Enum::YLeaf l2tpShuttingDown;
        static const Enum::YLeaf pptpWaitVAccess;
        static const Enum::YLeaf pptpPacEstablished;
        static const Enum::YLeaf pptpWaitTunnel;
        static const Enum::YLeaf pptpWaitOCRP;
        static const Enum::YLeaf pptpPnsEstablished;
        static const Enum::YLeaf pptpWaitCallDisc;
        static const Enum::YLeaf pptpTerminal;

};

class CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf asyncInternalModem;
        static const Enum::YLeaf async;
        static const Enum::YLeaf bchan;
        static const Enum::YLeaf sync;
        static const Enum::YLeaf virtualAccess;
        static const Enum::YLeaf xdsl;
        static const Enum::YLeaf cable;

};

class CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf hostname;
        static const Enum::YLeaf string;
        static const Enum::YLeaf macAddress;
        static const Enum::YLeaf ipV4Address;
        static const Enum::YLeaf ipV6Address;
        static const Enum::YLeaf phone;
        static const Enum::YLeaf magicNumber;

};


}
}

#endif /* _CISCO_VPDN_MGMT_MIB_ */

