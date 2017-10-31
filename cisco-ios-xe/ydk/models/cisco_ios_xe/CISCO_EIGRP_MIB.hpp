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

        class Ceigrpvpntable; //type: CISCOEIGRPMIB::Ceigrpvpntable
        class Ceigrptraffstatstable; //type: CISCOEIGRPMIB::Ceigrptraffstatstable
        class Ceigrptopotable; //type: CISCOEIGRPMIB::Ceigrptopotable
        class Ceigrppeertable; //type: CISCOEIGRPMIB::Ceigrppeertable
        class Ceigrpinterfacetable; //type: CISCOEIGRPMIB::Ceigrpinterfacetable

        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable> ceigrpvpntable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptraffstatstable> ceigrptraffstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptopotable> ceigrptopotable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrppeertable> ceigrppeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpinterfacetable> ceigrpinterfacetable;
        
}; // CISCOEIGRPMIB


class CISCOEIGRPMIB::Ceigrpvpntable : public ydk::Entity
{
    public:
        Ceigrpvpntable();
        ~Ceigrpvpntable();

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

        class Ceigrpvpnentry; //type: CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry> > ceigrpvpnentry;
        
}; // CISCOEIGRPMIB::Ceigrpvpntable


class CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry : public ydk::Entity
{
    public:
        Ceigrpvpnentry();
        ~Ceigrpvpnentry();

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

}; // CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry


class CISCOEIGRPMIB::Ceigrptraffstatstable : public ydk::Entity
{
    public:
        Ceigrptraffstatstable();
        ~Ceigrptraffstatstable();

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

        class Ceigrptraffstatsentry; //type: CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry> > ceigrptraffstatsentry;
        
}; // CISCOEIGRPMIB::Ceigrptraffstatstable


class CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry : public ydk::Entity
{
    public:
        Ceigrptraffstatsentry();
        ~Ceigrptraffstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
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

}; // CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry


class CISCOEIGRPMIB::Ceigrptopotable : public ydk::Entity
{
    public:
        Ceigrptopotable();
        ~Ceigrptopotable();

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

        class Ceigrptopoentry; //type: CISCOEIGRPMIB::Ceigrptopotable::Ceigrptopoentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptopotable::Ceigrptopoentry> > ceigrptopoentry;
        
}; // CISCOEIGRPMIB::Ceigrptopotable


class CISCOEIGRPMIB::Ceigrptopotable::Ceigrptopoentry : public ydk::Entity
{
    public:
        Ceigrptopoentry();
        ~Ceigrptopoentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
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

}; // CISCOEIGRPMIB::Ceigrptopotable::Ceigrptopoentry


class CISCOEIGRPMIB::Ceigrppeertable : public ydk::Entity
{
    public:
        Ceigrppeertable();
        ~Ceigrppeertable();

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

        class Ceigrppeerentry; //type: CISCOEIGRPMIB::Ceigrppeertable::Ceigrppeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrppeertable::Ceigrppeerentry> > ceigrppeerentry;
        
}; // CISCOEIGRPMIB::Ceigrppeertable


class CISCOEIGRPMIB::Ceigrppeertable::Ceigrppeerentry : public ydk::Entity
{
    public:
        Ceigrppeerentry();
        ~Ceigrppeerentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
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

}; // CISCOEIGRPMIB::Ceigrppeertable::Ceigrppeerentry


class CISCOEIGRPMIB::Ceigrpinterfacetable : public ydk::Entity
{
    public:
        Ceigrpinterfacetable();
        ~Ceigrpinterfacetable();

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

        class Ceigrpinterfaceentry; //type: CISCOEIGRPMIB::Ceigrpinterfacetable::Ceigrpinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpinterfacetable::Ceigrpinterfaceentry> > ceigrpinterfaceentry;
        
}; // CISCOEIGRPMIB::Ceigrpinterfacetable


class CISCOEIGRPMIB::Ceigrpinterfacetable::Ceigrpinterfaceentry : public ydk::Entity
{
    public:
        Ceigrpinterfaceentry();
        ~Ceigrpinterfaceentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_EIGRP_MIB::CISCOEIGRPMIB::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
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
        ydk::YLeaf ceigrpauthmode; //type: Ceigrpauthmode
        ydk::YLeaf ceigrpauthkeychain; //type: string
        class Ceigrpauthmode;

}; // CISCOEIGRPMIB::Ceigrpinterfacetable::Ceigrpinterfaceentry

class CISCOEIGRPMIB::Ceigrpinterfacetable::Ceigrpinterfaceentry::Ceigrpauthmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;

};


}
}

#endif /* _CISCO_EIGRP_MIB_ */

