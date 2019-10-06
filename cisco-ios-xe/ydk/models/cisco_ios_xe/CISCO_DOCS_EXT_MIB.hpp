#ifndef _CISCO_DOCS_EXT_MIB_
#define _CISCO_DOCS_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DOCS_EXT_MIB {

class CISCODOCSEXTMIB : public ydk::Entity
{
    public:
        CISCODOCSEXTMIB();
        ~CISCODOCSEXTMIB();

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

        class CdxCmtsCmCpeObjects; //type: CISCODOCSEXTMIB::CdxCmtsCmCpeObjects
        class CdxWBResilObjects; //type: CISCODOCSEXTMIB::CdxWBResilObjects
        class CdxCmtsDocsisLBObjects; //type: CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects
        class CdxQosCtrlUpTable; //type: CISCODOCSEXTMIB::CdxQosCtrlUpTable
        class CdxQosIfRateLimitTable; //type: CISCODOCSEXTMIB::CdxQosIfRateLimitTable
        class CdxCmtsServiceExtTable; //type: CISCODOCSEXTMIB::CdxCmtsServiceExtTable
        class CdxUpInfoElemStatsTable; //type: CISCODOCSEXTMIB::CdxUpInfoElemStatsTable
        class CdxBWQueueTable; //type: CISCODOCSEXTMIB::CdxBWQueueTable
        class CdxCmCpeTable; //type: CISCODOCSEXTMIB::CdxCmCpeTable
        class CdxCmtsCmStatusExtTable; //type: CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable
        class CdxCmtsMacExtTable; //type: CISCODOCSEXTMIB::CdxCmtsMacExtTable
        class CdxCmtsCmChOverTable; //type: CISCODOCSEXTMIB::CdxCmtsCmChOverTable
        class CdxCmtsCmTable; //type: CISCODOCSEXTMIB::CdxCmtsCmTable
        class CdxCmtsCmStatusDMICTable; //type: CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable
        class CdxCmToCpeTable; //type: CISCODOCSEXTMIB::CdxCmToCpeTable
        class CdxCpeToCmTable; //type: CISCODOCSEXTMIB::CdxCpeToCmTable
        class CdxCpeIpPrefixTable; //type: CISCODOCSEXTMIB::CdxCpeIpPrefixTable
        class CdxIfUpstreamChannelExtTable; //type: CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable
        class CdxWBResilCmTable; //type: CISCODOCSEXTMIB::CdxWBResilCmTable
        class CdxRFtoPrimaryChannelMappingTable; //type: CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable
        class CdxPrimaryChanneltoRFMappingTable; //type: CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable
        class CdxCmtsMtcCmTable; //type: CISCODOCSEXTMIB::CdxCmtsMtcCmTable
        class CdxCmtsUscbSflowTable; //type: CISCODOCSEXTMIB::CdxCmtsUscbSflowTable
        class CdxRPDGS7KTable; //type: CISCODOCSEXTMIB::CdxRPDGS7KTable
        class CdxBundleIpHelperTable; //type: CISCODOCSEXTMIB::CdxBundleIpHelperTable
        class CdxBundleIPv6DHCPRelayTable; //type: CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable
        class CdxBundleIPv6DHCPRelayDestTable; //type: CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable

        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsCmCpeObjects> cdxcmtscmcpeobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxWBResilObjects> cdxwbresilobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects> cdxcmtsdocsislbobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxQosCtrlUpTable> cdxqosctrluptable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxQosIfRateLimitTable> cdxqosifratelimittable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsServiceExtTable> cdxcmtsserviceexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxUpInfoElemStatsTable> cdxupinfoelemstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxBWQueueTable> cdxbwqueuetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmCpeTable> cdxcmcpetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable> cdxcmtscmstatusexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsMacExtTable> cdxcmtsmacexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsCmChOverTable> cdxcmtscmchovertable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsCmTable> cdxcmtscmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable> cdxcmtscmstatusdmictable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmToCpeTable> cdxcmtocpetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCpeToCmTable> cdxcpetocmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCpeIpPrefixTable> cdxcpeipprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable> cdxifupstreamchannelexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxWBResilCmTable> cdxwbresilcmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable> cdxrftoprimarychannelmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable> cdxprimarychanneltorfmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsMtcCmTable> cdxcmtsmtccmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxCmtsUscbSflowTable> cdxcmtsuscbsflowtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxRPDGS7KTable> cdxrpdgs7ktable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxBundleIpHelperTable> cdxbundleiphelpertable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable> cdxbundleipv6dhcprelaytable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOCS_EXT_MIB::CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable> cdxbundleipv6dhcprelaydesttable;
        
}; // CISCODOCSEXTMIB


class CISCODOCSEXTMIB::CdxCmtsCmCpeObjects : public ydk::Entity
{
    public:
        CdxCmtsCmCpeObjects();
        ~CdxCmtsCmCpeObjects();

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

        ydk::YLeaf cdxcmtscmchovertimeexpiration; //type: int32

}; // CISCODOCSEXTMIB::CdxCmtsCmCpeObjects


