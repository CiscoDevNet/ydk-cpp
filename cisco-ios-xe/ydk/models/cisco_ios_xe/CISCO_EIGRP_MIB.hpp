#ifndef _CISCO_EIGRP_MIB_
#define _CISCO_EIGRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_EIGRP_MIB {

class CiscoEigrpMib : public Entity
{
    public:
        CiscoEigrpMib();
        ~CiscoEigrpMib();

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


class CiscoEigrpMib::Ceigrpvpntable : public Entity
{
    public:
        Ceigrpvpntable();
        ~Ceigrpvpntable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceigrpvpnentry; //type: CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry> > ceigrpvpnentry;
        
}; // CiscoEigrpMib::Ceigrpvpntable


class CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry : public Entity
{
    public:
        Ceigrpvpnentry();
        ~Ceigrpvpnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceigrpvpnid; //type: uint32
        YLeaf ceigrpvpnname; //type: string

}; // CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry


class CiscoEigrpMib::Ceigrptraffstatstable : public Entity
{
    public:
        Ceigrptraffstatstable();
        ~Ceigrptraffstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceigrptraffstatsentry; //type: CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry> > ceigrptraffstatsentry;
        
}; // CiscoEigrpMib::Ceigrptraffstatstable


class CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry : public Entity
{
    public:
        Ceigrptraffstatsentry();
        ~Ceigrptraffstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        YLeaf ceigrpvpnid;
        YLeaf ceigrpasnumber; //type: uint32
        YLeaf ceigrpnbrcount; //type: uint32
        YLeaf ceigrphellossent; //type: uint32
        YLeaf ceigrphellosrcvd; //type: uint32
        YLeaf ceigrpupdatessent; //type: uint32
        YLeaf ceigrpupdatesrcvd; //type: uint32
        YLeaf ceigrpqueriessent; //type: uint32
        YLeaf ceigrpqueriesrcvd; //type: uint32
        YLeaf ceigrprepliessent; //type: uint32
        YLeaf ceigrprepliesrcvd; //type: uint32
        YLeaf ceigrpackssent; //type: uint32
        YLeaf ceigrpacksrcvd; //type: uint32
        YLeaf ceigrpinputqhighmark; //type: uint32
        YLeaf ceigrpinputqdrops; //type: uint32
        YLeaf ceigrpsiaqueriessent; //type: uint32
        YLeaf ceigrpsiaqueriesrcvd; //type: uint32
        YLeaf ceigrpasrouteridtype; //type: InetaddresstypeEnum
        YLeaf ceigrpasrouterid; //type: binary
        YLeaf ceigrptoporoutes; //type: uint32
        YLeaf ceigrpheadserial; //type: uint64
        YLeaf ceigrpnextserial; //type: uint64
        YLeaf ceigrpxmitpendreplies; //type: uint32
        YLeaf ceigrpxmitdummies; //type: uint32

}; // CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry


class CiscoEigrpMib::Ceigrptopotable : public Entity
{
    public:
        Ceigrptopotable();
        ~Ceigrptopotable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceigrptopoentry; //type: CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry> > ceigrptopoentry;
        
}; // CiscoEigrpMib::Ceigrptopotable


class CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry : public Entity
{
    public:
        Ceigrptopoentry();
        ~Ceigrptopoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        YLeaf ceigrpasnumber;
        YLeaf ceigrpdestnettype; //type: InetaddresstypeEnum
        YLeaf ceigrpdestnet; //type: binary
        YLeaf ceigrpdestnetprefixlen; //type: uint32
        YLeaf ceigrpactive; //type: boolean
        YLeaf ceigrpstuckinactive; //type: boolean
        YLeaf ceigrpdestsuccessors; //type: uint32
        YLeaf ceigrpfdistance; //type: uint32
        YLeaf ceigrprouteorigintype; //type: string
        YLeaf ceigrprouteoriginaddrtype; //type: InetaddresstypeEnum
        YLeaf ceigrprouteoriginaddr; //type: binary
        YLeaf ceigrpnexthopaddresstype; //type: InetaddresstypeEnum
        YLeaf ceigrpnexthopaddress; //type: binary
        YLeaf ceigrpnexthopinterface; //type: string
        YLeaf ceigrpdistance; //type: uint32
        YLeaf ceigrpreportdistance; //type: uint32

}; // CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry


class CiscoEigrpMib::Ceigrppeertable : public Entity
{
    public:
        Ceigrppeertable();
        ~Ceigrppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceigrppeerentry; //type: CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry> > ceigrppeerentry;
        
}; // CiscoEigrpMib::Ceigrppeertable


class CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry : public Entity
{
    public:
        Ceigrppeerentry();
        ~Ceigrppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        YLeaf ceigrpasnumber;
        YLeaf ceigrphandle; //type: uint32
        YLeaf ceigrppeeraddrtype; //type: InetaddresstypeEnum
        YLeaf ceigrppeeraddr; //type: binary
        YLeaf ceigrppeerifindex; //type: int32
        YLeaf ceigrpholdtime; //type: uint32
        YLeaf ceigrpuptime; //type: string
        YLeaf ceigrpsrtt; //type: uint32
        YLeaf ceigrprto; //type: uint32
        YLeaf ceigrppktsenqueued; //type: uint32
        YLeaf ceigrplastseq; //type: uint32
        YLeaf ceigrpversion; //type: string
        YLeaf ceigrpretrans; //type: uint32
        YLeaf ceigrpretries; //type: uint32

}; // CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry


class CiscoEigrpMib::Ceigrpinterfacetable : public Entity
{
    public:
        Ceigrpinterfacetable();
        ~Ceigrpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceigrpinterfaceentry; //type: CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry

        std::vector<std::shared_ptr<CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry> > ceigrpinterfaceentry;
        
}; // CiscoEigrpMib::Ceigrpinterfacetable


class CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry : public Entity
{
    public:
        Ceigrpinterfaceentry();
        ~Ceigrpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::ceigrpvpnid)
        YLeaf ceigrpvpnid;
        //type: uint32 (refers to CISCO_EIGRP_MIB::CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::ceigrpasnumber)
        YLeaf ceigrpasnumber;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf ceigrppeercount; //type: uint32
        YLeaf ceigrpxmitreliableq; //type: uint32
        YLeaf ceigrpxmitunreliableq; //type: uint32
        YLeaf ceigrpmeansrtt; //type: uint32
        YLeaf ceigrppacingreliable; //type: uint32
        YLeaf ceigrppacingunreliable; //type: uint32
        YLeaf ceigrpmflowtimer; //type: uint32
        YLeaf ceigrppendingroutes; //type: uint32
        YLeaf ceigrphellointerval; //type: uint32
        YLeaf ceigrpxmitnextserial; //type: uint64
        YLeaf ceigrpumcasts; //type: uint32
        YLeaf ceigrprmcasts; //type: uint32
        YLeaf ceigrpuucasts; //type: uint32
        YLeaf ceigrprucasts; //type: uint32
        YLeaf ceigrpmcastexcepts; //type: uint32
        YLeaf ceigrpcrpkts; //type: uint32
        YLeaf ceigrpackssuppressed; //type: uint32
        YLeaf ceigrpretranssent; //type: uint32
        YLeaf ceigrpoosrvcd; //type: uint32
        YLeaf ceigrpauthmode; //type: CeigrpauthmodeEnum
        YLeaf ceigrpauthkeychain; //type: string
        class CeigrpauthmodeEnum;

}; // CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry

class CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::CeigrpauthmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;

};


}
}

#endif /* _CISCO_EIGRP_MIB_ */

