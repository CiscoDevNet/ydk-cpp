#ifndef _CISCO_CDP_MIB_
#define _CISCO_CDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CDP_MIB {

class CISCOCDPMIB : public ydk::Entity
{
    public:
        CISCOCDPMIB();
        ~CISCOCDPMIB();

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

        class Cdpglobal; //type: CISCOCDPMIB::Cdpglobal
        class Cdpinterfacetable; //type: CISCOCDPMIB::Cdpinterfacetable
        class Cdpinterfaceexttable; //type: CISCOCDPMIB::Cdpinterfaceexttable
        class Cdpcachetable; //type: CISCOCDPMIB::Cdpcachetable
        class Cdpctaddresstable; //type: CISCOCDPMIB::Cdpctaddresstable

        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpglobal> cdpglobal;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpinterfacetable> cdpinterfacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpinterfaceexttable> cdpinterfaceexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpcachetable> cdpcachetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpctaddresstable> cdpctaddresstable;
        
}; // CISCOCDPMIB


class CISCOCDPMIB::Cdpglobal : public ydk::Entity
{
    public:
        Cdpglobal();
        ~Cdpglobal();

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

        ydk::YLeaf cdpglobalrun; //type: boolean
        ydk::YLeaf cdpglobalmessageinterval; //type: int32
        ydk::YLeaf cdpglobalholdtime; //type: int32
        ydk::YLeaf cdpglobaldeviceid; //type: string
        ydk::YLeaf cdpgloballastchange; //type: uint32
        ydk::YLeaf cdpglobaldeviceidformatcpb; //type: Cdpglobaldeviceidformatcpb
        ydk::YLeaf cdpglobaldeviceidformat; //type: Cdpglobaldeviceidformat
        class Cdpglobaldeviceidformat;

}; // CISCOCDPMIB::Cdpglobal


class CISCOCDPMIB::Cdpinterfacetable : public ydk::Entity
{
    public:
        Cdpinterfacetable();
        ~Cdpinterfacetable();

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

        class Cdpinterfaceentry; //type: CISCOCDPMIB::Cdpinterfacetable::Cdpinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpinterfacetable::Cdpinterfaceentry> > cdpinterfaceentry;
        
}; // CISCOCDPMIB::Cdpinterfacetable


class CISCOCDPMIB::Cdpinterfacetable::Cdpinterfaceentry : public ydk::Entity
{
    public:
        Cdpinterfaceentry();
        ~Cdpinterfaceentry();

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

        ydk::YLeaf cdpinterfaceifindex; //type: int32
        ydk::YLeaf cdpinterfaceenable; //type: boolean
        ydk::YLeaf cdpinterfacemessageinterval; //type: int32
        ydk::YLeaf cdpinterfacegroup; //type: int32
        ydk::YLeaf cdpinterfaceport; //type: int32
        ydk::YLeaf cdpinterfacename; //type: string

}; // CISCOCDPMIB::Cdpinterfacetable::Cdpinterfaceentry


class CISCOCDPMIB::Cdpinterfaceexttable : public ydk::Entity
{
    public:
        Cdpinterfaceexttable();
        ~Cdpinterfaceexttable();

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

        class Cdpinterfaceextentry; //type: CISCOCDPMIB::Cdpinterfaceexttable::Cdpinterfaceextentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpinterfaceexttable::Cdpinterfaceextentry> > cdpinterfaceextentry;
        
}; // CISCOCDPMIB::Cdpinterfaceexttable


class CISCOCDPMIB::Cdpinterfaceexttable::Cdpinterfaceextentry : public ydk::Entity
{
    public:
        Cdpinterfaceextentry();
        ~Cdpinterfaceextentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdpinterfaceextendedtrust; //type: Cdpinterfaceextendedtrust
        ydk::YLeaf cdpinterfacecosforuntrustedport; //type: uint32
        class Cdpinterfaceextendedtrust;

}; // CISCOCDPMIB::Cdpinterfaceexttable::Cdpinterfaceextentry


class CISCOCDPMIB::Cdpcachetable : public ydk::Entity
{
    public:
        Cdpcachetable();
        ~Cdpcachetable();

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

        class Cdpcacheentry; //type: CISCOCDPMIB::Cdpcachetable::Cdpcacheentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpcachetable::Cdpcacheentry> > cdpcacheentry;
        
}; // CISCOCDPMIB::Cdpcachetable


class CISCOCDPMIB::Cdpcachetable::Cdpcacheentry : public ydk::Entity
{
    public:
        Cdpcacheentry();
        ~Cdpcacheentry();

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

        ydk::YLeaf cdpcacheifindex; //type: int32
        ydk::YLeaf cdpcachedeviceindex; //type: int32
        ydk::YLeaf cdpcacheaddresstype; //type: CiscoNetworkProtocol
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
        ydk::YLeaf cdpcacheprimarymgmtaddrtype; //type: CiscoNetworkProtocol
        ydk::YLeaf cdpcacheprimarymgmtaddr; //type: binary
        ydk::YLeaf cdpcachesecondarymgmtaddrtype; //type: CiscoNetworkProtocol
        ydk::YLeaf cdpcachesecondarymgmtaddr; //type: binary
        ydk::YLeaf cdpcachephyslocation; //type: string
        ydk::YLeaf cdpcachelastchange; //type: uint32
        class Cdpcacheduplex;

}; // CISCOCDPMIB::Cdpcachetable::Cdpcacheentry


class CISCOCDPMIB::Cdpctaddresstable : public ydk::Entity
{
    public:
        Cdpctaddresstable();
        ~Cdpctaddresstable();

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

        class Cdpctaddressentry; //type: CISCOCDPMIB::Cdpctaddresstable::Cdpctaddressentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpctaddresstable::Cdpctaddressentry> > cdpctaddressentry;
        
}; // CISCOCDPMIB::Cdpctaddresstable


class CISCOCDPMIB::Cdpctaddresstable::Cdpctaddressentry : public ydk::Entity
{
    public:
        Cdpctaddressentry();
        ~Cdpctaddressentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpcachetable::Cdpcacheentry::cdpcacheifindex)
        ydk::YLeaf cdpcacheifindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::Cdpcachetable::Cdpcacheentry::cdpcachedeviceindex)
        ydk::YLeaf cdpcachedeviceindex;
        ydk::YLeaf cdpctaddressindex; //type: int32
        ydk::YLeaf cdpctaddresstype; //type: CiscoNetworkProtocol
        ydk::YLeaf cdpctaddress; //type: binary

}; // CISCOCDPMIB::Cdpctaddresstable::Cdpctaddressentry

class CISCOCDPMIB::Cdpglobal::Cdpglobaldeviceidformat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serialNumber;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf other;

};

class CISCOCDPMIB::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextendedtrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf noTrust;

};

class CISCOCDPMIB::Cdpcachetable::Cdpcacheentry::Cdpcacheduplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf halfduplex;
        static const ydk::Enum::YLeaf fullduplex;

};


}
}

#endif /* _CISCO_CDP_MIB_ */

