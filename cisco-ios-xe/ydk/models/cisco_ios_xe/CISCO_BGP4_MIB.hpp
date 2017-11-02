#ifndef _CISCO_BGP4_MIB_
#define _CISCO_BGP4_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_BGP4_MIB {

class CISCOBGP4MIB : public ydk::Entity
{
    public:
        CISCOBGP4MIB();
        ~CISCOBGP4MIB();

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

        class Cbgpglobal; //type: CISCOBGP4MIB::Cbgpglobal
        class Cbgproutetable; //type: CISCOBGP4MIB::Cbgproutetable
        class Cbgppeercapstable; //type: CISCOBGP4MIB::Cbgppeercapstable
        class Cbgppeeraddrfamilytable; //type: CISCOBGP4MIB::Cbgppeeraddrfamilytable
        class Cbgppeeraddrfamilyprefixtable; //type: CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable
        class Cbgppeer2Table; //type: CISCOBGP4MIB::Cbgppeer2Table
        class Cbgppeer2Capstable; //type: CISCOBGP4MIB::Cbgppeer2Capstable
        class Cbgppeer2Addrfamilytable; //type: CISCOBGP4MIB::Cbgppeer2Addrfamilytable
        class Cbgppeer2Addrfamilyprefixtable; //type: CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable

        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgpglobal> cbgpglobal;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgproutetable> cbgproutetable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeercapstable> cbgppeercapstable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeeraddrfamilytable> cbgppeeraddrfamilytable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable> cbgppeeraddrfamilyprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Table> cbgppeer2table;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Capstable> cbgppeer2capstable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Addrfamilytable> cbgppeer2addrfamilytable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable> cbgppeer2addrfamilyprefixtable;
        
}; // CISCOBGP4MIB


class CISCOBGP4MIB::Cbgpglobal : public ydk::Entity
{
    public:
        Cbgpglobal();
        ~Cbgpglobal();

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

        ydk::YLeaf cbgpnotifsenable; //type: Cbgpnotifsenable
        ydk::YLeaf cbgplocalas; //type: uint32

}; // CISCOBGP4MIB::Cbgpglobal


class CISCOBGP4MIB::Cbgproutetable : public ydk::Entity
{
    public:
        Cbgproutetable();
        ~Cbgproutetable();

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

        class Cbgprouteentry; //type: CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry> > cbgprouteentry;
        
}; // CISCOBGP4MIB::Cbgproutetable


class CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry : public ydk::Entity
{
    public:
        Cbgprouteentry();
        ~Cbgprouteentry();

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

        ydk::YLeaf cbgprouteafi; //type: InetAddressType
        ydk::YLeaf cbgproutesafi; //type: CbgpSafi
        ydk::YLeaf cbgproutepeertype; //type: InetAddressType
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
        ydk::YLeaf cbgprouteaggregatoraddrtype; //type: InetAddressType
        ydk::YLeaf cbgprouteaggregatoraddr; //type: binary
        ydk::YLeaf cbgproutebest; //type: boolean
        ydk::YLeaf cbgprouteunknownattr; //type: binary
        class Cbgprouteorigin;
        class Cbgprouteatomicaggregate;

}; // CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry


class CISCOBGP4MIB::Cbgppeercapstable : public ydk::Entity
{
    public:
        Cbgppeercapstable();
        ~Cbgppeercapstable();

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

        class Cbgppeercapsentry; //type: CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry> > cbgppeercapsentry;
        
}; // CISCOBGP4MIB::Cbgppeercapstable


class CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry : public ydk::Entity
{
    public:
        Cbgppeercapsentry();
        ~Cbgppeercapsentry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeercapcode; //type: Cbgppeercapcode
        ydk::YLeaf cbgppeercapindex; //type: uint32
        ydk::YLeaf cbgppeercapvalue; //type: binary
        class Cbgppeercapcode;

}; // CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry


class CISCOBGP4MIB::Cbgppeeraddrfamilytable : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilytable();
        ~Cbgppeeraddrfamilytable();

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

        class Cbgppeeraddrfamilyentry; //type: CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry> > cbgppeeraddrfamilyentry;
        
}; // CISCOBGP4MIB::Cbgppeeraddrfamilytable


class CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyentry();
        ~Cbgppeeraddrfamilyentry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeeraddrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeeraddrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeeraddrfamilyname; //type: string

}; // CISCOBGP4MIB::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry


class CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyprefixtable();
        ~Cbgppeeraddrfamilyprefixtable();

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

        class Cbgppeeraddrfamilyprefixentry; //type: CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry> > cbgppeeraddrfamilyprefixentry;
        
}; // CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable


class CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry : public ydk::Entity
{
    public:
        Cbgppeeraddrfamilyprefixentry();
        ~Cbgppeeraddrfamilyprefixentry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgppeertable::Bgppeerentry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeeraddrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeeraddrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeeracceptedprefixes; //type: uint32
        ydk::YLeaf cbgppeerdeniedprefixes; //type: uint32
        ydk::YLeaf cbgppeerprefixadminlimit; //type: uint32
        ydk::YLeaf cbgppeerprefixthreshold; //type: uint32
        ydk::YLeaf cbgppeerprefixclearthreshold; //type: uint32
        ydk::YLeaf cbgppeeradvertisedprefixes; //type: uint32
        ydk::YLeaf cbgppeersuppressedprefixes; //type: uint32
        ydk::YLeaf cbgppeerwithdrawnprefixes; //type: uint32

}; // CISCOBGP4MIB::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry


class CISCOBGP4MIB::Cbgppeer2Table : public ydk::Entity
{
    public:
        Cbgppeer2Table();
        ~Cbgppeer2Table();

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

        class Cbgppeer2Entry; //type: CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry> > cbgppeer2entry;
        
}; // CISCOBGP4MIB::Cbgppeer2Table


class CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry : public ydk::Entity
{
    public:
        Cbgppeer2Entry();
        ~Cbgppeer2Entry();

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

        ydk::YLeaf cbgppeer2type; //type: InetAddressType
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

}; // CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry


class CISCOBGP4MIB::Cbgppeer2Capstable : public ydk::Entity
{
    public:
        Cbgppeer2Capstable();
        ~Cbgppeer2Capstable();

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

        class Cbgppeer2Capsentry; //type: CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry> > cbgppeer2capsentry;
        
}; // CISCOBGP4MIB::Cbgppeer2Capstable


class CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry : public ydk::Entity
{
    public:
        Cbgppeer2Capsentry();
        ~Cbgppeer2Capsentry();

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

        ydk::YLeaf cbgppeer2type; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2capcode; //type: Cbgppeer2Capcode
        ydk::YLeaf cbgppeer2capindex; //type: uint32
        ydk::YLeaf cbgppeer2capvalue; //type: binary
        class Cbgppeer2Capcode;

}; // CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry


class CISCOBGP4MIB::Cbgppeer2Addrfamilytable : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilytable();
        ~Cbgppeer2Addrfamilytable();

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

        class Cbgppeer2Addrfamilyentry; //type: CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry> > cbgppeer2addrfamilyentry;
        
}; // CISCOBGP4MIB::Cbgppeer2Addrfamilytable


class CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyentry();
        ~Cbgppeer2Addrfamilyentry();

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

        ydk::YLeaf cbgppeer2type; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2addrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeer2addrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeer2addrfamilyname; //type: string

}; // CISCOBGP4MIB::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry


class CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyprefixtable();
        ~Cbgppeer2Addrfamilyprefixtable();

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

        class Cbgppeer2Addrfamilyprefixentry; //type: CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry> > cbgppeer2addrfamilyprefixentry;
        
}; // CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable


class CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry : public ydk::Entity
{
    public:
        Cbgppeer2Addrfamilyprefixentry();
        ~Cbgppeer2Addrfamilyprefixentry();

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

        ydk::YLeaf cbgppeer2type; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2addrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeer2addrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeer2acceptedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2deniedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2prefixadminlimit; //type: uint32
        ydk::YLeaf cbgppeer2prefixthreshold; //type: uint32
        ydk::YLeaf cbgppeer2prefixclearthreshold; //type: uint32
        ydk::YLeaf cbgppeer2advertisedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2suppressedprefixes; //type: uint32
        ydk::YLeaf cbgppeer2withdrawnprefixes; //type: uint32

}; // CISCOBGP4MIB::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry

class CbgpSafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicastAndMulticast;
        static const ydk::Enum::YLeaf vpn;

};

class CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class CISCOBGP4MIB::Cbgproutetable::Cbgprouteentry::Cbgprouteatomicaggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class CISCOBGP4MIB::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multiProtocol;
        static const ydk::Enum::YLeaf routeRefresh;
        static const ydk::Enum::YLeaf gracefulRestart;
        static const ydk::Enum::YLeaf routeRefreshOld;

};

class CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Adminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf start;

};

class CISCOBGP4MIB::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Prevstate : public ydk::Enum
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

class CISCOBGP4MIB::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capcode : public ydk::Enum
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

