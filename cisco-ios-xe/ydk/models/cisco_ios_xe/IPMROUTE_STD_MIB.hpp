#ifndef _IPMROUTE_STD_MIB_
#define _IPMROUTE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace IPMROUTE_STD_MIB {

class IpmrouteStdMib : public Entity
{
    public:
        IpmrouteStdMib();
        ~IpmrouteStdMib();

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

        class Ipmroute; //type: IpmrouteStdMib::Ipmroute
        class Ipmroutetable; //type: IpmrouteStdMib::Ipmroutetable
        class Ipmroutenexthoptable; //type: IpmrouteStdMib::Ipmroutenexthoptable
        class Ipmrouteinterfacetable; //type: IpmrouteStdMib::Ipmrouteinterfacetable
        class Ipmrouteboundarytable; //type: IpmrouteStdMib::Ipmrouteboundarytable
        class Ipmroutescopenametable; //type: IpmrouteStdMib::Ipmroutescopenametable

        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroute> ipmroute_;
        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmrouteboundarytable> ipmrouteboundarytable_;
        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmrouteinterfacetable> ipmrouteinterfacetable_;
        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable> ipmroutenexthoptable_;
        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutescopenametable> ipmroutescopenametable_;
        std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable> ipmroutetable_;
        
}; // IpmrouteStdMib


class IpmrouteStdMib::Ipmroute : public Entity
{
    public:
        Ipmroute();
        ~Ipmroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmrouteenable; //type: IpmrouteenableEnum
        YLeaf ipmrouteentrycount; //type: uint32
        class IpmrouteenableEnum;

}; // IpmrouteStdMib::Ipmroute


class IpmrouteStdMib::Ipmroutetable : public Entity
{
    public:
        Ipmroutetable();
        ~Ipmroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipmrouteentry; //type: IpmrouteStdMib::Ipmroutetable::Ipmrouteentry

        std::vector<std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry> > ipmrouteentry_;
        
}; // IpmrouteStdMib::Ipmroutetable


class IpmrouteStdMib::Ipmroutetable::Ipmrouteentry : public Entity
{
    public:
        Ipmrouteentry();
        ~Ipmrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmroutegroup; //type: string
        YLeaf ipmroutesource; //type: string
        YLeaf ipmroutesourcemask; //type: string
        YLeaf ipmrouteupstreamneighbor; //type: string
        YLeaf ipmrouteinifindex; //type: int32
        YLeaf ipmrouteuptime; //type: uint32
        YLeaf ipmrouteexpirytime; //type: uint32
        YLeaf ipmroutepkts; //type: uint32
        YLeaf ipmroutedifferentinifpackets; //type: uint32
        YLeaf ipmrouteoctets; //type: uint32
        YLeaf ipmrouteprotocol; //type: IanaipmrouteprotocolEnum
        YLeaf ipmroutertproto; //type: IanaiprouteprotocolEnum
        YLeaf ipmroutertaddress; //type: string
        YLeaf ipmroutertmask; //type: string
        YLeaf ipmrouterttype; //type: IpmrouterttypeEnum
        YLeaf ipmroutehcoctets; //type: uint64
        YLeaf ciscoipmroutepruneflag; //type: boolean
        YLeaf ciscoipmroutesparseflag; //type: boolean
        YLeaf ciscoipmrouteconnectedflag; //type: boolean
        YLeaf ciscoipmroutelocalflag; //type: boolean
        YLeaf ciscoipmrouteregisterflag; //type: boolean
        YLeaf ciscoipmrouterpflag; //type: boolean
        YLeaf ciscoipmroutesptflag; //type: boolean
        YLeaf ciscoipmroutebps; //type: uint32
        YLeaf ciscoipmroutemetric; //type: int32
        YLeaf ciscoipmroutemetricpreference; //type: int32
        YLeaf ciscoipmrouteinlimit; //type: int32
        YLeaf ciscoipmroutelastused; //type: uint32
        YLeaf ciscoipmrouteinlimit2; //type: uint32
        YLeaf ciscoipmroutejoinflag; //type: boolean
        YLeaf ciscoipmroutemsdpflag; //type: boolean
        YLeaf ciscoipmrouteproxyjoinflag; //type: boolean
        YLeaf ciscoipmroutepkts; //type: uint64
        YLeaf ciscoipmroutedifferentinifpkts; //type: uint64
        YLeaf ciscoipmrouteoctets; //type: uint64
        YLeaf ciscoipmroutebps2; //type: uint64
        YLeaf ciscoipmroutemetric2; //type: uint32
        class IpmrouterttypeEnum;

}; // IpmrouteStdMib::Ipmroutetable::Ipmrouteentry


class IpmrouteStdMib::Ipmroutenexthoptable : public Entity
{
    public:
        Ipmroutenexthoptable();
        ~Ipmroutenexthoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipmroutenexthopentry; //type: IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry

        std::vector<std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry> > ipmroutenexthopentry_;
        
}; // IpmrouteStdMib::Ipmroutenexthoptable


class IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry : public Entity
{
    public:
        Ipmroutenexthopentry();
        ~Ipmroutenexthopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmroutenexthopgroup; //type: string
        YLeaf ipmroutenexthopsource; //type: string
        YLeaf ipmroutenexthopsourcemask; //type: string
        YLeaf ipmroutenexthopifindex; //type: int32
        YLeaf ipmroutenexthopaddress; //type: string
        YLeaf ipmroutenexthopstate; //type: IpmroutenexthopstateEnum
        YLeaf ipmroutenexthopuptime; //type: uint32
        YLeaf ipmroutenexthopexpirytime; //type: uint32
        YLeaf ipmroutenexthopclosestmemberhops; //type: int32
        YLeaf ipmroutenexthopprotocol; //type: IanaipmrouteprotocolEnum
        YLeaf ipmroutenexthoppkts; //type: uint32
        YLeaf ciscoipmroutenexthopoutlimit; //type: uint32
        YLeaf ciscoipmroutenexthopmachdr; //type: binary
        YLeaf ciscoipmroutenexthoppkts; //type: uint64
        class IpmroutenexthopstateEnum;

}; // IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry


class IpmrouteStdMib::Ipmrouteinterfacetable : public Entity
{
    public:
        Ipmrouteinterfacetable();
        ~Ipmrouteinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipmrouteinterfaceentry; //type: IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry

        std::vector<std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry> > ipmrouteinterfaceentry_;
        
}; // IpmrouteStdMib::Ipmrouteinterfacetable


class IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry : public Entity
{
    public:
        Ipmrouteinterfaceentry();
        ~Ipmrouteinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmrouteinterfaceifindex; //type: int32
        YLeaf ipmrouteinterfacettl; //type: int32
        YLeaf ipmrouteinterfaceprotocol; //type: IanaipmrouteprotocolEnum
        YLeaf ipmrouteinterfaceratelimit; //type: int32
        YLeaf ipmrouteinterfaceinmcastoctets; //type: uint32
        YLeaf ipmrouteinterfaceoutmcastoctets; //type: uint32
        YLeaf ipmrouteinterfacehcinmcastoctets; //type: uint64
        YLeaf ipmrouteinterfacehcoutmcastoctets; //type: uint64
        YLeaf ciscoipmrouteifinmcastoctets; //type: uint64
        YLeaf ciscoipmrouteifoutmcastoctets; //type: uint64
        YLeaf ciscoipmrouteifinmcastpkts; //type: uint32
        YLeaf ciscoipmrouteifhcinmcastpkts; //type: uint64
        YLeaf ciscoipmrouteifoutmcastpkts; //type: uint32
        YLeaf ciscoipmrouteifhcoutmcastpkts; //type: uint64

}; // IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry


class IpmrouteStdMib::Ipmrouteboundarytable : public Entity
{
    public:
        Ipmrouteboundarytable();
        ~Ipmrouteboundarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipmrouteboundaryentry; //type: IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry

        std::vector<std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry> > ipmrouteboundaryentry_;
        
}; // IpmrouteStdMib::Ipmrouteboundarytable


class IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry : public Entity
{
    public:
        Ipmrouteboundaryentry();
        ~Ipmrouteboundaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmrouteboundaryifindex; //type: int32
        YLeaf ipmrouteboundaryaddress; //type: string
        YLeaf ipmrouteboundaryaddressmask; //type: string
        YLeaf ipmrouteboundarystatus; //type: RowstatusEnum

}; // IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry


class IpmrouteStdMib::Ipmroutescopenametable : public Entity
{
    public:
        Ipmroutescopenametable();
        ~Ipmroutescopenametable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipmroutescopenameentry; //type: IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry

        std::vector<std::shared_ptr<IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry> > ipmroutescopenameentry_;
        
}; // IpmrouteStdMib::Ipmroutescopenametable


class IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry : public Entity
{
    public:
        Ipmroutescopenameentry();
        ~Ipmroutescopenameentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipmroutescopenameaddress; //type: string
        YLeaf ipmroutescopenameaddressmask; //type: string
        YLeaf ipmroutescopenamelanguage; //type: string
        YLeaf ipmroutescopenamestring; //type: string
        YLeaf ipmroutescopenamedefault; //type: boolean
        YLeaf ipmroutescopenamestatus; //type: RowstatusEnum

}; // IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry

class IpmrouteStdMib::Ipmroute::IpmrouteenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::IpmrouterttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};

class IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::IpmroutenexthopstateEnum : public Enum
{
    public:
        static const Enum::YLeaf pruned;
        static const Enum::YLeaf forwarding;

};


}
}

#endif /* _IPMROUTE_STD_MIB_ */