class CISCODOCSEXTMIB::CdxWBResilObjects : public ydk::Entity
{
    public:
        CdxWBResilObjects();
        ~CdxWBResilObjects();

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

        ydk::YLeaf cdxwbresilrfchangedampentime; //type: int32
        ydk::YLeaf cdxwbresilrfchangetriggerpercentage; //type: int32
        ydk::YLeaf cdxwbresilrfchangetriggercount; //type: int32
        ydk::YLeaf cdxwbresilrfchangetriggermovesecondary; //type: boolean
        ydk::YLeaf cdxwbresilnotificationenable; //type: CdxWBResilNotificationEnable
        ydk::YLeaf cdxwbresilnotificationsinterval; //type: int32

}; // CISCODOCSEXTMIB::CdxWBResilObjects


class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects : public ydk::Entity
{
    public:
        CdxCmtsDocsisLBObjects();
        ~CdxCmtsDocsisLBObjects();

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

        ydk::YLeaf cdxcmtsdocsislbenable; //type: CdxCmtsDocsisLBEnable
        ydk::YLeaf cdxcmtsd30lbenable; //type: CdxCmtsD30LBEnable
        ydk::YLeaf cdxcmtsd30lbupstreamenable; //type: CdxCmtsD30LBUpstreamEnable
        ydk::YLeaf cdxcmtsd30lbstaticenable; //type: CdxCmtsD30LBStaticEnable
        ydk::YLeaf cdxcmtsd30lbdynenable; //type: CdxCmtsD30LBDynEnable
        class CdxCmtsDocsisLBEnable;
        class CdxCmtsD30LBEnable;
        class CdxCmtsD30LBUpstreamEnable;
        class CdxCmtsD30LBStaticEnable;
        class CdxCmtsD30LBDynEnable;

}; // CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects


class CISCODOCSEXTMIB::CdxQosCtrlUpTable : public ydk::Entity
{
    public:
        CdxQosCtrlUpTable();
        ~CdxQosCtrlUpTable();

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

        class CdxQosCtrlUpEntry; //type: CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry

        ydk::YList cdxqosctrlupentry;
        
}; // CISCODOCSEXTMIB::CdxQosCtrlUpTable


class CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry : public ydk::Entity
{
    public:
        CdxQosCtrlUpEntry();
        ~CdxQosCtrlUpEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxqosctrlupadmissionctrl; //type: boolean
        ydk::YLeaf cdxqosctrlupmaxrsvdbwpercent; //type: int32
        ydk::YLeaf cdxqosctrlupadmissionrejects; //type: uint32
        ydk::YLeaf cdxqosctrlupreservedbw; //type: int32
        ydk::YLeaf cdxqosctrlupmaxvirtualbw; //type: int32

}; // CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry


class CISCODOCSEXTMIB::CdxQosIfRateLimitTable : public ydk::Entity
{
    public:
        CdxQosIfRateLimitTable();
        ~CdxQosIfRateLimitTable();

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

        class CdxQosIfRateLimitEntry; //type: CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry

        ydk::YList cdxqosifratelimitentry;
        
}; // CISCODOCSEXTMIB::CdxQosIfRateLimitTable


class CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry : public ydk::Entity
{
    public:
        CdxQosIfRateLimitEntry();
        ~CdxQosIfRateLimitEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxqosifratelimitalgm; //type: CdxQosIfRateLimitAlgm
        ydk::YLeaf cdxqosifratelimitexpwt; //type: int32
        ydk::YLeaf cdxqosifratelimitshpmaxdelay; //type: CdxQosIfRateLimitShpMaxDelay
        ydk::YLeaf cdxqosifratelimitshpgranularity; //type: CdxQosIfRateLimitShpGranularity
        class CdxQosIfRateLimitAlgm;
        class CdxQosIfRateLimitShpMaxDelay;
        class CdxQosIfRateLimitShpGranularity;

}; // CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry


class CISCODOCSEXTMIB::CdxCmtsServiceExtTable : public ydk::Entity
{
    public:
        CdxCmtsServiceExtTable();
        ~CdxCmtsServiceExtTable();

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

        class CdxCmtsServiceExtEntry; //type: CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry

        ydk::YList cdxcmtsserviceextentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsServiceExtTable


class CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry : public ydk::Entity
{
    public:
        CdxCmtsServiceExtEntry();
        ~CdxCmtsServiceExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::docsifcmtsserviceid)
        ydk::YLeaf docsifcmtsserviceid;
        ydk::YLeaf cdxifcmtsserviceoutoctets; //type: uint32
        ydk::YLeaf cdxifcmtsserviceoutpackets; //type: uint32
        ydk::YLeaf cdxqosmaxupbwexcessrequests; //type: uint32
        ydk::YLeaf cdxqosmaxdownbwexcesspackets; //type: uint32
        ydk::YLeaf cdxifcmtsservicehcinoctets; //type: uint64
        ydk::YLeaf cdxifcmtsservicehcinpackets; //type: uint64
        ydk::YLeaf cdxifcmtsservicehcoutoctets; //type: uint64
        ydk::YLeaf cdxifcmtsservicehcoutpackets; //type: uint64

}; // CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry


