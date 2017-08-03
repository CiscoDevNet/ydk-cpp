#ifndef _CISCO_EIGRP_MIB_
#define _CISCO_EIGRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_EIGRP_MIB {

class CiscoEigrpMib : public ydk::Entity
{
    public:
        CiscoEigrpMib();
        ~CiscoEigrpMib();

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

        class Ceigrpvpntable; //type: CiscoEigrpMib::Ceigrpvpntable
        class Ceigrptraffstatstable; //type: CiscoEigrpMib::Ceigrptraffstatstable
        class Ceigrptopotable; //type: CiscoEigrpMib::Ceigrptopotable
        class Ceigrppeertable; //type: CiscoEigrpMib::Ceigrppeertable
        class Ceigrpinterfacetable; //type: CiscoEigrpMib::Ceigrpinterfacetable

        std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpinterfacetable> ceigrpinterfacetable;
        std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrppeertable> ceigrppeertable;
        std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptopotable> ceigrptopotable;
        std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable> ceigrptraffstatstable;
        std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable> ceigrpvpntable;
        
}; // CiscoEigrpMib


class CiscoEigrpMib::Ceigrpvpntable : public ydk::Entity
{
    public:
        Ceigrpvpntable();
        ~Ceigrpvpntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceigrpvpnentry; //type: CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry> > ceigrpvpnentry;
        
}; // CiscoEigrpMib::Ceigrpvpntable


class CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry : public ydk::Entity
{
    public:
        Ceigrpvpnentry();
        ~Ceigrpvpnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ceigrpvpnid; //type: uint32
        ydk::YLeaf ceigrpvpnname; //type: string

}; // CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry


class CiscoEigrpMib::Ceigrptraffstatstable : public ydk::Entity
{
    public:
        Ceigrptraffstatstable();
        ~Ceigrptraffstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceigrptraffstatsentry; //type: CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry> > ceigrptraffstatsentry;
        
}; // CiscoEigrpMib::Ceigrptraffstatstable


class CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry : public ydk::Entity
{
    public:
        Ceigrptraffstatsentry();
        ~Ceigrptraffstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
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
        ydk::YLeaf ceigrpasrouteridtype; //type: Inetaddresstype
        ydk::YLeaf ceigrpasrouterid; //type: binary
        ydk::YLeaf ceigrptoporoutes; //type: uint32
        ydk::YLeaf ceigrpheadserial; //type: uint64
        ydk::YLeaf ceigrpnextserial; //type: uint64
        ydk::YLeaf ceigrpxmitpendreplies; //type: uint32
        ydk::YLeaf ceigrpxmitdummies; //type: uint32

}; // CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry


class CiscoEigrpMib::Ceigrptopotable : public ydk::Entity
{
    public:
        Ceigrptopotable();
        ~Ceigrptopotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceigrptopoentry; //type: CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry> > ceigrptopoentry;
        
}; // CiscoEigrpMib::Ceigrptopotable


class CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry : public ydk::Entity
{
    public:
        Ceigrptopoentry();
        ~Ceigrptopoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        ydk::YLeaf ceigrpdestnettype; //type: Inetaddresstype
        ydk::YLeaf ceigrpdestnet; //type: binary
        ydk::YLeaf ceigrpdestnetprefixlen; //type: uint32
        ydk::YLeaf ceigrpactive; //type: boolean
        ydk::YLeaf ceigrpstuckinactive; //type: boolean
        ydk::YLeaf ceigrpdestsuccessors; //type: uint32
        ydk::YLeaf ceigrpfdistance; //type: uint32
        ydk::YLeaf ceigrprouteorigintype; //type: string
        ydk::YLeaf ceigrprouteoriginaddrtype; //type: Inetaddresstype
        ydk::YLeaf ceigrprouteoriginaddr; //type: binary
        ydk::YLeaf ceigrpnexthopaddresstype; //type: Inetaddresstype
        ydk::YLeaf ceigrpnexthopaddress; //type: binary
        ydk::YLeaf ceigrpnexthopinterface; //type: string
        ydk::YLeaf ceigrpdistance; //type: uint32
        ydk::YLeaf ceigrpreportdistance; //type: uint32

}; // CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry


class CiscoEigrpMib::Ceigrppeertable : public ydk::Entity
{
    public:
        Ceigrppeertable();
        ~Ceigrppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceigrppeerentry; //type: CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry> > ceigrppeerentry;
        
}; // CiscoEigrpMib::Ceigrppeertable


class CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry : public ydk::Entity
{
    public:
        Ceigrppeerentry();
        ~Ceigrppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        ydk::YLeaf ceigrphandle; //type: uint32
        ydk::YLeaf ceigrppeeraddrtype; //type: Inetaddresstype
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

}; // CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry


class CiscoEigrpMib::Ceigrpinterfacetable : public ydk::Entity
{
    public:
        Ceigrpinterfacetable();
        ~Ceigrpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceigrpinterfaceentry; //type: CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry> > ceigrpinterfaceentry;
        
}; // CiscoEigrpMib::Ceigrpinterfacetable


class CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry : public ydk::Entity
{
    public:
        Ceigrpinterfaceentry();
        ~Ceigrpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        ydk::YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        ydk::YLeaf ceigrpasnumber;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
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

}; // CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry

class CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::Ceigrpauthmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;

};


}
}

#endif /* _CISCO_EIGRP_MIB_ */

