#ifndef _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_lldp_oper {

class LldpSnoopData : public ydk::Entity
{
    public:
        LldpSnoopData();
        ~LldpSnoopData();

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

        class EthernetControllerNames; //type: LldpSnoopData::EthernetControllerNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames> ethernet_controller_names;
        
}; // LldpSnoopData


class LldpSnoopData::EthernetControllerNames : public ydk::Entity
{
    public:
        EthernetControllerNames();
        ~EthernetControllerNames();

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

        class EthernetControllerName; //type: LldpSnoopData::EthernetControllerNames::EthernetControllerName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName> > ethernet_controller_name;
        
}; // LldpSnoopData::EthernetControllerNames


class LldpSnoopData::EthernetControllerNames::EthernetControllerName : public ydk::Entity
{
    public:
        EthernetControllerName();
        ~EthernetControllerName();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_mac; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf port_id_detail; //type: string
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf port_description; //type: string
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf system_capabilities; //type: string
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf lldp_neighbor; //type: string
        ydk::YLeaf drop_enabled; //type: boolean
        ydk::YLeaf rx_lldp_pkts; //type: uint64
        class NetworkAddresses; //type: LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses> network_addresses;
        
}; // LldpSnoopData::EthernetControllerNames::EthernetControllerName


class LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses : public ydk::Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpAddrEntry; //type: LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry> > lldp_addr_entry;
        
}; // LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses


class LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry : public ydk::Entity
{
    public:
        LldpAddrEntry();
        ~LldpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ma_subtype; //type: uint8
        ydk::YLeaf if_num; //type: uint32
        class Address; //type: LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address> address;
        
}; // LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry


class LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: LldpL3AddrProtocol
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address

class LldpL3AddrProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_ */