class CISCODOCSEXTMIB::CdxUpInfoElemStatsTable : public ydk::Entity
{
    public:
        CdxUpInfoElemStatsTable();
        ~CdxUpInfoElemStatsTable();

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

        class CdxUpInfoElemStatsEntry; //type: CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry

        ydk::YList cdxupinfoelemstatsentry;
        
}; // CISCODOCSEXTMIB::CdxUpInfoElemStatsTable


class CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry : public ydk::Entity
{
    public:
        CdxUpInfoElemStatsEntry();
        ~CdxUpInfoElemStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxupinfoelemstatsnamecode; //type: CdxUpInfoElemStatsNameCode
        ydk::YLeaf cdxupinfoelemstatsietype; //type: int32
        class CdxUpInfoElemStatsNameCode;

}; // CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry


class CISCODOCSEXTMIB::CdxBWQueueTable : public ydk::Entity
{
    public:
        CdxBWQueueTable();
        ~CdxBWQueueTable();

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

        class CdxBWQueueEntry; //type: CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry

        ydk::YList cdxbwqueueentry;
        
}; // CISCODOCSEXTMIB::CdxBWQueueTable


class CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry : public ydk::Entity
{
    public:
        CdxBWQueueEntry();
        ~CdxBWQueueEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxbwqueuenamecode; //type: CdxBWQueueNameCode
        ydk::YLeaf cdxbwqueueorder; //type: int32
        ydk::YLeaf cdxbwqueuenumservedbeforeyield; //type: int32
        ydk::YLeaf cdxbwqueuetype; //type: CdxBWQueueType
        ydk::YLeaf cdxbwqueuemaxdepth; //type: int32
        ydk::YLeaf cdxbwqueuedepth; //type: int32
        ydk::YLeaf cdxbwqueuediscards; //type: uint32
        class CdxBWQueueNameCode;
        class CdxBWQueueType;

}; // CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry


class CISCODOCSEXTMIB::CdxCmCpeTable : public ydk::Entity
{
    public:
        CdxCmCpeTable();
        ~CdxCmCpeTable();

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

        class CdxCmCpeEntry; //type: CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry

        ydk::YList cdxcmcpeentry;
        
}; // CISCODOCSEXTMIB::CdxCmCpeTable


class CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry : public ydk::Entity
{
    public:
        CdxCmCpeEntry();
        ~CdxCmCpeEntry();

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

        ydk::YLeaf cdxcmcpemacaddress; //type: string
        ydk::YLeaf cdxcmcpetype; //type: CdxCmCpeType
        ydk::YLeaf cdxcmcpeipaddress; //type: string
        ydk::YLeaf cdxcmcpeifindex; //type: int32
        ydk::YLeaf cdxcmcpecmtsserviceid; //type: int32
        ydk::YLeaf cdxcmcpecmstatusindex; //type: int32
        ydk::YLeaf cdxcmcpeaccessgroup; //type: string
        ydk::YLeaf cdxcmcperesetnow; //type: boolean
        ydk::YLeaf cdxcmcpedeletenow; //type: boolean
        class CdxCmCpeType;

}; // CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry


class CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable : public ydk::Entity
{
    public:
        CdxCmtsCmStatusExtTable();
        ~CdxCmtsCmStatusExtTable();

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

        class CdxCmtsCmStatusExtEntry; //type: CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry

        ydk::YList cdxcmtscmstatusextentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable


class CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry : public ydk::Entity
{
    public:
        CdxCmtsCmStatusExtEntry();
        ~CdxCmtsCmStatusExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf cdxcmtscmstatusvalue; //type: CdxCmtsCmStatusValue
        ydk::YLeaf cdxifcmtscmstatusonlinetimes; //type: uint32
        ydk::YLeaf cdxifcmtscmstatuspercentonline; //type: int32
        ydk::YLeaf cdxifcmtscmstatusminonlinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusavgonlinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusmaxonlinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusminofflinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusavgofflinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusmaxofflinetime; //type: int32
        ydk::YLeaf cdxifcmtscmstatusdynsidcount; //type: int32
        ydk::YLeaf cdxifcmtscmstatusaddlinfo; //type: CdxIfCmtsCmStatusAddlInfo
        ydk::YLeaf cdxifcmtscmstatusonlinetimesnum; //type: uint32
        ydk::YLeaf cdxifcmtscmstatuslastresettime; //type: uint32
        class CdxCmtsCmStatusValue;

}; // CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry


class CISCODOCSEXTMIB::CdxCmtsMacExtTable : public ydk::Entity
{
    public:
        CdxCmtsMacExtTable();
        ~CdxCmtsMacExtTable();

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

        class CdxCmtsMacExtEntry; //type: CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry

