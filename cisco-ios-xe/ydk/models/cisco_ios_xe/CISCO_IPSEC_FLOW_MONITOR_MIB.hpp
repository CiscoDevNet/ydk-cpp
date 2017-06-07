#ifndef _CISCO_IPSEC_FLOW_MONITOR_MIB_
#define _CISCO_IPSEC_FLOW_MONITOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IPSEC_FLOW_MONITOR_MIB {

class CiscoIpsecFlowMonitorMib : public Entity
{
    public:
        CiscoIpsecFlowMonitorMib();
        ~CiscoIpsecFlowMonitorMib();

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

        class Cipseclevels; //type: CiscoIpsecFlowMonitorMib::Cipseclevels
        class Cikeglobalstats; //type: CiscoIpsecFlowMonitorMib::Cikeglobalstats
        class Cipsecglobalstats; //type: CiscoIpsecFlowMonitorMib::Cipsecglobalstats
        class Cipsechistglobalcntl; //type: CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl
        class Cipsecfailglobalcntl; //type: CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl
        class Cipsectrapcntl; //type: CiscoIpsecFlowMonitorMib::Cipsectrapcntl
        class Cikepeertable; //type: CiscoIpsecFlowMonitorMib::Cikepeertable
        class Ciketunneltable; //type: CiscoIpsecFlowMonitorMib::Ciketunneltable
        class Cikepeercorrtable; //type: CiscoIpsecFlowMonitorMib::Cikepeercorrtable
        class Cikephase1Gwstatstable; //type: CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable
        class Cipsectunneltable; //type: CiscoIpsecFlowMonitorMib::Cipsectunneltable
        class Cipsecendpttable; //type: CiscoIpsecFlowMonitorMib::Cipsecendpttable
        class Cipsecspitable; //type: CiscoIpsecFlowMonitorMib::Cipsecspitable
        class Cipsecphase2Gwstatstable; //type: CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable
        class Ciketunnelhisttable; //type: CiscoIpsecFlowMonitorMib::Ciketunnelhisttable
        class Cipsectunnelhisttable; //type: CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable
        class Cipsecendpthisttable; //type: CiscoIpsecFlowMonitorMib::Cipsecendpthisttable
        class Cikefailtable; //type: CiscoIpsecFlowMonitorMib::Cikefailtable
        class Cipsecfailtable; //type: CiscoIpsecFlowMonitorMib::Cipsecfailtable

        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikefailtable> cikefailtable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikeglobalstats> cikeglobalstats;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikepeercorrtable> cikepeercorrtable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikepeertable> cikepeertable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable> cikephase1gwstatstable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Ciketunnelhisttable> ciketunnelhisttable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Ciketunneltable> ciketunneltable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecendpthisttable> cipsecendpthisttable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecendpttable> cipsecendpttable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl> cipsecfailglobalcntl;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecfailtable> cipsecfailtable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecglobalstats> cipsecglobalstats;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl> cipsechistglobalcntl;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipseclevels> cipseclevels;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable> cipsecphase2gwstatstable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecspitable> cipsecspitable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectrapcntl> cipsectrapcntl;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable> cipsectunnelhisttable;
        std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunneltable> cipsectunneltable;
        
}; // CiscoIpsecFlowMonitorMib


