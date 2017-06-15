#ifndef _CISCO_SUBSCRIBER_SESSION_MIB_
#define _CISCO_SUBSCRIBER_SESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_SUBSCRIBER_SESSION_MIB {

class CiscoSubscriberSessionMib : public Entity
{
    public:
        CiscoSubscriberSessionMib();
        ~CiscoSubscriberSessionMib();

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

        class Csubjob; //type: CiscoSubscriberSessionMib::Csubjob
        class Csubaggthresh; //type: CiscoSubscriberSessionMib::Csubaggthresh
        class Csubsessiontable; //type: CiscoSubscriberSessionMib::Csubsessiontable
        class Csubsessionbytypetable; //type: CiscoSubscriberSessionMib::Csubsessionbytypetable
        class Csubaggstatstable; //type: CiscoSubscriberSessionMib::Csubaggstatstable
        class Csubaggstatsinttable; //type: CiscoSubscriberSessionMib::Csubaggstatsinttable
        class Csubaggstatsthreshtable; //type: CiscoSubscriberSessionMib::Csubaggstatsthreshtable
        class Csubjobtable; //type: CiscoSubscriberSessionMib::Csubjobtable
        class Csubjobmatchparamstable; //type: CiscoSubscriberSessionMib::Csubjobmatchparamstable
        class Csubjobqueryparamstable; //type: CiscoSubscriberSessionMib::Csubjobqueryparamstable
        class Csubjobqueuetable; //type: CiscoSubscriberSessionMib::Csubjobqueuetable
        class Csubjobreporttable; //type: CiscoSubscriberSessionMib::Csubjobreporttable

        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatsinttable> csubaggstatsinttable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatstable> csubaggstatstable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatsthreshtable> csubaggstatsthreshtable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggthresh> csubaggthresh_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjob> csubjob_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobmatchparamstable> csubjobmatchparamstable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobqueryparamstable> csubjobqueryparamstable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobqueuetable> csubjobqueuetable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobreporttable> csubjobreporttable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobtable> csubjobtable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubsessionbytypetable> csubsessionbytypetable_;
        std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubsessiontable> csubsessiontable_;
        
}; // CiscoSubscriberSessionMib


class CiscoSubscriberSessionMib::Csubjob : public Entity
{
    public:
        Csubjob();
        ~Csubjob();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubjobfinishednotifyenable; //type: boolean
        YLeaf csubjobindexedattributes; //type: Subsessionidentities
        YLeaf csubjobidnext; //type: uint32
        YLeaf csubjobmaxnumber; //type: uint32
        YLeaf csubjobmaxlife; //type: uint32
        YLeaf csubjobcount; //type: uint32

}; // CiscoSubscriberSessionMib::Csubjob


class CiscoSubscriberSessionMib::Csubaggthresh : public Entity
{
    public:
        Csubaggthresh();
        ~Csubaggthresh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubaggstatsthreshnotifenable; //type: boolean

}; // CiscoSubscriberSessionMib::Csubaggthresh


class CiscoSubscriberSessionMib::Csubsessiontable : public Entity
{
    public:
        Csubsessiontable();
        ~Csubsessiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubsessionentry; //type: CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry> > csubsessionentry_;
        
}; // CiscoSubscriberSessionMib::Csubsessiontable


class CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry : public Entity
{
    public:
        Csubsessionentry();
        ~Csubsessionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf csubsessiontype; //type: SubsessiontypeEnum
        YLeaf csubsessionipaddrassignment; //type: CsubsessionipaddrassignmentEnum
        YLeaf csubsessionstate; //type: SubsessionstateEnum
        YLeaf csubsessionauthenticated; //type: boolean
        YLeaf csubsessionredundancymode; //type: SubsessionredundancymodeEnum
        YLeaf csubsessioncreationtime; //type: string
        YLeaf csubsessionderivedcfg; //type: binary
        YLeaf csubsessionavailableidentities; //type: Subsessionidentities
        YLeaf csubsessionsubscriberlabel; //type: uint32
        YLeaf csubsessionmacaddress; //type: string
        YLeaf csubsessionnativevrf; //type: string
        YLeaf csubsessionnativeipaddrtype; //type: InetaddresstypeEnum
        YLeaf csubsessionnativeipaddr; //type: binary
        YLeaf csubsessionnativeipmask; //type: binary
        YLeaf csubsessiondomainvrf; //type: string
        YLeaf csubsessiondomainipaddrtype; //type: InetaddresstypeEnum
        YLeaf csubsessiondomainipaddr; //type: binary
        YLeaf csubsessiondomainipmask; //type: binary
        YLeaf csubsessionpbhk; //type: string
        YLeaf csubsessionremoteid; //type: string
        YLeaf csubsessioncircuitid; //type: string
        YLeaf csubsessionnasport; //type: string
        YLeaf csubsessiondomain; //type: string
        YLeaf csubsessionusername; //type: string
        YLeaf csubsessionacctsessionid; //type: uint32
        YLeaf csubsessiondnis; //type: string
        YLeaf csubsessionmedia; //type: SubscribermediatypeEnum
        YLeaf csubsessionmlpnegotiated; //type: boolean
        YLeaf csubsessionprotocol; //type: SubscriberprotocoltypeEnum
        YLeaf csubsessiondhcpclass; //type: string
        YLeaf csubsessiontunnelname; //type: string
        YLeaf csubsessionlocationidentifier; //type: string
        YLeaf csubsessionserviceidentifier; //type: string
        YLeaf csubsessionlastchanged; //type: string
        YLeaf csubsessionnativeipaddrtype2; //type: InetaddresstypeEnum
        YLeaf csubsessionnativeipaddr2; //type: binary
        YLeaf csubsessionnativeipmask2; //type: binary
        class CsubsessionipaddrassignmentEnum;

}; // CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry


class CiscoSubscriberSessionMib::Csubsessionbytypetable : public Entity
{
    public:
        Csubsessionbytypetable();
        ~Csubsessionbytypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubsessionbytypeentry; //type: CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry> > csubsessionbytypeentry_;
        
}; // CiscoSubscriberSessionMib::Csubsessionbytypetable


class CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry : public Entity
{
    public:
        Csubsessionbytypeentry();
        ~Csubsessionbytypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubsessionbytype; //type: SubsessiontypeEnum
        YLeaf csubsessionifindex; //type: int32

}; // CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry


class CiscoSubscriberSessionMib::Csubaggstatstable : public Entity
{
    public:
        Csubaggstatstable();
        ~Csubaggstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubaggstatsentry; //type: CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry> > csubaggstatsentry_;
        
}; // CiscoSubscriberSessionMib::Csubaggstatstable


class CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry : public Entity
{
    public:
        Csubaggstatsentry();
        ~Csubaggstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubaggstatspointtype; //type: CsubaggstatspointtypeEnum
        YLeaf csubaggstatspoint; //type: uint32
        YLeaf csubaggstatssessiontype; //type: SubsessiontypeEnum
        YLeaf csubaggstatspendingsessions; //type: uint32
        YLeaf csubaggstatsupsessions; //type: uint32
        YLeaf csubaggstatsauthsessions; //type: uint32
        YLeaf csubaggstatsunauthsessions; //type: uint32
        YLeaf csubaggstatslightweightsessions; //type: uint32
        YLeaf csubaggstatsredsessions; //type: uint32
        YLeaf csubaggstatshighupsessions; //type: uint32
        YLeaf csubaggstatsavgsessionuptime; //type: uint32
        YLeaf csubaggstatsavgsessionrpm; //type: uint32
        YLeaf csubaggstatsavgsessionrph; //type: uint32
        YLeaf csubaggstatsthrottleengagements; //type: uint64
        YLeaf csubaggstatstotalcreatedsessions; //type: uint64
        YLeaf csubaggstatstotalfailedsessions; //type: uint64
        YLeaf csubaggstatstotalupsessions; //type: uint64
        YLeaf csubaggstatstotalauthsessions; //type: uint64
        YLeaf csubaggstatstotaldiscsessions; //type: uint64
        YLeaf csubaggstatstotallightweightsessions; //type: uint64
        YLeaf csubaggstatstotalflowsup; //type: uint64
        YLeaf csubaggstatsdaycreatedsessions; //type: uint32
        YLeaf csubaggstatsdayfailedsessions; //type: uint32
        YLeaf csubaggstatsdayupsessions; //type: uint32
        YLeaf csubaggstatsdayauthsessions; //type: uint32
        YLeaf csubaggstatsdaydiscsessions; //type: uint32
        YLeaf csubaggstatscurrtimeelapsed; //type: uint32
        YLeaf csubaggstatscurrvalidintervals; //type: uint32
        YLeaf csubaggstatscurrinvalidintervals; //type: uint32
        YLeaf csubaggstatscurrflowsup; //type: uint32
        YLeaf csubaggstatscurrcreatedsessions; //type: uint32
        YLeaf csubaggstatscurrfailedsessions; //type: uint32
        YLeaf csubaggstatscurrupsessions; //type: uint32
        YLeaf csubaggstatscurrauthsessions; //type: uint32
        YLeaf csubaggstatscurrdiscsessions; //type: uint32
        YLeaf csubaggstatsdiscontinuitytime; //type: string
        class CsubaggstatspointtypeEnum;

}; // CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry


class CiscoSubscriberSessionMib::Csubaggstatsinttable : public Entity
{
    public:
        Csubaggstatsinttable();
        ~Csubaggstatsinttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubaggstatsintentry; //type: CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry> > csubaggstatsintentry_;
        
}; // CiscoSubscriberSessionMib::Csubaggstatsinttable


class CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry : public Entity
{
    public:
        Csubaggstatsintentry();
        ~Csubaggstatsintentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubaggstatspointtype; //type: CsubaggstatspointtypeEnum
        //type: uint32 (refers to CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::csubaggstatspoint)
        YLeaf csubaggstatspoint;
        YLeaf csubaggstatssessiontype; //type: SubsessiontypeEnum
        YLeaf csubaggstatsintnumber; //type: uint32
        YLeaf csubaggstatsintvalid; //type: boolean
        YLeaf csubaggstatsintcreatedsessions; //type: uint32
        YLeaf csubaggstatsintfailedsessions; //type: uint32
        YLeaf csubaggstatsintupsessions; //type: uint32
        YLeaf csubaggstatsintauthsessions; //type: uint32
        YLeaf csubaggstatsintdiscsessions; //type: uint32

}; // CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry


class CiscoSubscriberSessionMib::Csubaggstatsthreshtable : public Entity
{
    public:
        Csubaggstatsthreshtable();
        ~Csubaggstatsthreshtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubaggstatsthreshentry; //type: CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry> > csubaggstatsthreshentry_;
        
}; // CiscoSubscriberSessionMib::Csubaggstatsthreshtable


class CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry : public Entity
{
    public:
        Csubaggstatsthreshentry();
        ~Csubaggstatsthreshentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubsessionrisingthresh; //type: uint32
        YLeaf csubsessionfallingthresh; //type: uint32
        YLeaf csubsessiondeltapercentfallingthresh; //type: uint32
        YLeaf csubsessionthreshevalinterval; //type: uint32

}; // CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry


class CiscoSubscriberSessionMib::Csubjobtable : public Entity
{
    public:
        Csubjobtable();
        ~Csubjobtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubjobentry; //type: CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry> > csubjobentry_;
        
}; // CiscoSubscriberSessionMib::Csubjobtable


class CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry : public Entity
{
    public:
        Csubjobentry();
        ~Csubjobentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubjobid; //type: uint32
        YLeaf csubjobstatus; //type: RowstatusEnum
        YLeaf csubjobstorage; //type: StoragetypeEnum
        YLeaf csubjobtype; //type: CsubjobtypeEnum
        YLeaf csubjobcontrol; //type: CsubjobcontrolEnum
        YLeaf csubjobstate; //type: CsubjobstateEnum
        YLeaf csubjobstartedtime; //type: uint32
        YLeaf csubjobfinishedtime; //type: uint32
        YLeaf csubjobfinishedreason; //type: CsubjobfinishedreasonEnum
        class CsubjobtypeEnum;
        class CsubjobcontrolEnum;
        class CsubjobstateEnum;
        class CsubjobfinishedreasonEnum;

}; // CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry


class CiscoSubscriberSessionMib::Csubjobmatchparamstable : public Entity
{
    public:
        Csubjobmatchparamstable();
        ~Csubjobmatchparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubjobmatchparamsentry; //type: CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry> > csubjobmatchparamsentry_;
        
}; // CiscoSubscriberSessionMib::Csubjobmatchparamstable


class CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry : public Entity
{
    public:
        Csubjobmatchparamsentry();
        ~Csubjobmatchparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::csubjobid)
        YLeaf csubjobid;
        YLeaf csubjobmatchidentities; //type: Subsessionidentities
        YLeaf csubjobmatchotherparams; //type: Csubjobmatchotherparams
        YLeaf csubjobmatchsubscriberlabel; //type: uint32
        YLeaf csubjobmatchmacaddress; //type: string
        YLeaf csubjobmatchnativevrf; //type: string
        YLeaf csubjobmatchnativeipaddrtype; //type: InetaddresstypeEnum
        YLeaf csubjobmatchnativeipaddr; //type: binary
        YLeaf csubjobmatchnativeipmask; //type: binary
        YLeaf csubjobmatchdomainvrf; //type: string
        YLeaf csubjobmatchdomainipaddrtype; //type: InetaddresstypeEnum
        YLeaf csubjobmatchdomainipaddr; //type: binary
        YLeaf csubjobmatchdomainipmask; //type: binary
        YLeaf csubjobmatchpbhk; //type: string
        YLeaf csubjobmatchremoteid; //type: string
        YLeaf csubjobmatchcircuitid; //type: string
        YLeaf csubjobmatchnasport; //type: string
        YLeaf csubjobmatchdomain; //type: string
        YLeaf csubjobmatchusername; //type: string
        YLeaf csubjobmatchacctsessionid; //type: uint32
        YLeaf csubjobmatchdnis; //type: string
        YLeaf csubjobmatchmedia; //type: SubscribermediatypeEnum
        YLeaf csubjobmatchmlpnegotiated; //type: boolean
        YLeaf csubjobmatchprotocol; //type: SubscriberprotocoltypeEnum
        YLeaf csubjobmatchservicename; //type: string
        YLeaf csubjobmatchdhcpclass; //type: string
        YLeaf csubjobmatchtunnelname; //type: string
        YLeaf csubjobmatchdanglingduration; //type: uint32
        YLeaf csubjobmatchstate; //type: SubsessionstateEnum
        YLeaf csubjobmatchauthenticated; //type: boolean
        YLeaf csubjobmatchredundancymode; //type: SubsessionredundancymodeEnum

}; // CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry


class CiscoSubscriberSessionMib::Csubjobqueryparamstable : public Entity
{
    public:
        Csubjobqueryparamstable();
        ~Csubjobqueryparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubjobqueryparamsentry; //type: CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry> > csubjobqueryparamsentry_;
        
}; // CiscoSubscriberSessionMib::Csubjobqueryparamstable


class CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry : public Entity
{
    public:
        Csubjobqueryparamsentry();
        ~Csubjobqueryparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::csubjobid)
        YLeaf csubjobid;
        YLeaf csubjobquerysortkey1; //type: SubsessionidentityEnum
        YLeaf csubjobquerysortkey2; //type: SubsessionidentityEnum
        YLeaf csubjobquerysortkey3; //type: SubsessionidentityEnum
        YLeaf csubjobqueryresultingreportsize; //type: uint32

}; // CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry


class CiscoSubscriberSessionMib::Csubjobqueuetable : public Entity
{
    public:
        Csubjobqueuetable();
        ~Csubjobqueuetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubjobqueueentry; //type: CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry> > csubjobqueueentry_;
        
}; // CiscoSubscriberSessionMib::Csubjobqueuetable


class CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry : public Entity
{
    public:
        Csubjobqueueentry();
        ~Csubjobqueueentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csubjobqueuenumber; //type: uint32
        YLeaf csubjobqueuejobid; //type: uint32

}; // CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry


class CiscoSubscriberSessionMib::Csubjobreporttable : public Entity
{
    public:
        Csubjobreporttable();
        ~Csubjobreporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csubjobreportentry; //type: CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry

        std::vector<std::shared_ptr<CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry> > csubjobreportentry_;
        
}; // CiscoSubscriberSessionMib::Csubjobreporttable


class CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry : public Entity
{
    public:
        Csubjobreportentry();
        ~Csubjobreportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SUBSCRIBER_SESSION_MIB::CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::csubjobid)
        YLeaf csubjobid;
        YLeaf csubjobreportid; //type: uint32
        YLeaf csubjobreportsession; //type: int32

}; // CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry

class CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf localPool;
        static const Enum::YLeaf dhcpv4;
        static const Enum::YLeaf dhcpv6;
        static const Enum::YLeaf userProfileIpAddr;
        static const Enum::YLeaf userProfileIpSubnet;
        static const Enum::YLeaf userProfileNamedPool;

};

class CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::CsubaggstatspointtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf physical;
        static const Enum::YLeaf interface;

};

class CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf noop;
        static const Enum::YLeaf query;
        static const Enum::YLeaf clear;

};

class CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobcontrolEnum : public Enum
{
    public:
        static const Enum::YLeaf noop;
        static const Enum::YLeaf start;
        static const Enum::YLeaf abort;
        static const Enum::YLeaf release;

};

class CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobstateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf pending;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf finished;

};

class CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf other;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf aborted;
        static const Enum::YLeaf insufficientResources;
        static const Enum::YLeaf error;

};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_MIB_ */

