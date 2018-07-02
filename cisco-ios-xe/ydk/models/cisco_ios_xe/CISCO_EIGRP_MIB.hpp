#ifndef _CISCO_EIGRP_MIB_
#define _CISCO_EIGRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_EIGRP_MIB {

class CISCOEIGRPMIB : public ydk::Entity
{
    public:
        CISCOEIGRPMIB();
        ~CISCOEIGRPMIB();

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

        class CEigrpVpnTable; //type: CISCOEIGRPMIB::CEigrpVpnTable
        class CEigrpTraffStatsTable; //type: CISCOEIGRPMIB::CEigrpTraffStatsTable
        class CEigrpTopoTable; //type: CISCOEIGRPMIB::CEigrpTopoTable
        class CEigrpPeerTable; //type: CISCOEIGRPMIB::CEigrpPeerTable
        class CEigrpInterfaceTable; //type: CISCOEIGRPMIB::CEigrpInterfaceTable

        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpVpnTable> ceigrpvpntable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpTraffStatsTable> ceigrptraffstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpTopoTable> ceigrptopotable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpPeerTable> ceigrppeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpInterfaceTable> ceigrpinterfacetable;
        
}; // CISCOEIGRPMIB


class CISCOEIGRPMIB::CEigrpVpnTable : public ydk::Entity
{
    public:
        CEigrpVpnTable();
        ~CEigrpVpnTable();

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

        class CEigrpVpnEntry; //type: CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry

        ydk::YList ceigrpvpnentry;
        
}; // CISCOEIGRPMIB::CEigrpVpnTable


class CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry : public ydk::Entity
{
    public:
        CEigrpVpnEntry();
        ~CEigrpVpnEntry();

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

        ydk::YLeaf ceigrpvpnid; //type: uint32
        ydk::YLeaf ceigrpvpnname; //type: string

}; // CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry


class CISCOEIGRPMIB::CEigrpTraffStatsTable : public ydk::Entity
{
    public:
        CEigrpTraffStatsTable();
        ~CEigrpTraffStatsTable();

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

        class CEigrpTraffStatsEntry; //type: CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry

        ydk::YList ceigrptraffstatsentry;
        
}; // CISCOEIGRPMIB::CEigrpTraffStatsTable


class CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry : public ydk::Entity
{
    public:
        CEigrpTraffStatsEntry();
        ~CEigrpTraffStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        ydk::YLeaf ceigrpasnumber; //type: uint32
        ydk::YLeaf ceigrpnbrcount; //type: uint32
        ydk::YLeaf ceigrphellossent; //type: uint32
        ydk::YLeaf ceigrphellosrcvd; //type: uint32
        ydk::YLeaf ceigrpupdatessent; //type: uint32
        ydk::YLeaf ceigrpupdatesrcvd; //type: uint32
        ydk::YLeaf ceigrpqueriessent; //type: uint32
        ydk::YLeaf ceigrpqueriesrcvd; //type: uint32
        ydk::YLeaf ceigrprepliessent; //type: uint32
        ydk::YLeaf ceigrprepliesrcvd; //type: uint32
        ydk::YLeaf ceigrpackssent; //type: uint32
        ydk::YLeaf ceigrpacksrcvd; //type: uint32
        ydk::YLeaf ceigrpinputqhighmark; //type: uint32
        ydk::YLeaf ceigrpinputqdrops; //type: uint32
        ydk::YLeaf ceigrpsiaqueriessent; //type: uint32
        ydk::YLeaf ceigrpsiaqueriesrcvd; //type: uint32
        ydk::YLeaf ceigrpasrouteridtype; //type: InetAddressType
        ydk::YLeaf ceigrpasrouterid; //type: binary
        ydk::YLeaf ceigrptoporoutes; //type: uint32
        ydk::YLeaf ceigrpheadserial; //type: uint64
        ydk::YLeaf ceigrpnextserial; //type: uint64
        ydk::YLeaf ceigrpxmitpendreplies; //type: uint32
        ydk::YLeaf ceigrpxmitdummies; //type: uint32

}; // CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry


class CISCOEIGRPMIB::CEigrpTopoTable : public ydk::Entity
{
    public:
        CEigrpTopoTable();
        ~CEigrpTopoTable();

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

        class CEigrpTopoEntry; //type: CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry

        ydk::YList ceigrptopoentry;
        
}; // CISCOEIGRPMIB::CEigrpTopoTable


class CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry : public ydk::Entity
{
    public:
        CEigrpTopoEntry();
        ~CEigrpTopoEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        ydk::YLeaf ceigrpdestnettype; //type: InetAddressType
        ydk::YLeaf ceigrpdestnet; //type: binary
        ydk::YLeaf ceigrpdestnetprefixlen; //type: uint32
        ydk::YLeaf ceigrpactive; //type: boolean
        ydk::YLeaf ceigrpstuckinactive; //type: boolean
        ydk::YLeaf ceigrpdestsuccessors; //type: uint32
        ydk::YLeaf ceigrpfdistance; //type: uint32
        ydk::YLeaf ceigrprouteorigintype; //type: string
        ydk::YLeaf ceigrprouteoriginaddrtype; //type: InetAddressType
        ydk::YLeaf ceigrprouteoriginaddr; //type: binary
        ydk::YLeaf ceigrpnexthopaddresstype; //type: InetAddressType
        ydk::YLeaf ceigrpnexthopaddress; //type: binary
        ydk::YLeaf ceigrpnexthopinterface; //type: string
        ydk::YLeaf ceigrpdistance; //type: uint32
        ydk::YLeaf ceigrpreportdistance; //type: uint32

}; // CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry


class CISCOEIGRPMIB::CEigrpPeerTable : public ydk::Entity
{
    public:
        CEigrpPeerTable();
        ~CEigrpPeerTable();

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

        class CEigrpPeerEntry; //type: CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry

        ydk::YList ceigrppeerentry;
        
}; // CISCOEIGRPMIB::CEigrpPeerTable


class CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry : public ydk::Entity
{
    public:
        CEigrpPeerEntry();
        ~CEigrpPeerEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        ydk::YLeaf ceigrphandle; //type: uint32
        ydk::YLeaf ceigrppeeraddrtype; //type: InetAddressType
        ydk::YLeaf ceigrppeeraddr; //type: binary
        ydk::YLeaf ceigrppeerifindex; //type: int32
        ydk::YLeaf ceigrpholdtime; //type: uint32
        ydk::YLeaf ceigrpuptime; //type: string
        ydk::YLeaf ceigrpsrtt; //type: uint32
        ydk::YLeaf ceigrprto; //type: uint32
        ydk::YLeaf ceigrppktsenqueued; //type: uint32
        ydk::YLeaf ceigrplastseq; //type: uint32
        ydk::YLeaf ceigrpversion; //type: string
        ydk::YLeaf ceigrpretrans; //type: uint32
        ydk::YLeaf ceigrpretries; //type: uint32

}; // CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry


class CISCOEIGRPMIB::CEigrpInterfaceTable : public ydk::Entity
{
    public:
        CEigrpInterfaceTable();
        ~CEigrpInterfaceTable();

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

        class CEigrpInterfaceEntry; //type: CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry

        ydk::YList ceigrpinterfaceentry;
        
}; // CISCOEIGRPMIB::CEigrpInterfaceTable


class CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry : public ydk::Entity
{
    public:
        CEigrpInterfaceEntry();
        ~CEigrpInterfaceEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf ceigrppeercount; //type: uint32
        ydk::YLeaf ceigrpxmitreliableq; //type: uint32
        ydk::YLeaf ceigrpxmitunreliableq; //type: uint32
        ydk::YLeaf ceigrpmeansrtt; //type: uint32
        ydk::YLeaf ceigrppacingreliable; //type: uint32
        ydk::YLeaf ceigrppacingunreliable; //type: uint32
        ydk::YLeaf ceigrpmflowtimer; //type: uint32
        ydk::YLeaf ceigrppendingroutes; //type: uint32
        ydk::YLeaf ceigrphellointerval; //type: uint32
        ydk::YLeaf ceigrpxmitnextserial; //type: uint64
        ydk::YLeaf ceigrpumcasts; //type: uint32
        ydk::YLeaf ceigrprmcasts; //type: uint32
        ydk::YLeaf ceigrpuucasts; //type: uint32
        ydk::YLeaf ceigrprucasts; //type: uint32
        ydk::YLeaf ceigrpmcastexcepts; //type: uint32
        ydk::YLeaf ceigrpcrpkts; //type: uint32
        ydk::YLeaf ceigrpackssuppressed; //type: uint32
        ydk::YLeaf ceigrpretranssent; //type: uint32
        ydk::YLeaf ceigrpoosrvcd; //type: uint32
        ydk::YLeaf ceigrpauthmode; //type: CEigrpAuthMode
        ydk::YLeaf ceigrpauthkeychain; //type: string
        class CEigrpAuthMode;

}; // CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry

class CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::CEigrpAuthMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;

};


}
}

#endif /* _CISCO_EIGRP_MIB_ */