        ydk::YList cdxcmtsmacextentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsMacExtTable


class CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry : public ydk::Entity
{
    public:
        CdxCmtsMacExtEntry();
        ~CdxCmtsMacExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxcmtscmonofftrapenable; //type: boolean
        ydk::YLeaf cdxcmtscmonofftrapinterval; //type: int32
        ydk::YLeaf cdxcmtscmdefaultmaxcpes; //type: int32
        ydk::YLeaf cdxcmtscmtotal; //type: int32
        ydk::YLeaf cdxcmtscmactive; //type: int32
        ydk::YLeaf cdxcmtscmregistered; //type: int32
        ydk::YLeaf cdxcmtscmdmicmode; //type: CdxCmtsCmDMICMode
        ydk::YLeaf cdxcmtscmdmiclockqos; //type: int32
        class CdxCmtsCmDMICMode;

}; // CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry


class CISCODOCSEXTMIB::CdxCmtsCmChOverTable : public ydk::Entity
{
    public:
        CdxCmtsCmChOverTable();
        ~CdxCmtsCmChOverTable();

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

        class CdxCmtsCmChOverEntry; //type: CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry

        ydk::YList cdxcmtscmchoverentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsCmChOverTable


class CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry : public ydk::Entity
{
    public:
        CdxCmtsCmChOverEntry();
        ~CdxCmtsCmChOverEntry();

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

        ydk::YLeaf cdxcmtscmchoverserialnumber; //type: int32
        ydk::YLeaf cdxcmtscmchovermacaddress; //type: string
        ydk::YLeaf cdxcmtscmchoverdownfrequency; //type: int32
        ydk::YLeaf cdxcmtscmchoverupchannelid; //type: int32
        ydk::YLeaf cdxcmtscmchovertraponcompletion; //type: boolean
        ydk::YLeaf cdxcmtscmchoveropinitiatedtime; //type: uint32
        ydk::YLeaf cdxcmtscmchoverstate; //type: CdxCmtsCmChOverState
        ydk::YLeaf cdxcmtscmchoverrowstatus; //type: RowStatus
        class CdxCmtsCmChOverState;

}; // CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry


class CISCODOCSEXTMIB::CdxCmtsCmTable : public ydk::Entity
{
    public:
        CdxCmtsCmTable();
        ~CdxCmtsCmTable();

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

        class CdxCmtsCmEntry; //type: CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry

        ydk::YList cdxcmtscmentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsCmTable


class CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry : public ydk::Entity
{
    public:
        CdxCmtsCmEntry();
        ~CdxCmtsCmEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf cdxcmtscmmaxcpenumber; //type: int32
        ydk::YLeaf cdxcmtscmcurrcpenumber; //type: int32
        ydk::YLeaf cdxcmtscmqosprofile; //type: int32

}; // CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry


class CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable : public ydk::Entity
{
    public:
        CdxCmtsCmStatusDMICTable();
        ~CdxCmtsCmStatusDMICTable();

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

        class CdxCmtsCmStatusDMICEntry; //type: CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry

        ydk::YList cdxcmtscmstatusdmicentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable


class CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry : public ydk::Entity
{
    public:
        CdxCmtsCmStatusDMICEntry();
        ~CdxCmtsCmStatusDMICEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf cdxcmtscmstatusdmicmode; //type: CdxCmtsCmStatusDMICMode
        ydk::YLeaf cdxcmtscmstatusdmicunlock; //type: boolean
        class CdxCmtsCmStatusDMICMode;

}; // CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry


class CISCODOCSEXTMIB::CdxCmToCpeTable : public ydk::Entity
{
    public:
        CdxCmToCpeTable();
        ~CdxCmToCpeTable();

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

        class CdxCmToCpeEntry; //type: CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry

        ydk::YList cdxcmtocpeentry;
        
}; // CISCODOCSEXTMIB::CdxCmToCpeTable


class CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry : public ydk::Entity
{
    public:
        CdxCmToCpeEntry();
        ~CdxCmToCpeEntry();

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

        ydk::YLeaf cdxcmtocpecmmacaddress; //type: string
        ydk::YLeaf cdxcmtocpeinetaddresstype; //type: InetAddressType
        ydk::YLeaf cdxcmtocpeinetaddress; //type: binary

}; // CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry


class CISCODOCSEXTMIB::CdxCpeToCmTable : public ydk::Entity
{
    public:
        CdxCpeToCmTable();
        ~CdxCpeToCmTable();

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

        class CdxCpeToCmEntry; //type: CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry

        ydk::YList cdxcpetocmentry;
        
}; // CISCODOCSEXTMIB::CdxCpeToCmTable


class CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry : public ydk::Entity
{
    public:
        CdxCpeToCmEntry();
        ~CdxCpeToCmEntry();

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

        ydk::YLeaf cdxcpetocmcpemacaddress; //type: string
        ydk::YLeaf cdxcpetocmmacaddress; //type: string
        ydk::YLeaf cdxcpetocminetaddresstype; //type: InetAddressType
        ydk::YLeaf cdxcpetocminetaddress; //type: binary
        ydk::YLeaf cdxcpetocmstatusindex; //type: int32

}; // CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry


class CISCODOCSEXTMIB::CdxCpeIpPrefixTable : public ydk::Entity
{
    public:
        CdxCpeIpPrefixTable();
        ~CdxCpeIpPrefixTable();

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

