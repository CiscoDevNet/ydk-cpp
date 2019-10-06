#ifndef _CISCO_SUBSCRIBER_SESSION_MIB_
#define _CISCO_SUBSCRIBER_SESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_MIB {

class CISCOSUBSCRIBERSESSIONMIB : public ydk::Entity
{
    public:
        CISCOSUBSCRIBERSESSIONMIB();
        ~CISCOSUBSCRIBERSESSIONMIB();

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

        class CsubJob; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJob
        class CsubAggThresh; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh
        class CsubSessionTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable
        class CsubSessionByTypeTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable
        class CsubAggStatsTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable
        class CsubAggStatsIntTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable
        class CsubAggStatsThreshTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable
        class CsubJobTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobTable
        class CsubJobMatchParamsTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable
        class CsubJobQueryParamsTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable
        class CsubJobQueueTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable
        class CsubJobReportTable; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable

        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJob> csubjob;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh> csubaggthresh;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable> csubsessiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable> csubsessionbytypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable> csubaggstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable> csubaggstatsinttable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable> csubaggstatsthreshtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobTable> csubjobtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable> csubjobmatchparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable> csubjobqueryparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable> csubjobqueuetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable> csubjobreporttable;
        
}; // CISCOSUBSCRIBERSESSIONMIB


class CISCOSUBSCRIBERSESSIONMIB::CsubJob : public ydk::Entity
{
    public:
        CsubJob();
        ~CsubJob();

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

        ydk::YLeaf csubjobfinishednotifyenable; //type: boolean
        ydk::YLeaf csubjobindexedattributes; //type: SubSessionIdentities
        ydk::YLeaf csubjobidnext; //type: uint32
        ydk::YLeaf csubjobmaxnumber; //type: uint32
        ydk::YLeaf csubjobmaxlife; //type: uint32
        ydk::YLeaf csubjobcount; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJob


class CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh : public ydk::Entity
{
    public:
        CsubAggThresh();
        ~CsubAggThresh();

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

        ydk::YLeaf csubaggstatsthreshnotifenable; //type: boolean

}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh


class CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable : public ydk::Entity
{
    public:
        CsubSessionTable();
        ~CsubSessionTable();

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

        class CsubSessionEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry

        ydk::YList csubsessionentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable


class CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry : public ydk::Entity
{
    public:
        CsubSessionEntry();
        ~CsubSessionEntry();

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
        ydk::YLeaf csubsessiontype; //type: SubSessionType
        ydk::YLeaf csubsessionipaddrassignment; //type: CsubSessionIpAddrAssignment
        ydk::YLeaf csubsessionstate; //type: SubSessionState
        ydk::YLeaf csubsessionauthenticated; //type: boolean
        ydk::YLeaf csubsessionredundancymode; //type: SubSessionRedundancyMode
        ydk::YLeaf csubsessioncreationtime; //type: string
        ydk::YLeaf csubsessionderivedcfg; //type: binary
        ydk::YLeaf csubsessionavailableidentities; //type: SubSessionIdentities
        ydk::YLeaf csubsessionsubscriberlabel; //type: uint32
        ydk::YLeaf csubsessionmacaddress; //type: string
        ydk::YLeaf csubsessionnativevrf; //type: string
        ydk::YLeaf csubsessionnativeipaddrtype; //type: InetAddressType
        ydk::YLeaf csubsessionnativeipaddr; //type: binary
        ydk::YLeaf csubsessionnativeipmask; //type: binary
        ydk::YLeaf csubsessiondomainvrf; //type: string
        ydk::YLeaf csubsessiondomainipaddrtype; //type: InetAddressType
        ydk::YLeaf csubsessiondomainipaddr; //type: binary
        ydk::YLeaf csubsessiondomainipmask; //type: binary
        ydk::YLeaf csubsessionpbhk; //type: string
        ydk::YLeaf csubsessionremoteid; //type: string
        ydk::YLeaf csubsessioncircuitid; //type: string
        ydk::YLeaf csubsessionnasport; //type: string
        ydk::YLeaf csubsessiondomain; //type: string
        ydk::YLeaf csubsessionusername; //type: string
        ydk::YLeaf csubsessionacctsessionid; //type: uint32
        ydk::YLeaf csubsessiondnis; //type: string
        ydk::YLeaf csubsessionmedia; //type: SubscriberMediaType
        ydk::YLeaf csubsessionmlpnegotiated; //type: boolean
        ydk::YLeaf csubsessionprotocol; //type: SubscriberProtocolType
        ydk::YLeaf csubsessiondhcpclass; //type: string
        ydk::YLeaf csubsessiontunnelname; //type: string
        ydk::YLeaf csubsessionlocationidentifier; //type: string
        ydk::YLeaf csubsessionserviceidentifier; //type: string
        ydk::YLeaf csubsessionlastchanged; //type: string
        ydk::YLeaf csubsessionnativeipaddrtype2; //type: InetAddressType
        ydk::YLeaf csubsessionnativeipaddr2; //type: binary
        ydk::YLeaf csubsessionnativeipmask2; //type: binary
        class CsubSessionIpAddrAssignment;

}; // CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable : public ydk::Entity
{
    public:
        CsubSessionByTypeTable();
        ~CsubSessionByTypeTable();

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

        class CsubSessionByTypeEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry

        ydk::YList csubsessionbytypeentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable


class CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry : public ydk::Entity
{
    public:
        CsubSessionByTypeEntry();
        ~CsubSessionByTypeEntry();

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

        ydk::YLeaf csubsessionbytype; //type: SubSessionType
        ydk::YLeaf csubsessionifindex; //type: int32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable : public ydk::Entity
{
    public:
        CsubAggStatsTable();
        ~CsubAggStatsTable();

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

        class CsubAggStatsEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry

        ydk::YList csubaggstatsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry : public ydk::Entity
{
    public:
        CsubAggStatsEntry();
        ~CsubAggStatsEntry();

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

        ydk::YLeaf csubaggstatspointtype; //type: CsubAggStatsPointType
        ydk::YLeaf csubaggstatspoint; //type: uint32
        ydk::YLeaf csubaggstatssessiontype; //type: SubSessionType
        ydk::YLeaf csubaggstatspendingsessions; //type: uint32
        ydk::YLeaf csubaggstatsupsessions; //type: uint32
        ydk::YLeaf csubaggstatsauthsessions; //type: uint32
        ydk::YLeaf csubaggstatsunauthsessions; //type: uint32
        ydk::YLeaf csubaggstatslightweightsessions; //type: uint32
        ydk::YLeaf csubaggstatsredsessions; //type: uint32
        ydk::YLeaf csubaggstatshighupsessions; //type: uint32
        ydk::YLeaf csubaggstatsavgsessionuptime; //type: uint32
        ydk::YLeaf csubaggstatsavgsessionrpm; //type: uint32
        ydk::YLeaf csubaggstatsavgsessionrph; //type: uint32
        ydk::YLeaf csubaggstatsthrottleengagements; //type: uint64
        ydk::YLeaf csubaggstatstotalcreatedsessions; //type: uint64
        ydk::YLeaf csubaggstatstotalfailedsessions; //type: uint64
        ydk::YLeaf csubaggstatstotalupsessions; //type: uint64
        ydk::YLeaf csubaggstatstotalauthsessions; //type: uint64
        ydk::YLeaf csubaggstatstotaldiscsessions; //type: uint64
        ydk::YLeaf csubaggstatstotallightweightsessions; //type: uint64
        ydk::YLeaf csubaggstatstotalflowsup; //type: uint64
        ydk::YLeaf csubaggstatsdaycreatedsessions; //type: uint32
        ydk::YLeaf csubaggstatsdayfailedsessions; //type: uint32
        ydk::YLeaf csubaggstatsdayupsessions; //type: uint32
        ydk::YLeaf csubaggstatsdayauthsessions; //type: uint32
        ydk::YLeaf csubaggstatsdaydiscsessions; //type: uint32
        ydk::YLeaf csubaggstatscurrtimeelapsed; //type: uint32
        ydk::YLeaf csubaggstatscurrvalidintervals; //type: uint32
        ydk::YLeaf csubaggstatscurrinvalidintervals; //type: uint32
        ydk::YLeaf csubaggstatscurrflowsup; //type: uint32
        ydk::YLeaf csubaggstatscurrcreatedsessions; //type: uint32
        ydk::YLeaf csubaggstatscurrfailedsessions; //type: uint32
        ydk::YLeaf csubaggstatscurrupsessions; //type: uint32
        ydk::YLeaf csubaggstatscurrauthsessions; //type: uint32
        ydk::YLeaf csubaggstatscurrdiscsessions; //type: uint32
        ydk::YLeaf csubaggstatsdiscontinuitytime; //type: string
        class CsubAggStatsPointType;

}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable : public ydk::Entity
{
    public:
        CsubAggStatsIntTable();
        ~CsubAggStatsIntTable();

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

        class CsubAggStatsIntEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry

        ydk::YList csubaggstatsintentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry : public ydk::Entity
{
    public:
        CsubAggStatsIntEntry();
        ~CsubAggStatsIntEntry();

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

        ydk::YLeaf csubaggstatspointtype; //type: CsubAggStatsPointType
        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::csubaggstatspoint)
        ydk::YLeaf csubaggstatspoint;
        ydk::YLeaf csubaggstatssessiontype; //type: SubSessionType
        ydk::YLeaf csubaggstatsintnumber; //type: uint32
        ydk::YLeaf csubaggstatsintvalid; //type: boolean
        ydk::YLeaf csubaggstatsintcreatedsessions; //type: uint32
        ydk::YLeaf csubaggstatsintfailedsessions; //type: uint32
        ydk::YLeaf csubaggstatsintupsessions; //type: uint32
        ydk::YLeaf csubaggstatsintauthsessions; //type: uint32
        ydk::YLeaf csubaggstatsintdiscsessions; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable : public ydk::Entity
{
    public:
        CsubAggStatsThreshTable();
        ~CsubAggStatsThreshTable();

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

        class CsubAggStatsThreshEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry

        ydk::YList csubaggstatsthreshentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable


class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry : public ydk::Entity
{
    public:
        CsubAggStatsThreshEntry();
        ~CsubAggStatsThreshEntry();

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

        ydk::YLeaf csubsessionrisingthresh; //type: uint32
        ydk::YLeaf csubsessionfallingthresh; //type: uint32
        ydk::YLeaf csubsessiondeltapercentfallingthresh; //type: uint32
        ydk::YLeaf csubsessionthreshevalinterval; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable : public ydk::Entity
{
    public:
        CsubJobTable();
        ~CsubJobTable();

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

        class CsubJobEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry

        ydk::YList csubjobentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobTable


class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry : public ydk::Entity
{
    public:
        CsubJobEntry();
        ~CsubJobEntry();

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

        ydk::YLeaf csubjobid; //type: uint32
        ydk::YLeaf csubjobstatus; //type: RowStatus
        ydk::YLeaf csubjobstorage; //type: StorageType
        ydk::YLeaf csubjobtype; //type: CsubJobType
        ydk::YLeaf csubjobcontrol; //type: CsubJobControl
        ydk::YLeaf csubjobstate; //type: CsubJobState
        ydk::YLeaf csubjobstartedtime; //type: uint32
        ydk::YLeaf csubjobfinishedtime; //type: uint32
        ydk::YLeaf csubjobfinishedreason; //type: CsubJobFinishedReason
        class CsubJobType;
        class CsubJobControl;
        class CsubJobState;
        class CsubJobFinishedReason;

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable : public ydk::Entity
{
    public:
        CsubJobMatchParamsTable();
        ~CsubJobMatchParamsTable();

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

        class CsubJobMatchParamsEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry

        ydk::YList csubjobmatchparamsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable


class CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry : public ydk::Entity
{
    public:
        CsubJobMatchParamsEntry();
        ~CsubJobMatchParamsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobmatchidentities; //type: SubSessionIdentities
        ydk::YLeaf csubjobmatchotherparams; //type: CsubJobMatchOtherParams
        ydk::YLeaf csubjobmatchsubscriberlabel; //type: uint32
        ydk::YLeaf csubjobmatchmacaddress; //type: string
        ydk::YLeaf csubjobmatchnativevrf; //type: string
        ydk::YLeaf csubjobmatchnativeipaddrtype; //type: InetAddressType
        ydk::YLeaf csubjobmatchnativeipaddr; //type: binary
        ydk::YLeaf csubjobmatchnativeipmask; //type: binary
        ydk::YLeaf csubjobmatchdomainvrf; //type: string
        ydk::YLeaf csubjobmatchdomainipaddrtype; //type: InetAddressType
        ydk::YLeaf csubjobmatchdomainipaddr; //type: binary
        ydk::YLeaf csubjobmatchdomainipmask; //type: binary
        ydk::YLeaf csubjobmatchpbhk; //type: string
        ydk::YLeaf csubjobmatchremoteid; //type: string
        ydk::YLeaf csubjobmatchcircuitid; //type: string
        ydk::YLeaf csubjobmatchnasport; //type: string
        ydk::YLeaf csubjobmatchdomain; //type: string
        ydk::YLeaf csubjobmatchusername; //type: string
        ydk::YLeaf csubjobmatchacctsessionid; //type: uint32
        ydk::YLeaf csubjobmatchdnis; //type: string
        ydk::YLeaf csubjobmatchmedia; //type: SubscriberMediaType
        ydk::YLeaf csubjobmatchmlpnegotiated; //type: boolean
        ydk::YLeaf csubjobmatchprotocol; //type: SubscriberProtocolType
        ydk::YLeaf csubjobmatchservicename; //type: string
        ydk::YLeaf csubjobmatchdhcpclass; //type: string
        ydk::YLeaf csubjobmatchtunnelname; //type: string
        ydk::YLeaf csubjobmatchdanglingduration; //type: uint32
        ydk::YLeaf csubjobmatchstate; //type: SubSessionState
        ydk::YLeaf csubjobmatchauthenticated; //type: boolean
        ydk::YLeaf csubjobmatchredundancymode; //type: SubSessionRedundancyMode

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable : public ydk::Entity
{
    public:
        CsubJobQueryParamsTable();
        ~CsubJobQueryParamsTable();

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

        class CsubJobQueryParamsEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry

        ydk::YList csubjobqueryparamsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable


class CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry : public ydk::Entity
{
    public:
        CsubJobQueryParamsEntry();
        ~CsubJobQueryParamsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobquerysortkey1; //type: SubSessionIdentity
        ydk::YLeaf csubjobquerysortkey2; //type: SubSessionIdentity
        ydk::YLeaf csubjobquerysortkey3; //type: SubSessionIdentity
        ydk::YLeaf csubjobqueryresultingreportsize; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable : public ydk::Entity
{
    public:
        CsubJobQueueTable();
        ~CsubJobQueueTable();

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

        class CsubJobQueueEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry

        ydk::YList csubjobqueueentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable


class CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry : public ydk::Entity
{
    public:
        CsubJobQueueEntry();
        ~CsubJobQueueEntry();

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

        ydk::YLeaf csubjobqueuenumber; //type: uint32
        ydk::YLeaf csubjobqueuejobid; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry


class CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable : public ydk::Entity
{
    public:
        CsubJobReportTable();
        ~CsubJobReportTable();

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

        class CsubJobReportEntry; //type: CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry

        ydk::YList csubjobreportentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable


class CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry : public ydk::Entity
{
    public:
        CsubJobReportEntry();
        ~CsubJobReportEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobreportid; //type: uint32
        ydk::YLeaf csubjobreportsession; //type: int32

}; // CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry

class CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf localPool;
        static const ydk::Enum::YLeaf dhcpv4;
        static const ydk::Enum::YLeaf dhcpv6;
        static const ydk::Enum::YLeaf userProfileIpAddr;
        static const ydk::Enum::YLeaf userProfileIpSubnet;
        static const ydk::Enum::YLeaf userProfileNamedPool;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "other") return 2;
            if (name == "static") return 3;
            if (name == "localPool") return 4;
            if (name == "dhcpv4") return 5;
            if (name == "dhcpv6") return 6;
            if (name == "userProfileIpAddr") return 7;
            if (name == "userProfileIpSubnet") return 8;
            if (name == "userProfileNamedPool") return 9;
            return -1;
        }
};

class CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::CsubAggStatsPointType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf physical;
        static const ydk::Enum::YLeaf interface;

        static int get_enum_value(const std::string & name) {
            if (name == "physical") return 1;
            if (name == "interface") return 2;
            return -1;
        }
};

class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf query;
        static const ydk::Enum::YLeaf clear;

        static int get_enum_value(const std::string & name) {
            if (name == "noop") return 1;
            if (name == "query") return 2;
            if (name == "clear") return 3;
            return -1;
        }
};

class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf abort;
        static const ydk::Enum::YLeaf release;

        static int get_enum_value(const std::string & name) {
            if (name == "noop") return 1;
            if (name == "start") return 2;
            if (name == "abort") return 3;
            if (name == "release") return 4;
            return -1;
        }
};

class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf finished;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "pending") return 2;
            if (name == "inProgress") return 3;
            if (name == "finished") return 4;
            return -1;
        }
};

class CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf insufficientResources;
        static const ydk::Enum::YLeaf error;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 1;
            if (name == "other") return 2;
            if (name == "normal") return 3;
            if (name == "aborted") return 4;
            if (name == "insufficientResources") return 5;
            if (name == "error") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_MIB_ */

