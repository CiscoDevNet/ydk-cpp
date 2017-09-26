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

        class Csubjob; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjob
        class Csubaggthresh; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggthresh
        class Csubsessiontable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable
        class Csubsessionbytypetable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable
        class Csubaggstatstable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable
        class Csubaggstatsinttable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable
        class Csubaggstatsthreshtable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable
        class Csubjobtable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobtable
        class Csubjobmatchparamstable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable
        class Csubjobqueryparamstable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable
        class Csubjobqueuetable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable
        class Csubjobreporttable; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable

        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable> csubaggstatsinttable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable> csubaggstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable> csubaggstatsthreshtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggthresh> csubaggthresh;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjob> csubjob;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable> csubjobmatchparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable> csubjobqueryparamstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable> csubjobqueuetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable> csubjobreporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobtable> csubjobtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable> csubsessionbytypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable> csubsessiontable;
        
}; // CISCOSUBSCRIBERSESSIONMIB


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable : public ydk::Entity
{
    public:
        Csubaggstatsinttable();
        ~Csubaggstatsinttable();

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

        class Csubaggstatsintentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable::Csubaggstatsintentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable::Csubaggstatsintentry> > csubaggstatsintentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable::Csubaggstatsintentry : public ydk::Entity
{
    public:
        Csubaggstatsintentry();
        ~Csubaggstatsintentry();

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

        ydk::YLeaf csubaggstatspointtype; //type: Csubaggstatspointtype
        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry::csubaggstatspoint)
        ydk::YLeaf csubaggstatspoint;
        ydk::YLeaf csubaggstatssessiontype; //type: SubSessionType
        ydk::YLeaf csubaggstatsintnumber; //type: uint32
        ydk::YLeaf csubaggstatsintvalid; //type: boolean
        ydk::YLeaf csubaggstatsintcreatedsessions; //type: uint32
        ydk::YLeaf csubaggstatsintfailedsessions; //type: uint32
        ydk::YLeaf csubaggstatsintupsessions; //type: uint32
        ydk::YLeaf csubaggstatsintauthsessions; //type: uint32
        ydk::YLeaf csubaggstatsintdiscsessions; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsinttable::Csubaggstatsintentry


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable : public ydk::Entity
{
    public:
        Csubaggstatstable();
        ~Csubaggstatstable();

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

        class Csubaggstatsentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry> > csubaggstatsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry : public ydk::Entity
{
    public:
        Csubaggstatsentry();
        ~Csubaggstatsentry();

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

        ydk::YLeaf csubaggstatspointtype; //type: Csubaggstatspointtype
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
        class Csubaggstatspointtype;

}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable : public ydk::Entity
{
    public:
        Csubaggstatsthreshtable();
        ~Csubaggstatsthreshtable();

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

        class Csubaggstatsthreshentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable::Csubaggstatsthreshentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable::Csubaggstatsthreshentry> > csubaggstatsthreshentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable


class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable::Csubaggstatsthreshentry : public ydk::Entity
{
    public:
        Csubaggstatsthreshentry();
        ~Csubaggstatsthreshentry();

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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggstatsthreshtable::Csubaggstatsthreshentry


class CISCOSUBSCRIBERSESSIONMIB::Csubaggthresh : public ydk::Entity
{
    public:
        Csubaggthresh();
        ~Csubaggthresh();

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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubaggthresh


class CISCOSUBSCRIBERSESSIONMIB::Csubjob : public ydk::Entity
{
    public:
        Csubjob();
        ~Csubjob();

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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjob


class CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable : public ydk::Entity
{
    public:
        Csubjobmatchparamstable();
        ~Csubjobmatchparamstable();

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

        class Csubjobmatchparamsentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable::Csubjobmatchparamsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable::Csubjobmatchparamsentry> > csubjobmatchparamsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable


class CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable::Csubjobmatchparamsentry : public ydk::Entity
{
    public:
        Csubjobmatchparamsentry();
        ~Csubjobmatchparamsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobmatchidentities; //type: SubSessionIdentities
        ydk::YLeaf csubjobmatchotherparams; //type: Csubjobmatchotherparams
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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobmatchparamstable::Csubjobmatchparamsentry


class CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable : public ydk::Entity
{
    public:
        Csubjobqueryparamstable();
        ~Csubjobqueryparamstable();

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

        class Csubjobqueryparamsentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable::Csubjobqueryparamsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable::Csubjobqueryparamsentry> > csubjobqueryparamsentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable


class CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable::Csubjobqueryparamsentry : public ydk::Entity
{
    public:
        Csubjobqueryparamsentry();
        ~Csubjobqueryparamsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobquerysortkey1; //type: SubSessionIdentity
        ydk::YLeaf csubjobquerysortkey2; //type: SubSessionIdentity
        ydk::YLeaf csubjobquerysortkey3; //type: SubSessionIdentity
        ydk::YLeaf csubjobqueryresultingreportsize; //type: uint32

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobqueryparamstable::Csubjobqueryparamsentry


class CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable : public ydk::Entity
{
    public:
        Csubjobqueuetable();
        ~Csubjobqueuetable();

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

        class Csubjobqueueentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable::Csubjobqueueentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable::Csubjobqueueentry> > csubjobqueueentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable


class CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable::Csubjobqueueentry : public ydk::Entity
{
    public:
        Csubjobqueueentry();
        ~Csubjobqueueentry();

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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobqueuetable::Csubjobqueueentry


class CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable : public ydk::Entity
{
    public:
        Csubjobreporttable();
        ~Csubjobreporttable();

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

        class Csubjobreportentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable::Csubjobreportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable::Csubjobreportentry> > csubjobreportentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable


class CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable::Csubjobreportentry : public ydk::Entity
{
    public:
        Csubjobreportentry();
        ~Csubjobreportentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::csubjobid)
        ydk::YLeaf csubjobid;
        ydk::YLeaf csubjobreportid; //type: uint32
        ydk::YLeaf csubjobreportsession; //type: int32

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobreporttable::Csubjobreportentry


class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable : public ydk::Entity
{
    public:
        Csubjobtable();
        ~Csubjobtable();

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

        class Csubjobentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry> > csubjobentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobtable


class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry : public ydk::Entity
{
    public:
        Csubjobentry();
        ~Csubjobentry();

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
        ydk::YLeaf csubjobtype; //type: Csubjobtype
        ydk::YLeaf csubjobcontrol; //type: Csubjobcontrol
        ydk::YLeaf csubjobstate; //type: Csubjobstate
        ydk::YLeaf csubjobstartedtime; //type: uint32
        ydk::YLeaf csubjobfinishedtime; //type: uint32
        ydk::YLeaf csubjobfinishedreason; //type: Csubjobfinishedreason
        class Csubjobtype;
        class Csubjobcontrol;
        class Csubjobstate;
        class Csubjobfinishedreason;

}; // CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry


class CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable : public ydk::Entity
{
    public:
        Csubsessionbytypetable();
        ~Csubsessionbytypetable();

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

        class Csubsessionbytypeentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable::Csubsessionbytypeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable::Csubsessionbytypeentry> > csubsessionbytypeentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable


class CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable::Csubsessionbytypeentry : public ydk::Entity
{
    public:
        Csubsessionbytypeentry();
        ~Csubsessionbytypeentry();

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

}; // CISCOSUBSCRIBERSESSIONMIB::Csubsessionbytypetable::Csubsessionbytypeentry


class CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable : public ydk::Entity
{
    public:
        Csubsessiontable();
        ~Csubsessiontable();

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

        class Csubsessionentry; //type: CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable::Csubsessionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SUBSCRIBER_SESSION_MIB::CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable::Csubsessionentry> > csubsessionentry;
        
}; // CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable


class CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable::Csubsessionentry : public ydk::Entity
{
    public:
        Csubsessionentry();
        ~Csubsessionentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csubsessiontype; //type: SubSessionType
        ydk::YLeaf csubsessionipaddrassignment; //type: Csubsessionipaddrassignment
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
        class Csubsessionipaddrassignment;

}; // CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable::Csubsessionentry

class CISCOSUBSCRIBERSESSIONMIB::Csubaggstatstable::Csubaggstatsentry::Csubaggstatspointtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf physical;
        static const ydk::Enum::YLeaf interface;

};

class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::Csubjobtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf query;
        static const ydk::Enum::YLeaf clear;

};

class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::Csubjobcontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf abort;
        static const ydk::Enum::YLeaf release;

};

class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::Csubjobstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf finished;

};

class CISCOSUBSCRIBERSESSIONMIB::Csubjobtable::Csubjobentry::Csubjobfinishedreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf insufficientResources;
        static const ydk::Enum::YLeaf error;

};

class CISCOSUBSCRIBERSESSIONMIB::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment : public ydk::Enum
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

};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_MIB_ */