        class CdxCpeIpPrefixEntry; //type: CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry

        ydk::YList cdxcpeipprefixentry;
        
}; // CISCODOCSEXTMIB::CdxCpeIpPrefixTable


class CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry : public ydk::Entity
{
    public:
        CdxCpeIpPrefixEntry();
        ~CdxCpeIpPrefixEntry();

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

        ydk::YLeaf cdxcpeipprefixcmmacaddress; //type: string
        ydk::YLeaf cdxcpeipprefixtype; //type: InetAddressType
        ydk::YLeaf cdxcpeipprefixaddress; //type: binary
        ydk::YLeaf cdxcpeipprefixlen; //type: uint32
        ydk::YLeaf cdxcpeipprefixcpemacaddress; //type: string
        ydk::YLeaf cdxcpeipprefixcpetype; //type: string

}; // CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry


class CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable : public ydk::Entity
{
    public:
        CdxIfUpstreamChannelExtTable();
        ~CdxIfUpstreamChannelExtTable();

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

        class CdxIfUpstreamChannelExtEntry; //type: CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry

        ydk::YList cdxifupstreamchannelextentry;
        
}; // CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable


class CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry : public ydk::Entity
{
    public:
        CdxIfUpstreamChannelExtEntry();
        ~CdxIfUpstreamChannelExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxifupchannelwidth; //type: int32
        ydk::YLeaf cdxifupchannelmodulationprofile; //type: uint32
        ydk::YLeaf cdxifupchannelcmtotal; //type: int32
        ydk::YLeaf cdxifupchannelcmactive; //type: int32
        ydk::YLeaf cdxifupchannelcmregistered; //type: int32
        ydk::YLeaf cdxifupchannelinputpowerlevel; //type: int32
        ydk::YLeaf cdxifupchannelavgutil; //type: int32
        ydk::YLeaf cdxifupchannelavgcontslots; //type: int32
        ydk::YLeaf cdxifupchannelrangeslots; //type: int32
        ydk::YLeaf cdxifupchannelnumactiveugs; //type: uint32
        ydk::YLeaf cdxifupchannelmaxugslastonehour; //type: uint32
        ydk::YLeaf cdxifupchannelminugslastonehour; //type: uint32
        ydk::YLeaf cdxifupchannelavgugslastonehour; //type: uint32
        ydk::YLeaf cdxifupchannelmaxugslastfivemins; //type: uint32
        ydk::YLeaf cdxifupchannelminugslastfivemins; //type: uint32
        ydk::YLeaf cdxifupchannelavgugslastfivemins; //type: uint32

}; // CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry


class CISCODOCSEXTMIB::CdxWBResilCmTable : public ydk::Entity
{
    public:
        CdxWBResilCmTable();
        ~CdxWBResilCmTable();

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

        class CdxWBResilCmEntry; //type: CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry

        ydk::YList cdxwbresilcmentry;
        
}; // CISCODOCSEXTMIB::CdxWBResilCmTable


class CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry : public ydk::Entity
{
    public:
        CdxWBResilCmEntry();
        ~CdxWBResilCmEntry();

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

        ydk::YLeaf cdxwbresilcmindex; //type: uint32
        ydk::YLeaf cdxwbresilcmmacaddr; //type: string
        ydk::YLeaf cdxwbresilcmtotaldsnum; //type: uint32
        ydk::YLeaf cdxwbresilcmtotalusnum; //type: uint32
        ydk::YLeaf cdxwbresilcmcurrentdsnum; //type: uint32
        ydk::YLeaf cdxwbresilcmcurrentusnum; //type: uint32
        ydk::YLeaf cdxwbresilcmimpaireddschindex; //type: string
        ydk::YLeaf cdxwbresilcmimpaireduschindex; //type: string

}; // CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry


class CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable : public ydk::Entity
{
    public:
        CdxRFtoPrimaryChannelMappingTable();
        ~CdxRFtoPrimaryChannelMappingTable();

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

        class CdxRFtoPrimaryChannelMappingEntry; //type: CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry

        ydk::YList cdxrftoprimarychannelmappingentry;
        
}; // CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable


class CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry : public ydk::Entity
{
    public:
        CdxRFtoPrimaryChannelMappingEntry();
        ~CdxRFtoPrimaryChannelMappingEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxprimarychannelifindex; //type: int32

}; // CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry


class CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable : public ydk::Entity
{
    public:
        CdxPrimaryChanneltoRFMappingTable();
        ~CdxPrimaryChanneltoRFMappingTable();

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

        class CdxPrimaryChanneltoRFMappingEntry; //type: CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry

        ydk::YList cdxprimarychanneltorfmappingentry;
        
}; // CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable


class CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry : public ydk::Entity
{
    public:
        CdxPrimaryChanneltoRFMappingEntry();
        ~CdxPrimaryChanneltoRFMappingEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxphysicalrfifindex; //type: int32

}; // CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry


class CISCODOCSEXTMIB::CdxCmtsMtcCmTable : public ydk::Entity
{
    public:
        CdxCmtsMtcCmTable();
        ~CdxCmtsMtcCmTable();

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

