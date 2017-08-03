#ifndef _CISCO_IOS_XR_ETHERNET_LLDP_CFG_
#define _CISCO_IOS_XR_ETHERNET_LLDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_lldp_cfg {

class Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

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

        ydk::YLeaf holdtime; //type: uint32
        ydk::YLeaf extended_show_width; //type: boolean
        ydk::YLeaf enable_subintf; //type: boolean
        ydk::YLeaf timer; //type: uint32
        ydk::YLeaf reinit; //type: uint32
        ydk::YLeaf enable; //type: boolean
        class TlvSelect; //type: Lldp::TlvSelect

        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect> tlv_select; // presence node
        
}; // Lldp


class Lldp::TlvSelect : public ydk::Entity
{
    public:
        TlvSelect();
        ~TlvSelect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_select_enter; //type: boolean
        class SystemName; //type: Lldp::TlvSelect::SystemName
        class PortDescription; //type: Lldp::TlvSelect::PortDescription
        class SystemDescription; //type: Lldp::TlvSelect::SystemDescription
        class SystemCapabilities; //type: Lldp::TlvSelect::SystemCapabilities
        class ManagementAddress; //type: Lldp::TlvSelect::ManagementAddress

        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::ManagementAddress> management_address;
        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::PortDescription> port_description;
        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemCapabilities> system_capabilities;
        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemDescription> system_description;
        std::shared_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemName> system_name;
        
}; // Lldp::TlvSelect


class Lldp::TlvSelect::SystemName : public ydk::Entity
{
    public:
        SystemName();
        ~SystemName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // Lldp::TlvSelect::SystemName


class Lldp::TlvSelect::PortDescription : public ydk::Entity
{
    public:
        PortDescription();
        ~PortDescription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // Lldp::TlvSelect::PortDescription


class Lldp::TlvSelect::SystemDescription : public ydk::Entity
{
    public:
        SystemDescription();
        ~SystemDescription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // Lldp::TlvSelect::SystemDescription


class Lldp::TlvSelect::SystemCapabilities : public ydk::Entity
{
    public:
        SystemCapabilities();
        ~SystemCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // Lldp::TlvSelect::SystemCapabilities


class Lldp::TlvSelect::ManagementAddress : public ydk::Entity
{
    public:
        ManagementAddress();
        ~ManagementAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // Lldp::TlvSelect::ManagementAddress


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LLDP_CFG_ */

