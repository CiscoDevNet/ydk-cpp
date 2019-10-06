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

        class CdpGlobal; //type: CISCOCDPMIB::CdpGlobal
        class CdpInterfaceTable; //type: CISCOCDPMIB::CdpInterfaceTable
        class CdpInterfaceExtTable; //type: CISCOCDPMIB::CdpInterfaceExtTable
        class CdpCacheTable; //type: CISCOCDPMIB::CdpCacheTable
        class CdpCtAddressTable; //type: CISCOCDPMIB::CdpCtAddressTable

        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpGlobal> cdpglobal;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpInterfaceTable> cdpinterfacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpInterfaceExtTable> cdpinterfaceexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpCacheTable> cdpcachetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpCtAddressTable> cdpctaddresstable;
        
}; // CISCOCDPMIB


class CISCOCDPMIB::CdpGlobal : public ydk::Entity
{
    public:
        CdpGlobal();
        ~CdpGlobal();

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
        ydk::YLeaf cdpglobaldeviceidformatcpb; //type: CdpGlobalDeviceIdFormatCpb
        ydk::YLeaf cdpglobaldeviceidformat; //type: CdpGlobalDeviceIdFormat
        class CdpGlobalDeviceIdFormat;

}; // CISCOCDPMIB::CdpGlobal


class CISCOCDPMIB::CdpInterfaceTable : public ydk::Entity
{
    public:
        CdpInterfaceTable();
        ~CdpInterfaceTable();

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

        class CdpInterfaceEntry; //type: CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry

        ydk::YList cdpinterfaceentry;
        
}; // CISCOCDPMIB::CdpInterfaceTable


class CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry : public ydk::Entity
{
    public:
        CdpInterfaceEntry();
        ~CdpInterfaceEntry();

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

}; // CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry


class CISCOCDPMIB::CdpInterfaceExtTable : public ydk::Entity
{
    public:
        CdpInterfaceExtTable();
        ~CdpInterfaceExtTable();

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

        class CdpInterfaceExtEntry; //type: CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry

        ydk::YList cdpinterfaceextentry;
        
}; // CISCOCDPMIB::CdpInterfaceExtTable


class CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry : public ydk::Entity
{
    public:
        CdpInterfaceExtEntry();
        ~CdpInterfaceExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdpinterfaceextendedtrust; //type: CdpInterfaceExtendedTrust
        ydk::YLeaf cdpinterfacecosforuntrustedport; //type: uint32
        class CdpInterfaceExtendedTrust;

}; // CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry


class CISCOCDPMIB::CdpCacheTable : public ydk::Entity
{
    public:
        CdpCacheTable();
        ~CdpCacheTable();

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

        class CdpCacheEntry; //type: CISCOCDPMIB::CdpCacheTable::CdpCacheEntry

        ydk::YList cdpcacheentry;
        
}; // CISCOCDPMIB::CdpCacheTable


class CISCOCDPMIB::CdpCacheTable::CdpCacheEntry : public ydk::Entity
{
    public:
        CdpCacheEntry();
        ~CdpCacheEntry();

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
        ydk::YLeaf cdpcacheduplex; //type: CdpCacheDuplex
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
        class CdpCacheDuplex;

}; // CISCOCDPMIB::CdpCacheTable::CdpCacheEntry


class CISCOCDPMIB::CdpCtAddressTable : public ydk::Entity
{
    public:
        CdpCtAddressTable();
        ~CdpCtAddressTable();

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

        class CdpCtAddressEntry; //type: CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry

        ydk::YList cdpctaddressentry;
        
}; // CISCOCDPMIB::CdpCtAddressTable


class CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry : public ydk::Entity
{
    public:
        CdpCtAddressEntry();
        ~CdpCtAddressEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::cdpcacheifindex)
        ydk::YLeaf cdpcacheifindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_CDP_MIB::CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::cdpcachedeviceindex)
        ydk::YLeaf cdpcachedeviceindex;
        ydk::YLeaf cdpctaddressindex; //type: int32
        ydk::YLeaf cdpctaddresstype; //type: CiscoNetworkProtocol
        ydk::YLeaf cdpctaddress; //type: binary

}; // CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry

class CISCOCDPMIB::CdpGlobal::CdpGlobalDeviceIdFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serialNumber;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "serialNumber") return 1;
            if (name == "macAddress") return 2;
            if (name == "other") return 3;
            return -1;
        }
};

class CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::CdpInterfaceExtendedTrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf noTrust;

        static int get_enum_value(const std::string & name) {
            if (name == "trusted") return 1;
            if (name == "noTrust") return 2;
            return -1;
        }
};

class CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::CdpCacheDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf halfduplex;
        static const ydk::Enum::YLeaf fullduplex;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "halfduplex") return 2;
            if (name == "fullduplex") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_CDP_MIB_ */