        class CdxCmtsMtcCmEntry; //type: CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry

        ydk::YList cdxcmtsmtccmentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsMtcCmTable


class CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry : public ydk::Entity
{
    public:
        CdxCmtsMtcCmEntry();
        ~CdxCmtsMtcCmEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxcmtsmtctcsid; //type: uint32
        ydk::YLeaf cdxcmtsmtccmtotal; //type: uint32
        ydk::YLeaf cdxcmtsmtccmoperational; //type: uint32
        ydk::YLeaf cdxcmtsmtccmregistered; //type: uint32
        ydk::YLeaf cdxcmtsmtccmunregistered; //type: uint32
        ydk::YLeaf cdxcmtsmtccmoffline; //type: uint32
        ydk::YLeaf cdxcmtsmtccmwideband; //type: uint32
        ydk::YLeaf cdxcmtsmtcupstreambondgrp; //type: string

}; // CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry


class CISCODOCSEXTMIB::CdxCmtsUscbSflowTable : public ydk::Entity
{
    public:
        CdxCmtsUscbSflowTable();
        ~CdxCmtsUscbSflowTable();

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

        class CdxCmtsUscbSflowEntry; //type: CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry

        ydk::YList cdxcmtsuscbsflowentry;
        
}; // CISCODOCSEXTMIB::CdxCmtsUscbSflowTable


class CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry : public ydk::Entity
{
    public:
        CdxCmtsUscbSflowEntry();
        ~CdxCmtsUscbSflowEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxcmtsusbondinggrpid; //type: uint32
        ydk::YLeaf cdxcmtsuscbsftotal; //type: uint32
        ydk::YLeaf cdxcmtsuscbsfpri; //type: uint32
        ydk::YLeaf cdxcmtsuscbstaticsfbe; //type: uint32
        ydk::YLeaf cdxcmtsuscbstaticsfugs; //type: uint32
        ydk::YLeaf cdxcmtsuscbstaticsfugsad; //type: uint32
        ydk::YLeaf cdxcmtsuscbstaticsfrtps; //type: uint32
        ydk::YLeaf cdxcmtsuscbstaticsfnrtps; //type: uint32
        ydk::YLeaf cdxcmtsuscbdynsfbe; //type: uint32
        ydk::YLeaf cdxcmtsuscbdynsfugs; //type: uint32
        ydk::YLeaf cdxcmtsuscbdynsfugsad; //type: uint32
        ydk::YLeaf cdxcmtsuscbdynsfrtps; //type: uint32
        ydk::YLeaf cdxcmtsuscbdynsfnrtps; //type: uint32
        ydk::YLeaf cdxcmtsuscbdescr; //type: string

}; // CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry


class CISCODOCSEXTMIB::CdxRPDGS7KTable : public ydk::Entity
{
    public:
        CdxRPDGS7KTable();
        ~CdxRPDGS7KTable();

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

        class CdxRPDGS7KEntry; //type: CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry

        ydk::YList cdxrpdgs7kentry;
        
}; // CISCODOCSEXTMIB::CdxRPDGS7KTable


class CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry : public ydk::Entity
{
    public:
        CdxRPDGS7KEntry();
        ~CdxRPDGS7KEntry();

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

        ydk::YLeaf cdxrpdgs7kmacaddress; //type: string
        ydk::YLeaf cdxrpdgs7kps1p24v; //type: int32
        ydk::YLeaf cdxrpdgs7kps1p8v; //type: int32
        ydk::YLeaf cdxrpdgs7kps1p5v; //type: int32
        ydk::YLeaf cdxrpdgs7kps1n6v; //type: int32
        ydk::YLeaf cdxrpdgs7kps1ac; //type: int32
        ydk::YLeaf cdxrpdgs7kps2p24v; //type: int32
        ydk::YLeaf cdxrpdgs7kps2p8v; //type: int32
        ydk::YLeaf cdxrpdgs7kps2p5v; //type: int32
        ydk::YLeaf cdxrpdgs7kps2n6v; //type: int32
        ydk::YLeaf cdxrpdgs7kps2ac; //type: int32
        ydk::YLeaf cdxrpdgs7ktx1optpower; //type: int32
        ydk::YLeaf cdxrpdgs7krx1optpower; //type: int32
        ydk::YLeaf cdxrpdgs7ktriswitch; //type: CdxRPDGS7KTriSwitch
        ydk::YLeaf cdxrpdgs7ktamp; //type: CdxRPDGS7KTamp
        class CdxRPDGS7KTriSwitch;
        class CdxRPDGS7KTamp;

}; // CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry


class CISCODOCSEXTMIB::CdxBundleIpHelperTable : public ydk::Entity
{
    public:
        CdxBundleIpHelperTable();
        ~CdxBundleIpHelperTable();

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

        class CdxBundleIpHelperEntry; //type: CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry

