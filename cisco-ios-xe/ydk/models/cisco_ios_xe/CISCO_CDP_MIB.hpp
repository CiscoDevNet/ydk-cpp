#ifndef _CISCO_CDP_MIB_
#define _CISCO_CDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CDP_MIB {

class CiscoCdpMib : public Entity
{
    public:
        CiscoCdpMib();
        ~CiscoCdpMib();

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

        class Cdpglobal; //type: CiscoCdpMib::Cdpglobal
        class Cdpinterfacetable; //type: CiscoCdpMib::Cdpinterfacetable
        class Cdpinterfaceexttable; //type: CiscoCdpMib::Cdpinterfaceexttable
        class Cdpcachetable; //type: CiscoCdpMib::Cdpcachetable
        class Cdpctaddresstable; //type: CiscoCdpMib::Cdpctaddresstable

        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable> cdpcachetable_;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpctaddresstable> cdpctaddresstable_;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpglobal> cdpglobal_;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfaceexttable> cdpinterfaceexttable_;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfacetable> cdpinterfacetable_;
        
}; // CiscoCdpMib


class CiscoCdpMib::Cdpglobal : public Entity
{
    public:
        Cdpglobal();
        ~Cdpglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdpglobalrun; //type: boolean
        YLeaf cdpglobalmessageinterval; //type: int32
        YLeaf cdpglobalholdtime; //type: int32
        YLeaf cdpglobaldeviceid; //type: string
        YLeaf cdpgloballastchange; //type: uint32
        YLeaf cdpglobaldeviceidformatcpb; //type: Cdpglobaldeviceidformatcpb
        YLeaf cdpglobaldeviceidformat; //type: CdpglobaldeviceidformatEnum
        class CdpglobaldeviceidformatEnum;

}; // CiscoCdpMib::Cdpglobal


class CiscoCdpMib::Cdpinterfacetable : public Entity
{
    public:
        Cdpinterfacetable();
        ~Cdpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdpinterfaceentry; //type: CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry> > cdpinterfaceentry_;
        
}; // CiscoCdpMib::Cdpinterfacetable


class CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry : public Entity
{
    public:
        Cdpinterfaceentry();
        ~Cdpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdpinterfaceifindex; //type: int32
        YLeaf cdpinterfaceenable; //type: boolean
        YLeaf cdpinterfacemessageinterval; //type: int32
        YLeaf cdpinterfacegroup; //type: int32
        YLeaf cdpinterfaceport; //type: int32
        YLeaf cdpinterfacename; //type: string

}; // CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry


class CiscoCdpMib::Cdpinterfaceexttable : public Entity
{
    public:
        Cdpinterfaceexttable();
        ~Cdpinterfaceexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdpinterfaceextentry; //type: CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry> > cdpinterfaceextentry_;
        
}; // CiscoCdpMib::Cdpinterfaceexttable


class CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry : public Entity
{
    public:
        Cdpinterfaceextentry();
        ~Cdpinterfaceextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdpinterfaceextendedtrust; //type: CdpinterfaceextendedtrustEnum
        YLeaf cdpinterfacecosforuntrustedport; //type: uint32
        class CdpinterfaceextendedtrustEnum;

}; // CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry


class CiscoCdpMib::Cdpcachetable : public Entity
{
    public:
        Cdpcachetable();
        ~Cdpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdpcacheentry; //type: CiscoCdpMib::Cdpcachetable::Cdpcacheentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry> > cdpcacheentry_;
        
}; // CiscoCdpMib::Cdpcachetable


class CiscoCdpMib::Cdpcachetable::Cdpcacheentry : public Entity
{
    public:
        Cdpcacheentry();
        ~Cdpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdpcacheifindex; //type: int32
        YLeaf cdpcachedeviceindex; //type: int32
        YLeaf cdpcacheaddresstype; //type: CisconetworkprotocolEnum
        YLeaf cdpcacheaddress; //type: binary
        YLeaf cdpcacheversion; //type: string
        YLeaf cdpcachedeviceid; //type: string
        YLeaf cdpcachedeviceport; //type: string
        YLeaf cdpcacheplatform; //type: string
        YLeaf cdpcachecapabilities; //type: binary
        YLeaf cdpcachevtpmgmtdomain; //type: string
        YLeaf cdpcachenativevlan; //type: int32
        YLeaf cdpcacheduplex; //type: CdpcacheduplexEnum
        YLeaf cdpcacheapplianceid; //type: uint32
        YLeaf cdpcachevlanid; //type: uint32
        YLeaf cdpcachepowerconsumption; //type: uint32
        YLeaf cdpcachemtu; //type: uint32
        YLeaf cdpcachesysname; //type: string
        YLeaf cdpcachesysobjectid; //type: string
        YLeaf cdpcacheprimarymgmtaddrtype; //type: CisconetworkprotocolEnum
        YLeaf cdpcacheprimarymgmtaddr; //type: binary
        YLeaf cdpcachesecondarymgmtaddrtype; //type: CisconetworkprotocolEnum
        YLeaf cdpcachesecondarymgmtaddr; //type: binary
        YLeaf cdpcachephyslocation; //type: string
        YLeaf cdpcachelastchange; //type: uint32
        class CdpcacheduplexEnum;

}; // CiscoCdpMib::Cdpcachetable::Cdpcacheentry


class CiscoCdpMib::Cdpctaddresstable : public Entity
{
    public:
        Cdpctaddresstable();
        ~Cdpctaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdpctaddressentry; //type: CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry> > cdpctaddressentry_;
        
}; // CiscoCdpMib::Cdpctaddresstable


class CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry : public Entity
{
    public:
        Cdpctaddressentry();
        ~Cdpctaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry::cdpcacheifindex)
        YLeaf cdpcacheifindex;
        //type: int32 (refers to CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry::cdpcachedeviceindex)
        YLeaf cdpcachedeviceindex;
        YLeaf cdpctaddressindex; //type: int32
        YLeaf cdpctaddresstype; //type: CisconetworkprotocolEnum
        YLeaf cdpctaddress; //type: binary

}; // CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry

class CiscoCdpMib::Cdpglobal::CdpglobaldeviceidformatEnum : public Enum
{
    public:
        static const Enum::YLeaf serialNumber;
        static const Enum::YLeaf macAddress;
        static const Enum::YLeaf other;

};

class CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::CdpinterfaceextendedtrustEnum : public Enum
{
    public:
        static const Enum::YLeaf trusted;
        static const Enum::YLeaf noTrust;

};

class CiscoCdpMib::Cdpcachetable::Cdpcacheentry::CdpcacheduplexEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf halfduplex;
        static const Enum::YLeaf fullduplex;

};


}
}

#endif /* _CISCO_CDP_MIB_ */

