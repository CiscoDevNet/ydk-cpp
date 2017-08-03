#ifndef _CISCO_CDP_MIB_
#define _CISCO_CDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CDP_MIB {

class CiscoCdpMib : public ydk::Entity
{
    public:
        CiscoCdpMib();
        ~CiscoCdpMib();

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

        class Cdpglobal; //type: CiscoCdpMib::Cdpglobal
        class Cdpinterfacetable; //type: CiscoCdpMib::Cdpinterfacetable
        class Cdpinterfaceexttable; //type: CiscoCdpMib::Cdpinterfaceexttable
        class Cdpcachetable; //type: CiscoCdpMib::Cdpcachetable
        class Cdpctaddresstable; //type: CiscoCdpMib::Cdpctaddresstable

        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable> cdpcachetable;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpctaddresstable> cdpctaddresstable;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpglobal> cdpglobal;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfaceexttable> cdpinterfaceexttable;
        std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfacetable> cdpinterfacetable;
        
}; // CiscoCdpMib


class CiscoCdpMib::Cdpglobal : public ydk::Entity
{
    public:
        Cdpglobal();
        ~Cdpglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdpglobalrun; //type: boolean
        ydk::YLeaf cdpglobalmessageinterval; //type: int32
        ydk::YLeaf cdpglobalholdtime; //type: int32
        ydk::YLeaf cdpglobaldeviceid; //type: string
        ydk::YLeaf cdpgloballastchange; //type: uint32
        ydk::YLeaf cdpglobaldeviceidformatcpb; //type: Cdpglobaldeviceidformatcpb
        ydk::YLeaf cdpglobaldeviceidformat; //type: Cdpglobaldeviceidformat
        class Cdpglobaldeviceidformat;

}; // CiscoCdpMib::Cdpglobal


class CiscoCdpMib::Cdpinterfacetable : public ydk::Entity
{
    public:
        Cdpinterfacetable();
        ~Cdpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdpinterfaceentry; //type: CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry> > cdpinterfaceentry;
        
}; // CiscoCdpMib::Cdpinterfacetable


class CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry : public ydk::Entity
{
    public:
        Cdpinterfaceentry();
        ~Cdpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdpinterfaceifindex; //type: int32
        ydk::YLeaf cdpinterfaceenable; //type: boolean
        ydk::YLeaf cdpinterfacemessageinterval; //type: int32
        ydk::YLeaf cdpinterfacegroup; //type: int32
        ydk::YLeaf cdpinterfaceport; //type: int32
        ydk::YLeaf cdpinterfacename; //type: string

}; // CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry


class CiscoCdpMib::Cdpinterfaceexttable : public ydk::Entity
{
    public:
        Cdpinterfaceexttable();
        ~Cdpinterfaceexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdpinterfaceextentry; //type: CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry> > cdpinterfaceextentry;
        
}; // CiscoCdpMib::Cdpinterfaceexttable


class CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry : public ydk::Entity
{
    public:
        Cdpinterfaceextentry();
        ~Cdpinterfaceextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdpinterfaceextendedtrust; //type: Cdpinterfaceextendedtrust
        ydk::YLeaf cdpinterfacecosforuntrustedport; //type: uint32
        class Cdpinterfaceextendedtrust;

}; // CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry


class CiscoCdpMib::Cdpcachetable : public ydk::Entity
{
    public:
        Cdpcachetable();
        ~Cdpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdpcacheentry; //type: CiscoCdpMib::Cdpcachetable::Cdpcacheentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry> > cdpcacheentry;
        
}; // CiscoCdpMib::Cdpcachetable


class CiscoCdpMib::Cdpcachetable::Cdpcacheentry : public ydk::Entity
{
    public:
        Cdpcacheentry();
        ~Cdpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdpcacheifindex; //type: int32
        ydk::YLeaf cdpcachedeviceindex; //type: int32
        ydk::YLeaf cdpcacheaddresstype; //type: Cisconetworkprotocol
        ydk::YLeaf cdpcacheaddress; //type: binary
        ydk::YLeaf cdpcacheversion; //type: string
        ydk::YLeaf cdpcachedeviceid; //type: string
        ydk::YLeaf cdpcachedeviceport; //type: string
        ydk::YLeaf cdpcacheplatform; //type: string
        ydk::YLeaf cdpcachecapabilities; //type: binary
        ydk::YLeaf cdpcachevtpmgmtdomain; //type: string
        ydk::YLeaf cdpcachenativevlan; //type: int32
        ydk::YLeaf cdpcacheduplex; //type: Cdpcacheduplex
        ydk::YLeaf cdpcacheapplianceid; //type: uint32
        ydk::YLeaf cdpcachevlanid; //type: uint32
        ydk::YLeaf cdpcachepowerconsumption; //type: uint32
        ydk::YLeaf cdpcachemtu; //type: uint32
        ydk::YLeaf cdpcachesysname; //type: string
        ydk::YLeaf cdpcachesysobjectid; //type: string
        ydk::YLeaf cdpcacheprimarymgmtaddrtype; //type: Cisconetworkprotocol
        ydk::YLeaf cdpcacheprimarymgmtaddr; //type: binary
        ydk::YLeaf cdpcachesecondarymgmtaddrtype; //type: Cisconetworkprotocol
        ydk::YLeaf cdpcachesecondarymgmtaddr; //type: binary
        ydk::YLeaf cdpcachephyslocation; //type: string
        ydk::YLeaf cdpcachelastchange; //type: uint32
        class Cdpcacheduplex;

}; // CiscoCdpMib::Cdpcachetable::Cdpcacheentry


class CiscoCdpMib::Cdpctaddresstable : public ydk::Entity
{
    public:
        Cdpctaddresstable();
        ~Cdpctaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdpctaddressentry; //type: CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry

        std::vector<std::shared_ptr<CISCO_CDP_MIB::CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry> > cdpctaddressentry;
        
}; // CiscoCdpMib::Cdpctaddresstable


class CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry : public ydk::Entity
{
    public:
        Cdpctaddressentry();
        ~Cdpctaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry::cdpcacheifindex)
        ydk::YLeaf cdpcacheifindex;
        //type: int32 (refers to CISCO_CDP_MIB::CiscoCdpMib::Cdpcachetable::Cdpcacheentry::cdpcachedeviceindex)
        ydk::YLeaf cdpcachedeviceindex;
        ydk::YLeaf cdpctaddressindex; //type: int32
        ydk::YLeaf cdpctaddresstype; //type: Cisconetworkprotocol
        ydk::YLeaf cdpctaddress; //type: binary

}; // CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry

class CiscoCdpMib::Cdpglobal::Cdpglobaldeviceidformat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serialNumber;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf other;

};

class CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextendedtrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf noTrust;

};

class CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheduplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf halfduplex;
        static const ydk::Enum::YLeaf fullduplex;

};


}
}

#endif /* _CISCO_CDP_MIB_ */