        ydk::YList cdxbundleiphelperentry;
        
}; // CISCODOCSEXTMIB::CdxBundleIpHelperTable


class CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry : public ydk::Entity
{
    public:
        CdxBundleIpHelperEntry();
        ~CdxBundleIpHelperEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxbundlehelperaddr; //type: binary
        ydk::YLeaf cdxbundlehelpertype; //type: CdxBundleHelperType

}; // CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry


class CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable : public ydk::Entity
{
    public:
        CdxBundleIPv6DHCPRelayTable();
        ~CdxBundleIPv6DHCPRelayTable();

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

        class CdxBundleIPv6DHCPRelayEntry; //type: CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry

        ydk::YList cdxbundleipv6dhcprelayentry;
        
}; // CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable


class CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry : public ydk::Entity
{
    public:
        CdxBundleIPv6DHCPRelayEntry();
        ~CdxBundleIPv6DHCPRelayEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxbundleipv6dhcprelayinsertvssoption; //type: boolean
        ydk::YLeaf cdxbundleipv6dhcprelaytrusttorelayreply; //type: boolean
        ydk::YLeaf cdxbundleipv6dhdprelaysourceifname; //type: string

}; // CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry


class CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable : public ydk::Entity
{
    public:
        CdxBundleIPv6DHCPRelayDestTable();
        ~CdxBundleIPv6DHCPRelayDestTable();

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

        class CdxBundleIPv6DHCPRelayDestEntry; //type: CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry

        ydk::YList cdxbundleipv6dhcprelaydestentry;
        
}; // CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable


class CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry : public ydk::Entity
{
    public:
        CdxBundleIPv6DHCPRelayDestEntry();
        ~CdxBundleIPv6DHCPRelayDestEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdxbundleipv6dhcprelaydestoutifvrfindex; //type: uint32
        ydk::YLeaf cdxbundleipv6dhcprelaydestaddr; //type: binary
        ydk::YLeaf cdxbundleipv6dhcprelaydestoutifindex; //type: int32
        ydk::YLeaf cdxbundleipv6dhcprelaydestsourceaddress; //type: string
        ydk::YLeaf cdxbundleipv6dhcprelaydestlinkaddress; //type: string

}; // CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry

class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsDocsisLBEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBUpstreamEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBStaticEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBDynEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noRateLimit;
        static const ydk::Enum::YLeaf oneSecBurst;
        static const ydk::Enum::YLeaf carLike;
        static const ydk::Enum::YLeaf wtExPacketDiscard;
        static const ydk::Enum::YLeaf shaping;

