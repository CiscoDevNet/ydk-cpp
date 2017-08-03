#ifndef _CISCO_BGP4_MIB_
#define _CISCO_BGP4_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_BGP4_MIB {

class CiscoBgp4Mib : public ydk::Entity
{
    public:
        CiscoBgp4Mib();
        ~CiscoBgp4Mib();

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


class CiscoBgp4Mib::Cbgpglobal : public ydk::Entity
{
    public:
        Cbgpglobal();
        ~Cbgpglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgpnotifsenable; //type: Cbgpnotifsenable
        ydk::YLeaf cbgplocalas; //type: uint32

}; // CiscoBgp4Mib::Cbgpglobal


class CiscoBgp4Mib::Cbgproutetable : public ydk::Entity
{
    public:
        Cbgproutetable();
        ~Cbgproutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgprouteentry; //type: CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry> > cbgprouteentry;
        
}; // CiscoBgp4Mib::Cbgproutetable


class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry : public ydk::Entity
{
    public:
        Cbgprouteentry();
        ~Cbgprouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgprouteafi; //type: Inetaddresstype
        ydk::YLeaf cbgproutesafi; //type: Cbgpsafi
        ydk::YLeaf cbgproutepeertype; //type: Inetaddresstype
        ydk::YLeaf cbgproutepeer; //type: binary
        ydk::YLeaf cbgprouteaddrprefix; //type: binary
        ydk::YLeaf cbgprouteaddrprefixlen; //type: uint32
        ydk::YLeaf cbgprouteorigin; //type: Cbgprouteorigin
        ydk::YLeaf cbgprouteaspathsegment; //type: binary
        ydk::YLeaf cbgproutenexthop; //type: binary
        ydk::YLeaf cbgproutemedpresent; //type: boolean
        ydk::YLeaf cbgproutemultiexitdisc; //type: uint32
        ydk::YLeaf cbgproutelocalprefpresent; //type: boolean
        ydk::YLeaf cbgproutelocalpref; //type: uint32
        ydk::YLeaf cbgprouteatomicaggregate; //type: Cbgprouteatomicaggregate
        ydk::YLeaf cbgprouteaggregatoras; //type: uint32
        ydk::YLeaf cbgprouteaggregatoraddrtype; //type: Inetaddresstype
        ydk::YLeaf cbgprouteaggregatoraddr; //type: binary
        ydk::YLeaf cbgproutebest; //type: boolean
        ydk::YLeaf cbgprouteunknownattr; //type: binary
        class Cbgprouteorigin;
        class Cbgprouteatomicaggregate;

}; // CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry


class CiscoBgp4Mib::Cbgppeercapstable : public ydk::Entity
{
    public:
        Cbgppeercapstable();
        ~Cbgppeercapstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeercapsentry; //type: CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry> > cbgppeercapsentry;
        
}; // CiscoBgp4Mib::Cbgppeercapstable


class CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry : public ydk::Entity
{
    public:
        Cbgppeercapsentry();
        ~Cbgppeercapsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeercapcode; //type: Cbgppeercapcode
        ydk::YLeaf cbgppeercapindex; //type: uint32
        ydk::YLeaf cbgppeercapvalue; //type: binary
        class Cbgppeercapcode;

}; // CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry


class CiscoBgp4Mib::Cbgppeeraddrfamilytable : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilytable();
        ~Cbgppeeraddrfamilytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeeraddrfamilyentry; //type: CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry> > cbgppeeraddrfamilyentry;
        
}; // CiscoBgp4Mib::Cbgppeeraddrfamilytable


class CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyentry();
        ~Cbgppeeraddrfamilyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeeraddrfamilyafi; //type: Inetaddresstype
        ydk::YLeaf cbgppeeraddrfamilysafi; //type: Cbgpsafi
        ydk::YLeaf cbgppeeraddrfamilyname; //type: string

}; // CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry


class CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyprefixtable();
        ~Cbgppeeraddrfamilyprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeeraddrfamilyprefixentry; //type: CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry> > cbgppeeraddrfamilyprefixentry;
        
}; // CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable


class CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyprefixentry();
        ~Cbgppeeraddrfamilyprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeeraddrfamilyafi; //type: Inetaddresstype
        ydk::YLeaf cbgppeeraddrfamilysafi; //type: Cbgpsafi
        ydk::YLeaf cbgppeeracceptedprefixes; //type: uint32
        ydk::YLeaf cbgppeerdeniedprefixes; //type: uint32
        ydk::YLeaf cbgppeerprefixadminlimit; //type: uint32
        ydk::YLeaf cbgppeerprefixthreshold; //type: uint32
        ydk::YLeaf cbgppeerprefixclearthreshold; //type: uint32
        ydk::YLeaf cbgppeeradvertisedprefixes; //type: uint32
        ydk::YLeaf cbgppeersuppressedprefixes; //type: uint32
        ydk::YLeaf cbgppeerwithdrawnprefixes; //type: uint32

}; // CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry


class CiscoBgp4Mib::Cbgppeer2Table : public ydk::Entity
{
    public:
        Cbgppeer2Table();
        ~Cbgppeer2Table();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeer2Entry; //type: CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry> > cbgppeer2entry;
        
}; // CiscoBgp4Mib::Cbgppeer2Table