class CiscoIpsecFlowMonitorMib::Cipseclevels : public Entity
{
    public:
        Cipseclevels();
        ~Cipseclevels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsecmiblevel; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cipseclevels


class CiscoIpsecFlowMonitorMib::Cikeglobalstats : public Entity
{
    public:
        Cikeglobalstats();
        ~Cikeglobalstats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cikeglobalactivetunnels; //type: uint32
        YLeaf cikeglobalprevioustunnels; //type: uint32
        YLeaf cikeglobalinoctets; //type: uint32
        YLeaf cikeglobalinpkts; //type: uint32
        YLeaf cikeglobalindroppkts; //type: uint32
        YLeaf cikeglobalinnotifys; //type: uint32
        YLeaf cikeglobalinp2exchgs; //type: uint32
        YLeaf cikeglobalinp2exchginvalids; //type: uint32
        YLeaf cikeglobalinp2exchgrejects; //type: uint32
        YLeaf cikeglobalinp2sadelrequests; //type: uint32
        YLeaf cikeglobaloutoctets; //type: uint32
        YLeaf cikeglobaloutpkts; //type: uint32
        YLeaf cikeglobaloutdroppkts; //type: uint32
        YLeaf cikeglobaloutnotifys; //type: uint32
        YLeaf cikeglobaloutp2exchgs; //type: uint32
        YLeaf cikeglobaloutp2exchginvalids; //type: uint32
        YLeaf cikeglobaloutp2exchgrejects; //type: uint32
        YLeaf cikeglobaloutp2sadelrequests; //type: uint32
        YLeaf cikeglobalinittunnels; //type: uint32
        YLeaf cikeglobalinittunnelfails; //type: uint32
        YLeaf cikeglobalresptunnelfails; //type: uint32
        YLeaf cikeglobalsyscapfails; //type: uint32
        YLeaf cikeglobalauthfails; //type: uint32
        YLeaf cikeglobaldecryptfails; //type: uint32
        YLeaf cikeglobalhashvalidfails; //type: uint32
        YLeaf cikeglobalnosafails; //type: uint32

}; // CiscoIpsecFlowMonitorMib::Cikeglobalstats


class CiscoIpsecFlowMonitorMib::Cipsecglobalstats : public Entity
{
    public:
        Cipsecglobalstats();
        ~Cipsecglobalstats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsecglobalactivetunnels; //type: uint32
        YLeaf cipsecglobalprevioustunnels; //type: uint32
        YLeaf cipsecglobalinoctets; //type: uint32
        YLeaf cipsecglobalhcinoctets; //type: uint64
        YLeaf cipsecglobalinoctwraps; //type: uint32
        YLeaf cipsecglobalindecompoctets; //type: uint32
        YLeaf cipsecglobalhcindecompoctets; //type: uint64
        YLeaf cipsecglobalindecompoctwraps; //type: uint32
        YLeaf cipsecglobalinpkts; //type: uint32
        YLeaf cipsecglobalindrops; //type: uint32
        YLeaf cipsecglobalinreplaydrops; //type: uint32
        YLeaf cipsecglobalinauths; //type: uint32
        YLeaf cipsecglobalinauthfails; //type: uint32
        YLeaf cipsecglobalindecrypts; //type: uint32
        YLeaf cipsecglobalindecryptfails; //type: uint32
        YLeaf cipsecglobaloutoctets; //type: uint32
        YLeaf cipsecglobalhcoutoctets; //type: uint64
        YLeaf cipsecglobaloutoctwraps; //type: uint32
        YLeaf cipsecglobaloutuncompoctets; //type: uint32
        YLeaf cipsecglobalhcoutuncompoctets; //type: uint64
        YLeaf cipsecglobaloutuncompoctwraps; //type: uint32
        YLeaf cipsecglobaloutpkts; //type: uint32
        YLeaf cipsecglobaloutdrops; //type: uint32
        YLeaf cipsecglobaloutauths; //type: uint32
        YLeaf cipsecglobaloutauthfails; //type: uint32
        YLeaf cipsecglobaloutencrypts; //type: uint32
        YLeaf cipsecglobaloutencryptfails; //type: uint32
        YLeaf cipsecglobalprotocolusefails; //type: uint32
        YLeaf cipsecglobalnosafails; //type: uint32
        YLeaf cipsecglobalsyscapfails; //type: uint32

}; // CiscoIpsecFlowMonitorMib::Cipsecglobalstats


class CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl : public Entity
{
    public:
        Cipsechistglobalcntl();
        ~Cipsechistglobalcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsechisttablesize; //type: int32
        YLeaf cipsechistcheckpoint; //type: CipsechistcheckpointEnum
        class CipsechistcheckpointEnum;

}; // CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl


class CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl : public Entity
{
    public:
        Cipsecfailglobalcntl();
        ~Cipsecfailglobalcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsecfailtablesize; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl


class CiscoIpsecFlowMonitorMib::Cipsectrapcntl : public Entity
{
    public:
        Cipsectrapcntl();
        ~Cipsectrapcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsectrapcntliketunnelstart; //type: TrapstatusEnum
        YLeaf cipsectrapcntliketunnelstop; //type: TrapstatusEnum
        YLeaf cipsectrapcntlikesysfailure; //type: TrapstatusEnum
        YLeaf cipsectrapcntlikecertcrlfailure; //type: TrapstatusEnum
        YLeaf cipsectrapcntlikeprotocolfail; //type: TrapstatusEnum
        YLeaf cipsectrapcntlikenosa; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsectunnelstart; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsectunnelstop; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsecsysfailure; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsecsetupfailure; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsecearlytunterm; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsecprotocolfail; //type: TrapstatusEnum
        YLeaf cipsectrapcntlipsecnosa; //type: TrapstatusEnum

}; // CiscoIpsecFlowMonitorMib::Cipsectrapcntl


class CiscoIpsecFlowMonitorMib::Cikepeertable : public Entity
{
    public:
        Cikepeertable();
        ~Cikepeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cikepeerentry; //type: CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry> > cikepeerentry;
        
}; // CiscoIpsecFlowMonitorMib::Cikepeertable


class CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry : public Entity
{
    public:
        Cikepeerentry();
        ~Cikepeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cikepeerlocaltype; //type: IkepeertypeEnum
        YLeaf cikepeerlocalvalue; //type: string
        YLeaf cikepeerremotetype; //type: IkepeertypeEnum
        YLeaf cikepeerremotevalue; //type: string
        YLeaf cikepeerintindex; //type: int32
        YLeaf cikepeerlocaladdr; //type: binary
        YLeaf cikepeerremoteaddr; //type: binary
        YLeaf cikepeeractivetime; //type: int32
        YLeaf cikepeeractivetunnelindex; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry


class CiscoIpsecFlowMonitorMib::Ciketunneltable : public Entity
{
    public:
        Ciketunneltable();
        ~Ciketunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciketunnelentry; //type: CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry> > ciketunnelentry;
        
}; // CiscoIpsecFlowMonitorMib::Ciketunneltable


class CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry : public Entity
{
    public:
        Ciketunnelentry();
        ~Ciketunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciketunindex; //type: int32
        YLeaf ciketunlocaltype; //type: IkepeertypeEnum
        YLeaf ciketunlocalvalue; //type: string
        YLeaf ciketunlocaladdr; //type: binary
        YLeaf ciketunlocalname; //type: string
        YLeaf ciketunremotetype; //type: IkepeertypeEnum
        YLeaf ciketunremotevalue; //type: string
        YLeaf ciketunremoteaddr; //type: binary
        YLeaf ciketunremotename; //type: string
        YLeaf ciketunnegomode; //type: IkenegomodeEnum
        YLeaf ciketundiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf ciketunencryptalgo; //type: EncryptalgoEnum
        YLeaf ciketunhashalgo; //type: IkehashalgoEnum
        YLeaf ciketunauthmethod; //type: IkeauthmethodEnum
        YLeaf ciketunlifetime; //type: int32
        YLeaf ciketunactivetime; //type: int32
        YLeaf ciketunsarefreshthreshold; //type: int32
        YLeaf ciketuntotalrefreshes; //type: uint32
        YLeaf ciketuninoctets; //type: uint32
        YLeaf ciketuninpkts; //type: uint32
        YLeaf ciketunindroppkts; //type: uint32
        YLeaf ciketuninnotifys; //type: uint32
        YLeaf ciketuninp2exchgs; //type: uint32
        YLeaf ciketuninp2exchginvalids; //type: uint32
        YLeaf ciketuninp2exchgrejects; //type: uint32
        YLeaf ciketuninp2sadelrequests; //type: uint32
        YLeaf ciketunoutoctets; //type: uint32
        YLeaf ciketunoutpkts; //type: uint32
        YLeaf ciketunoutdroppkts; //type: uint32
        YLeaf ciketunoutnotifys; //type: uint32
        YLeaf ciketunoutp2exchgs; //type: uint32
        YLeaf ciketunoutp2exchginvalids; //type: uint32
        YLeaf ciketunoutp2exchgrejects; //type: uint32
        YLeaf ciketunoutp2sadelrequests; //type: uint32
        YLeaf ciketunstatus; //type: TunnelstatusEnum

}; // CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry


class CiscoIpsecFlowMonitorMib::Cikepeercorrtable : public Entity
{
    public:
        Cikepeercorrtable();
        ~Cikepeercorrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cikepeercorrentry; //type: CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry> > cikepeercorrentry;
        
}; // CiscoIpsecFlowMonitorMib::Cikepeercorrtable


class CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry : public Entity
{
    public:
        Cikepeercorrentry();
        ~Cikepeercorrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cikepeercorrlocaltype; //type: IkepeertypeEnum
        YLeaf cikepeercorrlocalvalue; //type: string
        YLeaf cikepeercorrremotetype; //type: IkepeertypeEnum
        YLeaf cikepeercorrremotevalue; //type: string
        YLeaf cikepeercorrintindex; //type: int32
        YLeaf cikepeercorrseqnum; //type: int32
        YLeaf cikepeercorripsectunindex; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry


class CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable : public Entity
{
    public:
        Cikephase1Gwstatstable();
        ~Cikephase1Gwstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cikephase1Gwstatsentry; //type: CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry> > cikephase1gwstatsentry;
        
}; // CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable


class CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry : public Entity
{
    public:
        Cikephase1Gwstatsentry();
        ~Cikephase1Gwstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cikephase1gwactivetunnels; //type: uint32
        YLeaf cikephase1gwprevioustunnels; //type: uint32
        YLeaf cikephase1gwinoctets; //type: uint32
        YLeaf cikephase1gwinpkts; //type: uint32
        YLeaf cikephase1gwindroppkts; //type: uint32
        YLeaf cikephase1gwinnotifys; //type: uint32
        YLeaf cikephase1gwinp2exchgs; //type: uint32
        YLeaf cikephase1gwinp2exchginvalids; //type: uint32
        YLeaf cikephase1gwinp2exchgrejects; //type: uint32
        YLeaf cikephase1gwinp2sadelrequests; //type: uint32
        YLeaf cikephase1gwoutoctets; //type: uint32
        YLeaf cikephase1gwoutpkts; //type: uint32
        YLeaf cikephase1gwoutdroppkts; //type: uint32
        YLeaf cikephase1gwoutnotifys; //type: uint32
        YLeaf cikephase1gwoutp2exchgs; //type: uint32
        YLeaf cikephase1gwoutp2exchginvalids; //type: uint32
        YLeaf cikephase1gwoutp2exchgrejects; //type: uint32
        YLeaf cikephase1gwoutp2sadelrequests; //type: uint32
        YLeaf cikephase1gwinittunnels; //type: uint32
        YLeaf cikephase1gwinittunnelfails; //type: uint32
        YLeaf cikephase1gwresptunnelfails; //type: uint32
        YLeaf cikephase1gwsyscapfails; //type: uint32
        YLeaf cikephase1gwauthfails; //type: uint32
        YLeaf cikephase1gwdecryptfails; //type: uint32
        YLeaf cikephase1gwhashvalidfails; //type: uint32
        YLeaf cikephase1gwnosafails; //type: uint32

}; // CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry


class CiscoIpsecFlowMonitorMib::Cipsectunneltable : public Entity
{
    public:
        Cipsectunneltable();
        ~Cipsectunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsectunnelentry; //type: CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry> > cipsectunnelentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsectunneltable


class CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry : public Entity
{
    public:
        Cipsectunnelentry();
        ~Cipsectunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsectunindex; //type: int32
        YLeaf cipsectuniketunnelindex; //type: int32
        YLeaf cipsectuniketunnelalive; //type: boolean
        YLeaf cipsectunlocaladdr; //type: binary
        YLeaf cipsectunremoteaddr; //type: binary
        YLeaf cipsectunkeytype; //type: KeytypeEnum
        YLeaf cipsectunencapmode; //type: EncapmodeEnum
        YLeaf cipsectunlifesize; //type: int32
        YLeaf cipsectunlifetime; //type: int32
        YLeaf cipsectunactivetime; //type: int32
        YLeaf cipsectunsalifesizethreshold; //type: int32
        YLeaf cipsectunsalifetimethreshold; //type: int32
        YLeaf cipsectuntotalrefreshes; //type: uint32
        YLeaf cipsectunexpiredsainstances; //type: uint32
        YLeaf cipsectuncurrentsainstances; //type: uint32
        YLeaf cipsectuninsadiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf cipsectuninsaencryptalgo; //type: EncryptalgoEnum
        YLeaf cipsectuninsaahauthalgo; //type: AuthalgoEnum
        YLeaf cipsectuninsaespauthalgo; //type: AuthalgoEnum
        YLeaf cipsectuninsadecompalgo; //type: CompalgoEnum
        YLeaf cipsectunoutsadiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf cipsectunoutsaencryptalgo; //type: EncryptalgoEnum
        YLeaf cipsectunoutsaahauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunoutsaespauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunoutsacompalgo; //type: CompalgoEnum
        YLeaf cipsectuninoctets; //type: uint32
        YLeaf cipsectunhcinoctets; //type: uint64
        YLeaf cipsectuninoctwraps; //type: uint32
        YLeaf cipsectunindecompoctets; //type: uint32
        YLeaf cipsectunhcindecompoctets; //type: uint64
        YLeaf cipsectunindecompoctwraps; //type: uint32
        YLeaf cipsectuninpkts; //type: uint32
        YLeaf cipsectunindroppkts; //type: uint32
        YLeaf cipsectuninreplaydroppkts; //type: uint32
        YLeaf cipsectuninauths; //type: uint32
        YLeaf cipsectuninauthfails; //type: uint32
        YLeaf cipsectunindecrypts; //type: uint32
        YLeaf cipsectunindecryptfails; //type: uint32
        YLeaf cipsectunoutoctets; //type: uint32
        YLeaf cipsectunhcoutoctets; //type: uint64
        YLeaf cipsectunoutoctwraps; //type: uint32
        YLeaf cipsectunoutuncompoctets; //type: uint32
        YLeaf cipsectunhcoutuncompoctets; //type: uint64
        YLeaf cipsectunoutuncompoctwraps; //type: uint32
        YLeaf cipsectunoutpkts; //type: uint32
        YLeaf cipsectunoutdroppkts; //type: uint32
        YLeaf cipsectunoutauths; //type: uint32
        YLeaf cipsectunoutauthfails; //type: uint32
        YLeaf cipsectunoutencrypts; //type: uint32
        YLeaf cipsectunoutencryptfails; //type: uint32
        YLeaf cipsectunstatus; //type: TunnelstatusEnum

}; // CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry


class CiscoIpsecFlowMonitorMib::Cipsecendpttable : public Entity
{
    public:
        Cipsecendpttable();
        ~Cipsecendpttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsecendptentry; //type: CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry> > cipsecendptentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsecendpttable


class CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry : public Entity
{
    public:
        Cipsecendptentry();
        ~Cipsecendptentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::cipsectunindex)
        YLeaf cipsectunindex;
        YLeaf cipsecendptindex; //type: int32
        YLeaf cipsecendptlocalname; //type: string
        YLeaf cipsecendptlocaltype; //type: EndpttypeEnum
        YLeaf cipsecendptlocaladdr1; //type: binary
        YLeaf cipsecendptlocaladdr2; //type: binary
        YLeaf cipsecendptlocalprotocol; //type: int32
        YLeaf cipsecendptlocalport; //type: int32
        YLeaf cipsecendptremotename; //type: string
        YLeaf cipsecendptremotetype; //type: EndpttypeEnum
        YLeaf cipsecendptremoteaddr1; //type: binary
        YLeaf cipsecendptremoteaddr2; //type: binary
        YLeaf cipsecendptremoteprotocol; //type: int32
        YLeaf cipsecendptremoteport; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry


class CiscoIpsecFlowMonitorMib::Cipsecspitable : public Entity
{
    public:
        Cipsecspitable();
        ~Cipsecspitable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsecspientry; //type: CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry> > cipsecspientry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsecspitable


class CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry : public Entity
{
    public:
        Cipsecspientry();
        ~Cipsecspientry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::cipsectunindex)
        YLeaf cipsectunindex;
        YLeaf cipsecspiindex; //type: int32
        YLeaf cipsecspidirection; //type: CipsecspidirectionEnum
        YLeaf cipsecspivalue; //type: uint32
        YLeaf cipsecspiprotocol; //type: CipsecspiprotocolEnum
        YLeaf cipsecspistatus; //type: CipsecspistatusEnum
        class CipsecspidirectionEnum;
        class CipsecspiprotocolEnum;
        class CipsecspistatusEnum;

}; // CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry


class CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable : public Entity
{
    public:
        Cipsecphase2Gwstatstable();
        ~Cipsecphase2Gwstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsecphase2Gwstatsentry; //type: CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry> > cipsecphase2gwstatsentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable


class CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry : public Entity
{
    public:
        Cipsecphase2Gwstatsentry();
        ~Cipsecphase2Gwstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_MEDIA_GATEWAY_MIB::CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::cmgwindex)
        YLeaf cmgwindex;
        YLeaf cipsecphase2gwactivetunnels; //type: uint32
        YLeaf cipsecphase2gwprevioustunnels; //type: uint32
        YLeaf cipsecphase2gwinoctets; //type: uint32
        YLeaf cipsecphase2gwinoctwraps; //type: uint32
        YLeaf cipsecphase2gwindecompoctets; //type: uint32
        YLeaf cipsecphase2gwindecompoctwraps; //type: uint32
        YLeaf cipsecphase2gwinpkts; //type: uint32
        YLeaf cipsecphase2gwindrops; //type: uint32
        YLeaf cipsecphase2gwinreplaydrops; //type: uint32
        YLeaf cipsecphase2gwinauths; //type: uint32
        YLeaf cipsecphase2gwinauthfails; //type: uint32
        YLeaf cipsecphase2gwindecrypts; //type: uint32
        YLeaf cipsecphase2gwindecryptfails; //type: uint32
        YLeaf cipsecphase2gwoutoctets; //type: uint32
        YLeaf cipsecphase2gwoutoctwraps; //type: uint32
        YLeaf cipsecphase2gwoutuncompoctets; //type: uint32
        YLeaf cipsecphase2gwoutuncompoctwraps; //type: uint32
        YLeaf cipsecphase2gwoutpkts; //type: uint32
        YLeaf cipsecphase2gwoutdrops; //type: uint32
        YLeaf cipsecphase2gwoutauths; //type: uint32
        YLeaf cipsecphase2gwoutauthfails; //type: uint32
        YLeaf cipsecphase2gwoutencrypts; //type: uint32
        YLeaf cipsecphase2gwoutencryptfails; //type: uint32
        YLeaf cipsecphase2gwprotocolusefails; //type: uint32
        YLeaf cipsecphase2gwnosafails; //type: uint32
        YLeaf cipsecphase2gwsyscapfails; //type: uint32

}; // CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry


class CiscoIpsecFlowMonitorMib::Ciketunnelhisttable : public Entity
{
    public:
        Ciketunnelhisttable();
        ~Ciketunnelhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciketunnelhistentry; //type: CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry> > ciketunnelhistentry;
        
}; // CiscoIpsecFlowMonitorMib::Ciketunnelhisttable


class CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry : public Entity
{
    public:
        Ciketunnelhistentry();
        ~Ciketunnelhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciketunhistindex; //type: int32
        YLeaf ciketunhisttermreason; //type: CiketunhisttermreasonEnum
        YLeaf ciketunhistactiveindex; //type: int32
        YLeaf ciketunhistpeerlocaltype; //type: IkepeertypeEnum
        YLeaf ciketunhistpeerlocalvalue; //type: string
        YLeaf ciketunhistpeerintindex; //type: int32
        YLeaf ciketunhistpeerremotetype; //type: IkepeertypeEnum
        YLeaf ciketunhistpeerremotevalue; //type: string
        YLeaf ciketunhistlocaladdr; //type: binary
        YLeaf ciketunhistlocalname; //type: string
        YLeaf ciketunhistremoteaddr; //type: binary
        YLeaf ciketunhistremotename; //type: string
        YLeaf ciketunhistnegomode; //type: IkenegomodeEnum
        YLeaf ciketunhistdiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf ciketunhistencryptalgo; //type: EncryptalgoEnum
        YLeaf ciketunhisthashalgo; //type: IkehashalgoEnum
        YLeaf ciketunhistauthmethod; //type: IkeauthmethodEnum
        YLeaf ciketunhistlifetime; //type: int32
        YLeaf ciketunhiststarttime; //type: uint32
        YLeaf ciketunhistactivetime; //type: int32
        YLeaf ciketunhisttotalrefreshes; //type: uint32
        YLeaf ciketunhisttotalsas; //type: uint32
        YLeaf ciketunhistinoctets; //type: uint32
        YLeaf ciketunhistinpkts; //type: uint32
        YLeaf ciketunhistindroppkts; //type: uint32
        YLeaf ciketunhistinnotifys; //type: uint32
        YLeaf ciketunhistinp2exchgs; //type: uint32
        YLeaf ciketunhistinp2exchginvalids; //type: uint32
        YLeaf ciketunhistinp2exchgrejects; //type: uint32
        YLeaf ciketunhistinp2sadelrequests; //type: uint32
        YLeaf ciketunhistoutoctets; //type: uint32
        YLeaf ciketunhistoutpkts; //type: uint32
        YLeaf ciketunhistoutdroppkts; //type: uint32
        YLeaf ciketunhistoutnotifys; //type: uint32
        YLeaf ciketunhistoutp2exchgs; //type: uint32
        YLeaf ciketunhistoutp2exchginvalids; //type: uint32
        YLeaf ciketunhistoutp2exchgrejects; //type: uint32
        YLeaf ciketunhistoutp2sadelrequests; //type: uint32
        class CiketunhisttermreasonEnum;

}; // CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry


class CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable : public Entity
{
    public:
        Cipsectunnelhisttable();
        ~Cipsectunnelhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsectunnelhistentry; //type: CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry> > cipsectunnelhistentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable


class CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry : public Entity
{
    public:
        Cipsectunnelhistentry();
        ~Cipsectunnelhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsectunhistindex; //type: int32
        YLeaf cipsectunhisttermreason; //type: CipsectunhisttermreasonEnum
        YLeaf cipsectunhistactiveindex; //type: int32
        YLeaf cipsectunhistiketunnelindex; //type: int32
        YLeaf cipsectunhistlocaladdr; //type: binary
        YLeaf cipsectunhistremoteaddr; //type: binary
        YLeaf cipsectunhistkeytype; //type: KeytypeEnum
        YLeaf cipsectunhistencapmode; //type: EncapmodeEnum
        YLeaf cipsectunhistlifesize; //type: int32
        YLeaf cipsectunhistlifetime; //type: int32
        YLeaf cipsectunhiststarttime; //type: uint32
        YLeaf cipsectunhistactivetime; //type: int32
        YLeaf cipsectunhisttotalrefreshes; //type: uint32
        YLeaf cipsectunhisttotalsas; //type: uint32
        YLeaf cipsectunhistinsadiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf cipsectunhistinsaencryptalgo; //type: EncryptalgoEnum
        YLeaf cipsectunhistinsaahauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunhistinsaespauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunhistinsadecompalgo; //type: CompalgoEnum
        YLeaf cipsectunhistoutsadiffhellmangrp; //type: DiffhellmangrpEnum
        YLeaf cipsectunhistoutsaencryptalgo; //type: EncryptalgoEnum
        YLeaf cipsectunhistoutsaahauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunhistoutsaespauthalgo; //type: AuthalgoEnum
        YLeaf cipsectunhistoutsacompalgo; //type: CompalgoEnum
        YLeaf cipsectunhistinoctets; //type: uint32
        YLeaf cipsectunhisthcinoctets; //type: uint64
        YLeaf cipsectunhistinoctwraps; //type: uint32
        YLeaf cipsectunhistindecompoctets; //type: uint32
        YLeaf cipsectunhisthcindecompoctets; //type: uint64
        YLeaf cipsectunhistindecompoctwraps; //type: uint32
        YLeaf cipsectunhistinpkts; //type: uint32
        YLeaf cipsectunhistindroppkts; //type: uint32
        YLeaf cipsectunhistinreplaydroppkts; //type: uint32
        YLeaf cipsectunhistinauths; //type: uint32
        YLeaf cipsectunhistinauthfails; //type: uint32
        YLeaf cipsectunhistindecrypts; //type: uint32
        YLeaf cipsectunhistindecryptfails; //type: uint32
        YLeaf cipsectunhistoutoctets; //type: uint32
        YLeaf cipsectunhisthcoutoctets; //type: uint64
        YLeaf cipsectunhistoutoctwraps; //type: uint32
        YLeaf cipsectunhistoutuncompoctets; //type: uint32
        YLeaf cipsectunhisthcoutuncompoctets; //type: uint64
        YLeaf cipsectunhistoutuncompoctwraps; //type: uint32
        YLeaf cipsectunhistoutpkts; //type: uint32
        YLeaf cipsectunhistoutdroppkts; //type: uint32
        YLeaf cipsectunhistoutauths; //type: uint32
        YLeaf cipsectunhistoutauthfails; //type: uint32
        YLeaf cipsectunhistoutencrypts; //type: uint32
        YLeaf cipsectunhistoutencryptfails; //type: uint32
        class CipsectunhisttermreasonEnum;

}; // CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry


class CiscoIpsecFlowMonitorMib::Cipsecendpthisttable : public Entity
{
    public:
        Cipsecendpthisttable();
        ~Cipsecendpthisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsecendpthistentry; //type: CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry> > cipsecendpthistentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsecendpthisttable


class CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry : public Entity
{
    public:
        Cipsecendpthistentry();
        ~Cipsecendpthistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsecendpthistindex; //type: int32
        YLeaf cipsecendpthisttunindex; //type: int32
        YLeaf cipsecendpthistactiveindex; //type: int32
        YLeaf cipsecendpthistlocalname; //type: string
        YLeaf cipsecendpthistlocaltype; //type: EndpttypeEnum
        YLeaf cipsecendpthistlocaladdr1; //type: binary
        YLeaf cipsecendpthistlocaladdr2; //type: binary
        YLeaf cipsecendpthistlocalprotocol; //type: int32
        YLeaf cipsecendpthistlocalport; //type: int32
        YLeaf cipsecendpthistremotename; //type: string
        YLeaf cipsecendpthistremotetype; //type: EndpttypeEnum
        YLeaf cipsecendpthistremoteaddr1; //type: binary
        YLeaf cipsecendpthistremoteaddr2; //type: binary
        YLeaf cipsecendpthistremoteprotocol; //type: int32
        YLeaf cipsecendpthistremoteport; //type: int32

}; // CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry


class CiscoIpsecFlowMonitorMib::Cikefailtable : public Entity
{
    public:
        Cikefailtable();
        ~Cikefailtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cikefailentry; //type: CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry> > cikefailentry;
        
}; // CiscoIpsecFlowMonitorMib::Cikefailtable


class CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry : public Entity
{
    public:
        Cikefailentry();
        ~Cikefailentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cikefailindex; //type: int32
        YLeaf cikefailreason; //type: CikefailreasonEnum
        YLeaf cikefailtime; //type: uint32
        YLeaf cikefaillocaltype; //type: IkepeertypeEnum
        YLeaf cikefaillocalvalue; //type: string
        YLeaf cikefailremotetype; //type: IkepeertypeEnum
        YLeaf cikefailremotevalue; //type: string
        YLeaf cikefaillocaladdr; //type: binary
        YLeaf cikefailremoteaddr; //type: binary
        class CikefailreasonEnum;

}; // CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry


class CiscoIpsecFlowMonitorMib::Cipsecfailtable : public Entity
{
    public:
        Cipsecfailtable();
        ~Cipsecfailtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsecfailentry; //type: CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry

        std::vector<std::shared_ptr<CISCO_IPSEC_FLOW_MONITOR_MIB::CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry> > cipsecfailentry;
        
}; // CiscoIpsecFlowMonitorMib::Cipsecfailtable


class CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry : public Entity
{
    public:
        Cipsecfailentry();
        ~Cipsecfailentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsecfailindex; //type: int32
        YLeaf cipsecfailreason; //type: CipsecfailreasonEnum
        YLeaf cipsecfailtime; //type: uint32
        YLeaf cipsecfailtunnelindex; //type: int32
        YLeaf cipsecfailsaspi; //type: int32
        YLeaf cipsecfailpktsrcaddr; //type: binary
        YLeaf cipsecfailpktdstaddr; //type: binary
        class CipsecfailreasonEnum;

}; // CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry

class TunnelstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf destroy;

};

class IkehashalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;

};

class IkeauthmethodEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf preSharedKey;
        static const Enum::YLeaf rsaSig;
        static const Enum::YLeaf rsaEncrypt;
        static const Enum::YLeaf revPublicKey;

};

class KeytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ike;
        static const Enum::YLeaf manual;

};

class TrapstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CompalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ldf;

};

class EncryptalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf des;
        static const Enum::YLeaf des3;

};

class IkepeertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipAddrPeer;
        static const Enum::YLeaf namePeer;

};

class IkenegomodeEnum : public Enum
{
    public:
        static const Enum::YLeaf main;
        static const Enum::YLeaf aggressive;

};

class EncapmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf transport;

};

class AuthalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf hmacMd5;
        static const Enum::YLeaf hmacSha;

};

class EndpttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf singleIpAddr;
        static const Enum::YLeaf ipAddrRange;
        static const Enum::YLeaf ipSubnet;

};

class DiffhellmangrpEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf dhGroup1;
        static const Enum::YLeaf dhGroup2;

};

class CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::CipsechistcheckpointEnum : public Enum
{
    public:
        static const Enum::YLeaf ready;
        static const Enum::YLeaf checkPoint;

};

class CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspidirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspiprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ah;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf ipcomp;

};

class CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspistatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf expiring;

};

class CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf operRequest;
        static const Enum::YLeaf peerDelRequest;
        static const Enum::YLeaf peerLost;
        static const Enum::YLeaf localFailure;
        static const Enum::YLeaf checkPointReg;

};

class CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf operRequest;
        static const Enum::YLeaf peerDelRequest;
        static const Enum::YLeaf peerLost;
        static const Enum::YLeaf seqNumRollOver;
        static const Enum::YLeaf checkPointReq;

};

class CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf peerDelRequest;
        static const Enum::YLeaf peerLost;
        static const Enum::YLeaf localFailure;
        static const Enum::YLeaf authFailure;
        static const Enum::YLeaf hashValidation;
        static const Enum::YLeaf encryptFailure;
        static const Enum::YLeaf internalError;
        static const Enum::YLeaf sysCapExceeded;
        static const Enum::YLeaf proposalFailure;
        static const Enum::YLeaf peerCertUnavailable;
        static const Enum::YLeaf peerCertNotValid;
        static const Enum::YLeaf localCertExpired;
        static const Enum::YLeaf crlFailure;
        static const Enum::YLeaf peerEncodingError;
        static const Enum::YLeaf nonExistentSa;
        static const Enum::YLeaf operRequest;

};

class CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf internalError;
        static const Enum::YLeaf peerEncodingError;
        static const Enum::YLeaf proposalFailure;
        static const Enum::YLeaf protocolUseFail;
        static const Enum::YLeaf nonExistentSa;
        static const Enum::YLeaf decryptFailure;
        static const Enum::YLeaf encryptFailure;
        static const Enum::YLeaf inAuthFailure;
        static const Enum::YLeaf outAuthFailure;
        static const Enum::YLeaf compression;
        static const Enum::YLeaf sysCapExceeded;
        static const Enum::YLeaf peerDelRequest;
        static const Enum::YLeaf peerLost;
        static const Enum::YLeaf seqNumRollOver;
        static const Enum::YLeaf operRequest;

};


}
}

#endif /* _CISCO_IPSEC_FLOW_MONITOR_MIB_ */