        static int get_enum_value(const std::string & name) {
            if (name == "noRateLimit") return 1;
            if (name == "oneSecBurst") return 2;
            if (name == "carLike") return 3;
            if (name == "wtExPacketDiscard") return 4;
            if (name == "shaping") return 5;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf msec128;
        static const ydk::Enum::YLeaf msec256;
        static const ydk::Enum::YLeaf msec512;
        static const ydk::Enum::YLeaf msec1024;

        static int get_enum_value(const std::string & name) {
            if (name == "na") return 1;
            if (name == "msec128") return 2;
            if (name == "msec256") return 3;
            if (name == "msec512") return 4;
            if (name == "msec1024") return 5;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf msec1;
        static const ydk::Enum::YLeaf msec2;
        static const ydk::Enum::YLeaf msec4;
        static const ydk::Enum::YLeaf msec8;
        static const ydk::Enum::YLeaf msec16;

        static int get_enum_value(const std::string & name) {
            if (name == "na") return 1;
            if (name == "msec1") return 2;
            if (name == "msec2") return 3;
            if (name == "msec4") return 4;
            if (name == "msec8") return 5;
            if (name == "msec16") return 6;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reqIE;
        static const ydk::Enum::YLeaf reqOrDataIE;
        static const ydk::Enum::YLeaf initMtnIE;
        static const ydk::Enum::YLeaf stnMtnIE;
        static const ydk::Enum::YLeaf shortGrantIE;
        static const ydk::Enum::YLeaf longGrantIE;

        static int get_enum_value(const std::string & name) {
            if (name == "reqIE") return 1;
            if (name == "reqOrDataIE") return 2;
            if (name == "initMtnIE") return 3;
            if (name == "stnMtnIE") return 4;
            if (name == "shortGrantIE") return 5;
            if (name == "longGrantIE") return 6;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cirQ;
        static const ydk::Enum::YLeaf tbeQ;
        static const ydk::Enum::YLeaf p0BEGrantQ;
        static const ydk::Enum::YLeaf p1BEGrantQ;
        static const ydk::Enum::YLeaf p2BEGrantQ;
        static const ydk::Enum::YLeaf p3BEGrantQ;
        static const ydk::Enum::YLeaf p4BEGrantQ;
        static const ydk::Enum::YLeaf p5BEGrantQ;
        static const ydk::Enum::YLeaf p6BEGrantQ;
        static const ydk::Enum::YLeaf p7BEGrantQ;
        static const ydk::Enum::YLeaf rngPollQ;

        static int get_enum_value(const std::string & name) {
            if (name == "cirQ") return 1;
            if (name == "tbeQ") return 2;
            if (name == "p0BEGrantQ") return 3;
            if (name == "p1BEGrantQ") return 4;
            if (name == "p2BEGrantQ") return 5;
            if (name == "p3BEGrantQ") return 6;
            if (name == "p4BEGrantQ") return 7;
            if (name == "p5BEGrantQ") return 8;
            if (name == "p6BEGrantQ") return 9;
            if (name == "p7BEGrantQ") return 10;
            if (name == "rngPollQ") return 11;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf fifo;
        static const ydk::Enum::YLeaf priority;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "other") return 2;
            if (name == "fifo") return 3;
            if (name == "priority") return 4;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::CdxCmCpeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cm;
        static const ydk::Enum::YLeaf cpe;

        static int get_enum_value(const std::string & name) {
            if (name == "cm") return 1;
            if (name == "cpe") return 2;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf others;
        static const ydk::Enum::YLeaf initRangingRcvd;
        static const ydk::Enum::YLeaf initDhcpReqRcvd;
        static const ydk::Enum::YLeaf onlineNetAccessDisabled;
        static const ydk::Enum::YLeaf onlineKekAssigned;
        static const ydk::Enum::YLeaf onlineTekAssigned;
        static const ydk::Enum::YLeaf rejectBadMic;
        static const ydk::Enum::YLeaf rejectBadCos;
        static const ydk::Enum::YLeaf kekRejected;
        static const ydk::Enum::YLeaf tekRejected;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf initTftpPacketRcvd;
        static const ydk::Enum::YLeaf initTodRequestRcvd;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf rangingInProgress;
        static const ydk::Enum::YLeaf rangingCompleted;
        static const ydk::Enum::YLeaf dhcpGotIpAddr;
        static const ydk::Enum::YLeaf rejStaleConfig;
        static const ydk::Enum::YLeaf rejIpSpoof;
        static const ydk::Enum::YLeaf rejClassFail;
        static const ydk::Enum::YLeaf rejRegNack;
        static const ydk::Enum::YLeaf bpiKekExpired;
        static const ydk::Enum::YLeaf bpiTekExpired;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf channelChgInitRangingRcvd;
        static const ydk::Enum::YLeaf channelChgRangingInProgress;

        static int get_enum_value(const std::string & name) {
            if (name == "offline") return 1;
            if (name == "others") return 2;
            if (name == "initRangingRcvd") return 3;
            if (name == "initDhcpReqRcvd") return 4;
            if (name == "onlineNetAccessDisabled") return 5;
            if (name == "onlineKekAssigned") return 6;
            if (name == "onlineTekAssigned") return 7;
            if (name == "rejectBadMic") return 8;
            if (name == "rejectBadCos") return 9;
            if (name == "kekRejected") return 10;
            if (name == "tekRejected") return 11;
            if (name == "online") return 12;
            if (name == "initTftpPacketRcvd") return 13;
            if (name == "initTodRequestRcvd") return 14;
            if (name == "reset") return 15;
            if (name == "rangingInProgress") return 16;
            if (name == "rangingCompleted") return 17;
            if (name == "dhcpGotIpAddr") return 18;
            if (name == "rejStaleConfig") return 19;
            if (name == "rejIpSpoof") return 20;
            if (name == "rejClassFail") return 21;
            if (name == "rejRegNack") return 22;
            if (name == "bpiKekExpired") return 23;
            if (name == "bpiTekExpired") return 24;
            if (name == "shutdown") return 25;
            if (name == "channelChgInitRangingRcvd") return 26;
            if (name == "channelChgRangingInProgress") return 27;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsCmDMICMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notConfigured;
        static const ydk::Enum::YLeaf mark;
        static const ydk::Enum::YLeaf lock;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "notConfigured") return 1;
            if (name == "mark") return 2;
            if (name == "lock") return 3;
            if (name == "reject") return 4;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf messageSent;
        static const ydk::Enum::YLeaf commandNotActive;
        static const ydk::Enum::YLeaf noOpNeeded;
        static const ydk::Enum::YLeaf modemNotFound;
        static const ydk::Enum::YLeaf waitToSendMessage;
        static const ydk::Enum::YLeaf timeOut;

        static int get_enum_value(const std::string & name) {
            if (name == "messageSent") return 1;
            if (name == "commandNotActive") return 2;
            if (name == "noOpNeeded") return 3;
            if (name == "modemNotFound") return 4;
            if (name == "waitToSendMessage") return 5;
            if (name == "timeOut") return 6;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::CdxCmtsCmStatusDMICMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mark;
        static const ydk::Enum::YLeaf lock;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "mark") return 1;
            if (name == "lock") return 2;
            if (name == "reject") return 3;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTriSwitch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf pad;

        static int get_enum_value(const std::string & name) {
            if (name == "low") return 1;
            if (name == "high") return 2;
            if (name == "pad") return 3;
            return -1;
        }
};

class CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTamp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intact;
        static const ydk::Enum::YLeaf compromised;

        static int get_enum_value(const std::string & name) {
            if (name == "intact") return 1;
            if (name == "compromised") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_DOCS_EXT_MIB_ */