class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry : public ydk::Entity
{
    public:
        Cbgppeer2Entry();
        ~Cbgppeer2Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgppeer2type; //type: Inetaddresstype
        ydk::YLeaf cbgppeer2remoteaddr; //type: binary
        ydk::YLeaf cbgppeer2state; //type: Cbgppeer2State
        ydk::YLeaf cbgppeer2adminstatus; //type: Cbgppeer2Adminstatus
        ydk::YLeaf cbgppeer2negotiatedversion; //type: int32
        ydk::YLeaf cbgppeer2localaddr; //type: binary
        ydk::YLeaf cbgppeer2localport; //type: uint16
        ydk::YLeaf cbgppeer2localas; //type: uint32
        ydk::YLeaf cbgppeer2localidentifier; //type: string
        ydk::YLeaf cbgppeer2remoteport; //type: uint16
        ydk::YLeaf cbgppeer2remoteas; //type: uint32
        ydk::YLeaf cbgppeer2remoteidentifier; //type: string
        ydk::YLeaf cbgppeer2inupdates; //type: uint32
        ydk::YLeaf cbgppeer2outupdates; //type: uint32
        ydk::YLeaf cbgppeer2intotalmessages; //type: uint32
        ydk::YLeaf cbgppeer2outtotalmessages; //type: uint32
        ydk::YLeaf cbgppeer2lasterror; //type: binary
        ydk::YLeaf cbgppeer2fsmestablishedtransitions; //type: uint32
        ydk::YLeaf cbgppeer2fsmestablishedtime; //type: uint32
        ydk::YLeaf cbgppeer2connectretryinterval; //type: int32
        ydk::YLeaf cbgppeer2holdtime; //type: int32
        ydk::YLeaf cbgppeer2keepalive; //type: int32
        ydk::YLeaf cbgppeer2holdtimeconfigured; //type: int32
        ydk::YLeaf cbgppeer2keepaliveconfigured; //type: int32
        ydk::YLeaf cbgppeer2minasoriginationinterval; //type: int32
        ydk::YLeaf cbgppeer2minrouteadvertisementinterval; //type: int32
        ydk::YLeaf cbgppeer2inupdateelapsedtime; //type: uint32
        ydk::YLeaf cbgppeer2lasterrortxt; //type: string
        ydk::YLeaf cbgppeer2prevstate; //type: Cbgppeer2Prevstate
        class Cbgppeer2State;
        class Cbgppeer2Adminstatus;
        class Cbgppeer2Prevstate;

}; // CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry


class CiscoBgp4Mib::Cbgppeer2Capstable : public ydk::Entity
{
    public:
        Cbgppeer2Capstable();
        ~Cbgppeer2Capstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeer2Capsentry; //type: CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry> > cbgppeer2capsentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Capstable


class CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry : public ydk::Entity
{
    public:
        Cbgppeer2Capsentry();
        ~Cbgppeer2Capsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgppeer2type; //type: Inetaddresstype
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2capcode; //type: Cbgppeer2Capcode
        ydk::YLeaf cbgppeer2capindex; //type: uint32
        ydk::YLeaf cbgppeer2capvalue; //type: binary
        class Cbgppeer2Capcode;

}; // CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry


class CiscoBgp4Mib::Cbgppeer2Addrfamilytable : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilytable();
        ~Cbgppeer2Addrfamilytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeer2Addrfamilyentry; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry> > cbgppeer2addrfamilyentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Addrfamilytable


class CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyentry();
        ~Cbgppeer2Addrfamilyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgppeer2type; //type: Inetaddresstype
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2addrfamilyafi; //type: Inetaddresstype
        ydk::YLeaf cbgppeer2addrfamilysafi; //type: Cbgpsafi
        ydk::YLeaf cbgppeer2addrfamilyname; //type: string

}; // CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry


class CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyprefixtable();
        ~Cbgppeer2Addrfamilyprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbgppeer2Addrfamilyprefixentry; //type: CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

        std::vector<std::shared_ptr<CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry> > cbgppeer2addrfamilyprefixentry;
        
}; // CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable


class CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyprefixentry();
        ~Cbgppeer2Addrfamilyprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgppeer2type; //type: Inetaddresstype
        //type: binary (refers to CISCO_BGP4_MIB::CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2addrfamilyafi; //type: Inetaddresstype
        ydk::YLeaf cbgppeer2addrfamilysafi; //type: Cbgpsafi
        ydk::YLeaf cbgppeer2acceptedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2deniedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2prefixadminlimit; //type: uint32
        ydk::YLeaf cbgppeer2prefixthreshold; //type: uint32
        ydk::YLeaf cbgppeer2prefixclearthreshold; //type: uint32
        ydk::YLeaf cbgppeer2advertisedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2suppressedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2withdrawnprefixes; //type: uint32

}; // CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

class Cbgpsafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicastAndMulticast;
        static const ydk::Enum::YLeaf vpn;

};

class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::Cbgprouteorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::Cbgprouteatomicaggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multiProtocol;
        static const ydk::Enum::YLeaf routeRefresh;
        static const ydk::Enum::YLeaf gracefulRestart;
        static const ydk::Enum::YLeaf routeRefreshOld;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Adminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf start;

};

class CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multiProtocol;
        static const ydk::Enum::YLeaf routeRefresh;
        static const ydk::Enum::YLeaf gracefulRestart;
        static const ydk::Enum::YLeaf fourByteAs;
        static const ydk::Enum::YLeaf addPath;
        static const ydk::Enum::YLeaf routeRefreshOld;

};


}
}

#endif /* _CISCO_BGP4_MIB_ */

