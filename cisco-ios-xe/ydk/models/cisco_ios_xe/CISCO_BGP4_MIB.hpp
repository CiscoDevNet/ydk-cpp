#ifndef _CISCO_BGP4_MIB_
#define _CISCO_BGP4_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_BGP4_MIB {

class CiscoBgp4Mib : public Entity
{
    public:
        CiscoBgp4Mib();
        ~CiscoBgp4Mib();

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

        class Cbgpglobal; //type: CiscoBgp4Mib::Cbgpglobal
        class Cbgproutetable; //type: CiscoBgp4Mib::Cbgproutetable
        class Cbgppeercapstable; //type: CiscoBgp4Mib::Cbgppeercapstable
        class Cbgppeeraddrfamilytable; //type: CiscoBgp4Mib::Cbgppeeraddrfamilytable
        class Cbgppeeraddrfamilyprefixtable; //type: CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable
        class Cbgppeer2Table; //type: CiscoBgp4Mib::Cbgppeer2Table
        class Cbgppeer2Capstable; //type: CiscoBgp4Mib::Cbgppeer2Capstable
        class Cbgppeer2Addrfamilytable; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilytable
        class Cbgppeer2Addrfamilyprefixtable; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable

        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgpglobal> cbgpglobal;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable> cbgppeer2addrfamilyprefixtable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilytable> cbgppeer2addrfamilytable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Capstable> cbgppeer2capstable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table> cbgppeer2table;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable> cbgppeeraddrfamilyprefixtable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilytable> cbgppeeraddrfamilytable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeercapstable> cbgppeercapstable;
        std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgproutetable> cbgproutetable;
        
}; // CiscoBgp4Mib


class CiscoBgp4Mib::Cbgpglobal : public Entity
{
    public:
        Cbgpglobal();
        ~Cbgpglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgpnotifsenable; //type: Cbgpnotifsenable
        YLeaf cbgplocalas; //type: uint32

}; // CiscoBgp4Mib::Cbgpglobal


class CiscoBgp4Mib::Cbgproutetable : public Entity
{
    public:
        Cbgproutetable();
        ~Cbgproutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgprouteentry; //type: CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry> > cbgprouteentry;
        
}; // CiscoBgp4Mib::Cbgproutetable


class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry : public Entity
{
    public:
        Cbgprouteentry();
        ~Cbgprouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgprouteafi; //type: InetaddresstypeEnum
        YLeaf cbgproutesafi; //type: CbgpsafiEnum
        YLeaf cbgproutepeertype; //type: InetaddresstypeEnum
        YLeaf cbgproutepeer; //type: binary
        YLeaf cbgprouteaddrprefix; //type: binary
        YLeaf cbgprouteaddrprefixlen; //type: uint32
        YLeaf cbgprouteorigin; //type: CbgprouteoriginEnum
        YLeaf cbgprouteaspathsegment; //type: binary
        YLeaf cbgproutenexthop; //type: binary
        YLeaf cbgproutemedpresent; //type: boolean
        YLeaf cbgproutemultiexitdisc; //type: uint32
        YLeaf cbgproutelocalprefpresent; //type: boolean
        YLeaf cbgproutelocalpref; //type: uint32
        YLeaf cbgprouteatomicaggregate; //type: CbgprouteatomicaggregateEnum
        YLeaf cbgprouteaggregatoras; //type: uint32
        YLeaf cbgprouteaggregatoraddrtype; //type: InetaddresstypeEnum
        YLeaf cbgprouteaggregatoraddr; //type: binary
        YLeaf cbgproutebest; //type: boolean
        YLeaf cbgprouteunknownattr; //type: binary
        class CbgprouteoriginEnum;
        class CbgprouteatomicaggregateEnum;

}; // CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry


class CiscoBgp4Mib::Cbgppeercapstable : public Entity
{
    public:
        Cbgppeercapstable();
        ~Cbgppeercapstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeercapsentry; //type: CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry> > cbgppeercapsentry;
        
}; // CiscoBgp4Mib::Cbgppeercapstable


class CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry : public Entity
{
    public:
        Cbgppeercapsentry();
        ~Cbgppeercapsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        YLeaf bgppeerremoteaddr;
        YLeaf cbgppeercapcode; //type: CbgppeercapcodeEnum
        YLeaf cbgppeercapindex; //type: uint32
        YLeaf cbgppeercapvalue; //type: binary
        class CbgppeercapcodeEnum;

}; // CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry


class CiscoBgp4Mib::Cbgppeeraddrfamilytable : public Entity
{
    public:
        Cbgppeeraddrfamilytable();
        ~Cbgppeeraddrfamilytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeeraddrfamilyentry; //type: CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry> > cbgppeeraddrfamilyentry;
        
}; // CiscoBgp4Mib::Cbgppeeraddrfamilytable


class CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry : public Entity
{
    public:
        Cbgppeeraddrfamilyentry();
        ~Cbgppeeraddrfamilyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        YLeaf bgppeerremoteaddr;
        YLeaf cbgppeeraddrfamilyafi; //type: InetaddresstypeEnum
        YLeaf cbgppeeraddrfamilysafi; //type: CbgpsafiEnum
        YLeaf cbgppeeraddrfamilyname; //type: string

}; // CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry


class CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable : public Entity
{
    public:
        Cbgppeeraddrfamilyprefixtable();
        ~Cbgppeeraddrfamilyprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeeraddrfamilyprefixentry; //type: CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry> > cbgppeeraddrfamilyprefixentry;
        
}; // CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable


class CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry : public Entity
{
    public:
        Cbgppeeraddrfamilyprefixentry();
        ~Cbgppeeraddrfamilyprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        YLeaf bgppeerremoteaddr;
        YLeaf cbgppeeraddrfamilyafi; //type: InetaddresstypeEnum
        YLeaf cbgppeeraddrfamilysafi; //type: CbgpsafiEnum
        YLeaf cbgppeeracceptedprefixes; //type: uint32
        YLeaf cbgppeerdeniedprefixes; //type: uint32
        YLeaf cbgppeerprefixadminlimit; //type: uint32
        YLeaf cbgppeerprefixthreshold; //type: uint32
        YLeaf cbgppeerprefixclearthreshold; //type: uint32
        YLeaf cbgppeeradvertisedprefixes; //type: uint32
        YLeaf cbgppeersuppressedprefixes; //type: uint32
        YLeaf cbgppeerwithdrawnprefixes; //type: uint32

}; // CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry


class CiscoBgp4Mib::Cbgppeer2Table : public Entity
{
    public:
        Cbgppeer2Table();
        ~Cbgppeer2Table();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeer2Entry; //type: CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry> > cbgppeer2entry;
        
}; // CiscoBgp4Mib::Cbgppeer2Table


class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry : public Entity
{
    public:
        Cbgppeer2Entry();
        ~Cbgppeer2Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgppeer2type; //type: InetaddresstypeEnum
        YLeaf cbgppeer2remoteaddr; //type: binary
        YLeaf cbgppeer2state; //type: Cbgppeer2StateEnum
        YLeaf cbgppeer2adminstatus; //type: Cbgppeer2AdminstatusEnum
        YLeaf cbgppeer2negotiatedversion; //type: int32
        YLeaf cbgppeer2localaddr; //type: binary
        YLeaf cbgppeer2localport; //type: uint16
        YLeaf cbgppeer2localas; //type: uint32
        YLeaf cbgppeer2localidentifier; //type: string
        YLeaf cbgppeer2remoteport; //type: uint16
        YLeaf cbgppeer2remoteas; //type: uint32
        YLeaf cbgppeer2remoteidentifier; //type: string
        YLeaf cbgppeer2inupdates; //type: uint32
        YLeaf cbgppeer2outupdates; //type: uint32
        YLeaf cbgppeer2intotalmessages; //type: uint32
        YLeaf cbgppeer2outtotalmessages; //type: uint32
        YLeaf cbgppeer2lasterror; //type: binary
        YLeaf cbgppeer2fsmestablishedtransitions; //type: uint32
        YLeaf cbgppeer2fsmestablishedtime; //type: uint32
        YLeaf cbgppeer2connectretryinterval; //type: int32
        YLeaf cbgppeer2holdtime; //type: int32
        YLeaf cbgppeer2keepalive; //type: int32
        YLeaf cbgppeer2holdtimeconfigured; //type: int32
        YLeaf cbgppeer2keepaliveconfigured; //type: int32
        YLeaf cbgppeer2minasoriginationinterval; //type: int32
        YLeaf cbgppeer2minrouteadvertisementinterval; //type: int32
        YLeaf cbgppeer2inupdateelapsedtime; //type: uint32
        YLeaf cbgppeer2lasterrortxt; //type: string
        YLeaf cbgppeer2prevstate; //type: Cbgppeer2PrevstateEnum
        class Cbgppeer2StateEnum;
        class Cbgppeer2AdminstatusEnum;
        class Cbgppeer2PrevstateEnum;

}; // CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry


class CiscoBgp4Mib::Cbgppeer2Capstable : public Entity
{
    public:
        Cbgppeer2Capstable();
        ~Cbgppeer2Capstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeer2Capsentry; //type: CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry> > cbgppeer2capsentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Capstable


class CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry : public Entity
{
    public:
        Cbgppeer2Capsentry();
        ~Cbgppeer2Capsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgppeer2type; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        YLeaf cbgppeer2remoteaddr;
        YLeaf cbgppeer2capcode; //type: Cbgppeer2CapcodeEnum
        YLeaf cbgppeer2capindex; //type: uint32
        YLeaf cbgppeer2capvalue; //type: binary
        class Cbgppeer2CapcodeEnum;

}; // CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry


class CiscoBgp4Mib::Cbgppeer2Addrfamilytable : public Entity
{
    public:
        Cbgppeer2Addrfamilytable();
        ~Cbgppeer2Addrfamilytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeer2Addrfamilyentry; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry> > cbgppeer2addrfamilyentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Addrfamilytable


class CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry : public Entity
{
    public:
        Cbgppeer2Addrfamilyentry();
        ~Cbgppeer2Addrfamilyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgppeer2type; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        YLeaf cbgppeer2remoteaddr;
        YLeaf cbgppeer2addrfamilyafi; //type: InetaddresstypeEnum
        YLeaf cbgppeer2addrfamilysafi; //type: CbgpsafiEnum
        YLeaf cbgppeer2addrfamilyname; //type: string

}; // CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry


class CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable : public Entity
{
    public:
        Cbgppeer2Addrfamilyprefixtable();
        ~Cbgppeer2Addrfamilyprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbgppeer2Addrfamilyprefixentry; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry> > cbgppeer2addrfamilyprefixentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable


class CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry : public Entity
{
    public:
        Cbgppeer2Addrfamilyprefixentry();
        ~Cbgppeer2Addrfamilyprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgppeer2type; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        YLeaf cbgppeer2remoteaddr;
        YLeaf cbgppeer2addrfamilyafi; //type: InetaddresstypeEnum
        YLeaf cbgppeer2addrfamilysafi; //type: CbgpsafiEnum
        YLeaf cbgppeer2acceptedprefixes; //type: uint32
        YLeaf cbgppeer2deniedprefixes; //type: uint32
        YLeaf cbgppeer2prefixadminlimit; //type: uint32
        YLeaf cbgppeer2prefixthreshold; //type: uint32
        YLeaf cbgppeer2prefixclearthreshold; //type: uint32
        YLeaf cbgppeer2advertisedprefixes; //type: uint32
        YLeaf cbgppeer2suppressedprefixes; //type: uint32
        YLeaf cbgppeer2withdrawnprefixes; //type: uint32

}; // CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

class CbgpsafiEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicastAndMulticast;
        static const Enum::YLeaf vpn;

};

class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteoriginEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf incomplete;

};

class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteatomicaggregateEnum : public Enum
{
    public:
        static const Enum::YLeaf lessSpecificRouteNotSelected;
        static const Enum::YLeaf lessSpecificRouteSelected;

};

class CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::CbgppeercapcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf multiProtocol;
        static const Enum::YLeaf routeRefresh;
        static const Enum::YLeaf gracefulRestart;
        static const Enum::YLeaf routeRefreshOld;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf active;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf openconfirm;
        static const Enum::YLeaf established;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2AdminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf stop;
        static const Enum::YLeaf start;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf active;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf openconfirm;
        static const Enum::YLeaf established;

};

class CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf multiProtocol;
        static const Enum::YLeaf routeRefresh;
        static const Enum::YLeaf gracefulRestart;
        static const Enum::YLeaf fourByteAs;
        static const Enum::YLeaf addPath;
        static const Enum::YLeaf routeRefreshOld;

};


}
}

#endif /* _CISCO_BGP4_MIB_ */

