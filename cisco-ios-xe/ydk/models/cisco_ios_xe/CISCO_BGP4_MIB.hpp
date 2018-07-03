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

        class CbgpGlobal; //type: CISCOBGP4MIB::CbgpGlobal
        class CbgpRouteTable; //type: CISCOBGP4MIB::CbgpRouteTable
        class CbgpPeerCapsTable; //type: CISCOBGP4MIB::CbgpPeerCapsTable
        class CbgpPeerAddrFamilyTable; //type: CISCOBGP4MIB::CbgpPeerAddrFamilyTable
        class CbgpPeerAddrFamilyPrefixTable; //type: CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable
        class CbgpPeer2Table; //type: CISCOBGP4MIB::CbgpPeer2Table
        class CbgpPeer2CapsTable; //type: CISCOBGP4MIB::CbgpPeer2CapsTable
        class CbgpPeer2AddrFamilyTable; //type: CISCOBGP4MIB::CbgpPeer2AddrFamilyTable
        class CbgpPeer2AddrFamilyPrefixTable; //type: CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable

        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpGlobal> cbgpglobal;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpRouteTable> cbgproutetable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeerCapsTable> cbgppeercapstable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeerAddrFamilyTable> cbgppeeraddrfamilytable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable> cbgppeeraddrfamilyprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2Table> cbgppeer2table;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2CapsTable> cbgppeer2capstable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2AddrFamilyTable> cbgppeer2addrfamilytable;
        std::shared_ptr<cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable> cbgppeer2addrfamilyprefixtable;
        
}; // CISCOBGP4MIB


class CISCOBGP4MIB::CbgpGlobal : public ydk::Entity
{
    public:
        CbgpGlobal();
        ~CbgpGlobal();

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

        ydk::YLeaf cbgpnotifsenable; //type: CbgpNotifsEnable
        ydk::YLeaf cbgplocalas; //type: uint32

}; // CISCOBGP4MIB::CbgpGlobal


class CISCOBGP4MIB::CbgpRouteTable : public ydk::Entity
{
    public:
        CbgpRouteTable();
        ~CbgpRouteTable();

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

        class CbgpRouteEntry; //type: CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry

        ydk::YList cbgprouteentry;
        
}; // CISCOBGP4MIB::CbgpRouteTable


class CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry : public ydk::Entity
{
    public:
        CbgpRouteEntry();
        ~CbgpRouteEntry();

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
        ydk::YLeaf cbgprouteorigin; //type: CbgpRouteOrigin
        ydk::YLeaf cbgprouteaspathsegment; //type: binary
        ydk::YLeaf cbgproutenexthop; //type: binary
        ydk::YLeaf cbgproutemedpresent; //type: boolean
        ydk::YLeaf cbgproutemultiexitdisc; //type: uint32
        ydk::YLeaf cbgproutelocalprefpresent; //type: boolean
        ydk::YLeaf cbgproutelocalpref; //type: uint32
        ydk::YLeaf cbgprouteatomicaggregate; //type: CbgpRouteAtomicAggregate
        ydk::YLeaf cbgprouteaggregatoras; //type: uint32
        ydk::YLeaf cbgprouteaggregatoraddrtype; //type: InetAddressType
        ydk::YLeaf cbgprouteaggregatoraddr; //type: binary
        ydk::YLeaf cbgproutebest; //type: boolean
        ydk::YLeaf cbgprouteunknownattr; //type: binary
        class CbgpRouteOrigin;
        class CbgpRouteAtomicAggregate;

}; // CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry


class CISCOBGP4MIB::CbgpPeerCapsTable : public ydk::Entity
{
    public:
        CbgpPeerCapsTable();
        ~CbgpPeerCapsTable();

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

        class CbgpPeerCapsEntry; //type: CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry

        ydk::YList cbgppeercapsentry;
        
}; // CISCOBGP4MIB::CbgpPeerCapsTable


class CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry : public ydk::Entity
{
    public:
        CbgpPeerCapsEntry();
        ~CbgpPeerCapsEntry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::BgpPeerTable::BgpPeerEntry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeercapcode; //type: CbgpPeerCapCode
        ydk::YLeaf cbgppeercapindex; //type: uint32
        ydk::YLeaf cbgppeercapvalue; //type: binary
        class CbgpPeerCapCode;

}; // CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry


class CISCOBGP4MIB::CbgpPeerAddrFamilyTable : public ydk::Entity
{
    public:
        CbgpPeerAddrFamilyTable();
        ~CbgpPeerAddrFamilyTable();

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

        class CbgpPeerAddrFamilyEntry; //type: CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry

        ydk::YList cbgppeeraddrfamilyentry;
        
}; // CISCOBGP4MIB::CbgpPeerAddrFamilyTable


class CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry : public ydk::Entity
{
    public:
        CbgpPeerAddrFamilyEntry();
        ~CbgpPeerAddrFamilyEntry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::BgpPeerTable::BgpPeerEntry::bgppeerremoteaddr)
        ydk::YLeaf bgppeerremoteaddr;
        ydk::YLeaf cbgppeeraddrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeeraddrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeeraddrfamilyname; //type: string

}; // CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry


class CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable : public ydk::Entity
{
    public:
        CbgpPeerAddrFamilyPrefixTable();
        ~CbgpPeerAddrFamilyPrefixTable();

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

        class CbgpPeerAddrFamilyPrefixEntry; //type: CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry

        ydk::YList cbgppeeraddrfamilyprefixentry;
        
}; // CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable


class CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry : public ydk::Entity
{
    public:
        CbgpPeerAddrFamilyPrefixEntry();
        ~CbgpPeerAddrFamilyPrefixEntry();

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

        //type: string (refers to cisco_ios_xe::BGP4_MIB::BGP4MIB::BgpPeerTable::BgpPeerEntry::bgppeerremoteaddr)
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

}; // CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry


class CISCOBGP4MIB::CbgpPeer2Table : public ydk::Entity
{
    public:
        CbgpPeer2Table();
        ~CbgpPeer2Table();

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

        class CbgpPeer2Entry; //type: CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry

        ydk::YList cbgppeer2entry;
        
}; // CISCOBGP4MIB::CbgpPeer2Table


class CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry : public ydk::Entity
{
    public:
        CbgpPeer2Entry();
        ~CbgpPeer2Entry();

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
        ydk::YLeaf cbgppeer2state; //type: CbgpPeer2State
        ydk::YLeaf cbgppeer2adminstatus; //type: CbgpPeer2AdminStatus
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
        ydk::YLeaf cbgppeer2prevstate; //type: CbgpPeer2PrevState
        class CbgpPeer2State;
        class CbgpPeer2AdminStatus;
        class CbgpPeer2PrevState;

}; // CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry


class CISCOBGP4MIB::CbgpPeer2CapsTable : public ydk::Entity
{
    public:
        CbgpPeer2CapsTable();
        ~CbgpPeer2CapsTable();

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

        class CbgpPeer2CapsEntry; //type: CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry

        ydk::YList cbgppeer2capsentry;
        
}; // CISCOBGP4MIB::CbgpPeer2CapsTable


class CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry : public ydk::Entity
{
    public:
        CbgpPeer2CapsEntry();
        ~CbgpPeer2CapsEntry();

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
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2capcode; //type: CbgpPeer2CapCode
        ydk::YLeaf cbgppeer2capindex; //type: uint32
        ydk::YLeaf cbgppeer2capvalue; //type: binary
        class CbgpPeer2CapCode;

}; // CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry


class CISCOBGP4MIB::CbgpPeer2AddrFamilyTable : public ydk::Entity
{
    public:
        CbgpPeer2AddrFamilyTable();
        ~CbgpPeer2AddrFamilyTable();

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

        class CbgpPeer2AddrFamilyEntry; //type: CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry

        ydk::YList cbgppeer2addrfamilyentry;
        
}; // CISCOBGP4MIB::CbgpPeer2AddrFamilyTable


class CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry : public ydk::Entity
{
    public:
        CbgpPeer2AddrFamilyEntry();
        ~CbgpPeer2AddrFamilyEntry();

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
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::cbgppeer2remoteaddr)
        ydk::YLeaf cbgppeer2remoteaddr;
        ydk::YLeaf cbgppeer2addrfamilyafi; //type: InetAddressType
        ydk::YLeaf cbgppeer2addrfamilysafi; //type: CbgpSafi
        ydk::YLeaf cbgppeer2addrfamilyname; //type: string

}; // CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry


class CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable : public ydk::Entity
{
    public:
        CbgpPeer2AddrFamilyPrefixTable();
        ~CbgpPeer2AddrFamilyPrefixTable();

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

        class CbgpPeer2AddrFamilyPrefixEntry; //type: CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry

        ydk::YList cbgppeer2addrfamilyprefixentry;
        
}; // CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable


class CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry : public ydk::Entity
{
    public:
        CbgpPeer2AddrFamilyPrefixEntry();
        ~CbgpPeer2AddrFamilyPrefixEntry();

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
        //type: binary (refers to cisco_ios_xe::CISCO_BGP4_MIB::CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::cbgppeer2remoteaddr)
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

}; // CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry

class CbgpSafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicastAndMulticast;
        static const ydk::Enum::YLeaf vpn;

};

class CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteAtomicAggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multiProtocol;
        static const ydk::Enum::YLeaf routeRefresh;
        static const ydk::Enum::YLeaf gracefulRestart;
        static const ydk::Enum::YLeaf routeRefreshOld;

};

class CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf start;

};

class CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState : public ydk::Enum
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

class CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode : public ydk::Enum
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

