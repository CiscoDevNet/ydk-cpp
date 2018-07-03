#ifndef _CISCO_VPDN_MGMT_MIB_
#define _CISCO_VPDN_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VPDN_MGMT_MIB {

class CISCOVPDNMGMTMIB : public ydk::Entity
{
    public:
        CISCOVPDNMGMTMIB();
        ~CISCOVPDNMGMTMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class CiscoVpdnMgmtMIBNotifs; //type: CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs
        class CvpdnSystemInfo; //type: CISCOVPDNMGMTMIB::CvpdnSystemInfo
        class CvpdnMultilinkInfo; //type: CISCOVPDNMGMTMIB::CvpdnMultilinkInfo
        class CvpdnSystemTable; //type: CISCOVPDNMGMTMIB::CvpdnSystemTable
        class CvpdnTunnelTable; //type: CISCOVPDNMGMTMIB::CvpdnTunnelTable
        class CvpdnTunnelAttrTable; //type: CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable
        class CvpdnTunnelSessionTable; //type: CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable
        class CvpdnSessionAttrTable; //type: CISCOVPDNMGMTMIB::CvpdnSessionAttrTable
        class CvpdnUserToFailHistInfoTable; //type: CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable
        class CvpdnTemplateTable; //type: CISCOVPDNMGMTMIB::CvpdnTemplateTable
        class CvpdnBundleTable; //type: CISCOVPDNMGMTMIB::CvpdnBundleTable
        class CvpdnBundleChildTable; //type: CISCOVPDNMGMTMIB::CvpdnBundleChildTable

        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs> ciscovpdnmgmtmibnotifs;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnSystemInfo> cvpdnsysteminfo;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnMultilinkInfo> cvpdnmultilinkinfo;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnSystemTable> cvpdnsystemtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTunnelTable> cvpdntunneltable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable> cvpdntunnelattrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable> cvpdntunnelsessiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnSessionAttrTable> cvpdnsessionattrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable> cvpdnusertofailhistinfotable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTemplateTable> cvpdntemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnBundleTable> cvpdnbundletable;
        std::shared_ptr<cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnBundleChildTable> cvpdnbundlechildtable;
        
}; // CISCOVPDNMGMTMIB


class CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs : public ydk::Entity
{
    public:
        CiscoVpdnMgmtMIBNotifs();
        ~CiscoVpdnMgmtMIBNotifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnnotifsessionid; //type: int32
        ydk::YLeaf cvpdnnotifsessionevent; //type: CvpdnNotifSessionEvent
        class CvpdnNotifSessionEvent;

}; // CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs


class CISCOVPDNMGMTMIB::CvpdnSystemInfo : public ydk::Entity
{
    public:
        CvpdnSystemInfo();
        ~CvpdnSystemInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdntunneltotal; //type: uint32
        ydk::YLeaf cvpdnsessiontotal; //type: uint32
        ydk::YLeaf cvpdndenieduserstotal; //type: uint32
        ydk::YLeaf cvpdnsystemnotifsessionenabled; //type: boolean
        ydk::YLeaf cvpdnsystemclearsessions; //type: CvpdnSystemClearSessions
        class CvpdnSystemClearSessions;

}; // CISCOVPDNMGMTMIB::CvpdnSystemInfo


class CISCOVPDNMGMTMIB::CvpdnMultilinkInfo : public ydk::Entity
{
    public:
        CvpdnMultilinkInfo();
        ~CvpdnMultilinkInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnbundleswithonelink; //type: uint32
        ydk::YLeaf cvpdnbundleswithtwolinks; //type: uint32
        ydk::YLeaf cvpdnbundleswithmorethantwolinks; //type: uint32
        ydk::YLeaf cvpdnbundlelastchanged; //type: uint32

}; // CISCOVPDNMGMTMIB::CvpdnMultilinkInfo


class CISCOVPDNMGMTMIB::CvpdnSystemTable : public ydk::Entity
{
    public:
        CvpdnSystemTable();
        ~CvpdnSystemTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnSystemEntry; //type: CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry

        ydk::YList cvpdnsystementry;
        
}; // CISCOVPDNMGMTMIB::CvpdnSystemTable


class CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry : public ydk::Entity
{
    public:
        CvpdnSystemEntry();
        ~CvpdnSystemEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: TunnelType
        ydk::YLeaf cvpdnsystemtunneltotal; //type: uint32
        ydk::YLeaf cvpdnsystemsessiontotal; //type: uint32
        ydk::YLeaf cvpdnsystemdenieduserstotal; //type: uint32
        ydk::YLeaf cvpdnsysteminitialconnreq; //type: uint32
        ydk::YLeaf cvpdnsystemsuccessconnreq; //type: uint32
        ydk::YLeaf cvpdnsystemfailedconnreq; //type: uint32

}; // CISCOVPDNMGMTMIB::CvpdnSystemTable::CvpdnSystemEntry


class CISCOVPDNMGMTMIB::CvpdnTunnelTable : public ydk::Entity
{
    public:
        CvpdnTunnelTable();
        ~CvpdnTunnelTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnTunnelEntry; //type: CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry

        ydk::YList cvpdntunnelentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnTunnelTable


class CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry : public ydk::Entity
{
    public:
        CvpdnTunnelEntry();
        ~CvpdnTunnelEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdntunneltunnelid; //type: uint32
        ydk::YLeaf cvpdntunnelremotetunnelid; //type: uint32
        ydk::YLeaf cvpdntunnellocalname; //type: string
        ydk::YLeaf cvpdntunnelremotename; //type: string
        ydk::YLeaf cvpdntunnelremoteendpointname; //type: string
        ydk::YLeaf cvpdntunnellocalinitconnection; //type: boolean
        ydk::YLeaf cvpdntunnelorigcause; //type: CvpdnTunnelOrigCause
        ydk::YLeaf cvpdntunnelstate; //type: CvpdnTunnelState
        ydk::YLeaf cvpdntunnelactivesessions; //type: uint32
        ydk::YLeaf cvpdntunneldeniedusers; //type: uint32
        ydk::YLeaf cvpdntunnelsoftshut; //type: boolean
        ydk::YLeaf cvpdntunnelnetworkservicetype; //type: CvpdnTunnelNetworkServiceType
        ydk::YLeaf cvpdntunnellocalipaddress; //type: string
        ydk::YLeaf cvpdntunnelsourceipaddress; //type: string
        ydk::YLeaf cvpdntunnelremoteipaddress; //type: string
        class CvpdnTunnelOrigCause;
        class CvpdnTunnelState;
        class CvpdnTunnelNetworkServiceType;

}; // CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry


class CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable : public ydk::Entity
{
    public:
        CvpdnTunnelAttrTable();
        ~CvpdnTunnelAttrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnTunnelAttrEntry; //type: CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry

        ydk::YList cvpdntunnelattrentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable


class CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry : public ydk::Entity
{
    public:
        CvpdnTunnelAttrEntry();
        ~CvpdnTunnelAttrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: TunnelType
        ydk::YLeaf cvpdntunnelattrtunnelid; //type: int32
        ydk::YLeaf cvpdntunnelattrremotetunnelid; //type: int32
        ydk::YLeaf cvpdntunnelattrlocalname; //type: string
        ydk::YLeaf cvpdntunnelattrremotename; //type: string
        ydk::YLeaf cvpdntunnelattrremoteendpointname; //type: string
        ydk::YLeaf cvpdntunnelattrlocalinitconnection; //type: boolean
        ydk::YLeaf cvpdntunnelattrorigcause; //type: CvpdnTunnelAttrOrigCause
        ydk::YLeaf cvpdntunnelattrstate; //type: CvpdnTunnelAttrState
        ydk::YLeaf cvpdntunnelattractivesessions; //type: uint32
        ydk::YLeaf cvpdntunnelattrdeniedusers; //type: uint32
        ydk::YLeaf cvpdntunnelattrsoftshut; //type: boolean
        ydk::YLeaf cvpdntunnelattrnetworkservicetype; //type: CvpdnTunnelAttrNetworkServiceType
        ydk::YLeaf cvpdntunnelattrlocalipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrsourceipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrremoteipaddress; //type: string
        ydk::YLeaf cvpdntunnelattrlocalinetaddresstype; //type: InetAddressType
        ydk::YLeaf cvpdntunnelattrlocalinetaddress; //type: binary
        ydk::YLeaf cvpdntunnelattrsourceinetaddresstype; //type: InetAddressType
        ydk::YLeaf cvpdntunnelattrsourceinetaddress; //type: binary
        ydk::YLeaf cvpdntunnelattrremoteinetaddresstype; //type: InetAddressType
        ydk::YLeaf cvpdntunnelattrremoteinetaddress; //type: binary
        class CvpdnTunnelAttrOrigCause;
        class CvpdnTunnelAttrState;
        class CvpdnTunnelAttrNetworkServiceType;

}; // CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry


class CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable : public ydk::Entity
{
    public:
        CvpdnTunnelSessionTable();
        ~CvpdnTunnelSessionTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnTunnelSessionEntry; //type: CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry

        ydk::YList cvpdntunnelsessionentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable


class CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry : public ydk::Entity
{
    public:
        CvpdnTunnelSessionEntry();
        ~CvpdnTunnelSessionEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::cvpdntunneltunnelid)
        ydk::YLeaf cvpdntunneltunnelid;
        ydk::YLeaf cvpdntunnelsessionid; //type: uint32
        ydk::YLeaf cvpdntunnelsessionusername; //type: string
        ydk::YLeaf cvpdntunnelsessionstate; //type: CvpdnTunnelSessionState
        ydk::YLeaf cvpdntunnelsessioncallduration; //type: uint32
        ydk::YLeaf cvpdntunnelsessionpacketsout; //type: uint32
        ydk::YLeaf cvpdntunnelsessionbytesout; //type: uint32
        ydk::YLeaf cvpdntunnelsessionpacketsin; //type: uint32
        ydk::YLeaf cvpdntunnelsessionbytesin; //type: uint32
        ydk::YLeaf cvpdntunnelsessiondevicetype; //type: CvpdnTunnelSessionDeviceType
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
        class CvpdnTunnelSessionState;
        class CvpdnTunnelSessionDeviceType;

}; // CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry


class CISCOVPDNMGMTMIB::CvpdnSessionAttrTable : public ydk::Entity
{
    public:
        CvpdnSessionAttrTable();
        ~CvpdnSessionAttrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnSessionAttrEntry; //type: CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry

        ydk::YList cvpdnsessionattrentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnSessionAttrTable


class CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry : public ydk::Entity
{
    public:
        CvpdnSessionAttrEntry();
        ~CvpdnSessionAttrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnsystemtunneltype; //type: TunnelType
        //type: int32 (refers to cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::cvpdntunnelattrtunnelid)
        ydk::YLeaf cvpdntunnelattrtunnelid;
        ydk::YLeaf cvpdnsessionattrsessionid; //type: int32
        ydk::YLeaf cvpdnsessionattrusername; //type: string
        ydk::YLeaf cvpdnsessionattrstate; //type: CvpdnSessionAttrState
        ydk::YLeaf cvpdnsessionattrcallduration; //type: uint32
        ydk::YLeaf cvpdnsessionattrpacketsout; //type: uint32
        ydk::YLeaf cvpdnsessionattrbytesout; //type: uint32
        ydk::YLeaf cvpdnsessionattrpacketsin; //type: uint32
        ydk::YLeaf cvpdnsessionattrbytesin; //type: uint32
        ydk::YLeaf cvpdnsessionattrdevicetype; //type: CvpdnSessionAttrDeviceType
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
        class CvpdnSessionAttrState;
        class CvpdnSessionAttrDeviceType;

}; // CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry


class CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable : public ydk::Entity
{
    public:
        CvpdnUserToFailHistInfoTable();
        ~CvpdnUserToFailHistInfoTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnUserToFailHistInfoEntry; //type: CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry

        ydk::YList cvpdnusertofailhistinfoentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable


class CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry : public ydk::Entity
{
    public:
        CvpdnUserToFailHistInfoEntry();
        ~CvpdnUserToFailHistInfoEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        ydk::YLeaf cvpdnunametofailhistsourceinettype; //type: InetAddressType
        ydk::YLeaf cvpdnunametofailhistsourceinetaddr; //type: binary
        ydk::YLeaf cvpdnunametofailhistdestinettype; //type: InetAddressType
        ydk::YLeaf cvpdnunametofailhistdestinetaddr; //type: binary

}; // CISCOVPDNMGMTMIB::CvpdnUserToFailHistInfoTable::CvpdnUserToFailHistInfoEntry


class CISCOVPDNMGMTMIB::CvpdnTemplateTable : public ydk::Entity
{
    public:
        CvpdnTemplateTable();
        ~CvpdnTemplateTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnTemplateEntry; //type: CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry

        ydk::YList cvpdntemplateentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnTemplateTable


class CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry : public ydk::Entity
{
    public:
        CvpdnTemplateEntry();
        ~CvpdnTemplateEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdntemplatename; //type: string
        ydk::YLeaf cvpdntemplateactivesessions; //type: uint32

}; // CISCOVPDNMGMTMIB::CvpdnTemplateTable::CvpdnTemplateEntry


class CISCOVPDNMGMTMIB::CvpdnBundleTable : public ydk::Entity
{
    public:
        CvpdnBundleTable();
        ~CvpdnBundleTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnBundleEntry; //type: CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry

        ydk::YList cvpdnbundleentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnBundleTable


class CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry : public ydk::Entity
{
    public:
        CvpdnBundleEntry();
        ~CvpdnBundleEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cvpdnbundlename; //type: string
        ydk::YLeaf cvpdnbundlelinkcount; //type: uint32
        ydk::YLeaf cvpdnbundleendpointtype; //type: CvpdnBundleEndpointType
        ydk::YLeaf cvpdnbundleendpoint; //type: binary
        ydk::YLeaf cvpdnbundlepeeripaddrtype; //type: InetAddressType
        ydk::YLeaf cvpdnbundlepeeripaddr; //type: binary
        ydk::YLeaf cvpdnbundleendpointclass; //type: EndpointClass
        class CvpdnBundleEndpointType;

}; // CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry


class CISCOVPDNMGMTMIB::CvpdnBundleChildTable : public ydk::Entity
{
    public:
        CvpdnBundleChildTable();
        ~CvpdnBundleChildTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CvpdnBundleChildEntry; //type: CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry

        ydk::YList cvpdnbundlechildentry;
        
}; // CISCOVPDNMGMTMIB::CvpdnBundleChildTable


class CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry : public ydk::Entity
{
    public:
        CvpdnBundleChildEntry();
        ~CvpdnBundleChildEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::CISCO_VPDN_MGMT_MIB::CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::cvpdnbundlename)
        ydk::YLeaf cvpdnbundlename;
        ydk::YLeaf cvpdnbundlechildtunneltype; //type: TunnelType
        ydk::YLeaf cvpdnbundlechildtunnelid; //type: uint32
        ydk::YLeaf cvpdnbundlechildsessionid; //type: uint32

}; // CISCOVPDNMGMTMIB::CvpdnBundleChildTable::CvpdnBundleChildEntry

class EndpointClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf ipV4Address;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf magicNumber;
        static const ydk::Enum::YLeaf phone;

};

class TunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2f;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf pptp;

};

class CISCOVPDNMGMTMIB::CiscoVpdnMgmtMIBNotifs::CvpdnNotifSessionEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pwUp;
        static const ydk::Enum::YLeaf pwDown;

};

class CISCOVPDNMGMTMIB::CvpdnSystemInfo::CvpdnSystemClearSessions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf l2f;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf pptp;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelOrigCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf stack;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closing;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelTable::CvpdnTunnelEntry::CvpdnTunnelNetworkServiceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrOrigCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf xconnect;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrState : public ydk::Enum
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

class CISCOVPDNMGMTMIB::CvpdnTunnelAttrTable::CvpdnTunnelAttrEntry::CvpdnTunnelAttrNetworkServiceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf waitingForTunnel;

};

class CISCOVPDNMGMTMIB::CvpdnTunnelSessionTable::CvpdnTunnelSessionEntry::CvpdnTunnelSessionDeviceType : public ydk::Enum
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

class CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrState : public ydk::Enum
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

class CISCOVPDNMGMTMIB::CvpdnSessionAttrTable::CvpdnSessionAttrEntry::CvpdnSessionAttrDeviceType : public ydk::Enum
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

class CISCOVPDNMGMTMIB::CvpdnBundleTable::CvpdnBundleEntry::CvpdnBundleEndpointType : public ydk::Enum
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

