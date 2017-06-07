#ifndef _CISCO_IOS_XE_NATIVE_27_
#define _CISCO_IOS_XE_NATIVE_27_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_26.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Gigabitethernet::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: DynamicEnum
        class Access; //type: Native::Interface::Gigabitethernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::Gigabitethernet::Switchport::Mode::Trunk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Mode::Trunk> trunk; // presence node
                class DynamicEnum;

}; // Native::Interface::Gigabitethernet::Switchport::Mode


class Native::Interface::Gigabitethernet::Switchport::Mode::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Gigabitethernet::Switchport::Mode::Access


class Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel : public Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf promiscuous; //type: empty

}; // Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan


class Native::Interface::Gigabitethernet::Switchport::Mode::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Gigabitethernet::Switchport::Mode::Trunk


class Native::Interface::Gigabitethernet::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Aging; //type: Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Gigabitethernet::Switchport::PortSecurity


class Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging


class Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sticky; //type: empty
        YLeaf hw_address; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress


class Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_addresses; //type: uint16
        YLeaf vlan; //type: string

}; // Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum


class Native::Interface::Gigabitethernet::Switchport::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        class Allowed; //type: Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::Gigabitethernet::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk::Native_> native;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning> pruning;
                class EncapsulationEnum;

}; // Native::Interface::Gigabitethernet::Switchport::Trunk


class Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed : public Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed


class Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlans; //type: string
        YLeaf add; //type: one of uint16, string
        YLeaf all; //type: empty
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan


class Native::Interface::Gigabitethernet::Switchport::Trunk::Native_ : public Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        class VlanEnum;

}; // Native::Interface::Gigabitethernet::Switchport::Trunk::Native_


class Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning : public Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning


class Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf add; //type: one of uint16, string
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList vlans; //type: list of  one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan


class Native::Interface::Gigabitethernet::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Gigabitethernet::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::Gigabitethernet::Switchport::Voice::Detect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Voice::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::Gigabitethernet::Switchport::Voice


class Native::Interface::Gigabitethernet::Switchport::Voice::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, string, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Gigabitethernet::Switchport::Voice::Vlan


class Native::Interface::Gigabitethernet::Switchport::Voice::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CiscoPhone; //type: Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::Gigabitethernet::Switchport::Voice::Detect


class Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone : public Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_duplex; //type: empty

}; // Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::Gigabitethernet::Switchport::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Extend; //type: Native::Interface::Gigabitethernet::Switchport::Priority::Extend

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::Gigabitethernet::Switchport::Priority


class Native::Interface::Gigabitethernet::Switchport::Priority::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        YLeaf cos; //type: uint8

}; // Native::Interface::Gigabitethernet::Switchport::Priority::Extend


class Native::Interface::Gigabitethernet::Switchport::Autostate : public Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude; //type: empty

}; // Native::Interface::Gigabitethernet::Switchport::Autostate


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Association; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation : public Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation


class Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping


class Native::Interface::Gigabitethernet::Switchport::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Gigabitethernet::Switchport::DeviceTracking


class Native::Interface::Gigabitethernet::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Gigabitethernet::Arp


class Native::Interface::Gigabitethernet::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Gigabitethernet::Backup::Delay
        class Interface_; //type: Native::Interface::Gigabitethernet::Backup::Interface_
        class Load; //type: Native::Interface::Gigabitethernet::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Load> load;
        
}; // Native::Interface::Gigabitethernet::Backup


class Native::Interface::Gigabitethernet::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Gigabitethernet::Backup::Delay


class Native::Interface::Gigabitethernet::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Gigabitethernet::Backup::Interface_


class Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface


class Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface


class Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Gigabitethernet::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Gigabitethernet::Backup::Load


class Native::Interface::Gigabitethernet::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Gigabitethernet::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Gigabitethernet::Cemoudp


class Native::Interface::Gigabitethernet::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::Gigabitethernet::Cemoudp::Reserve


class Native::Interface::Gigabitethernet::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Gigabitethernet::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::CwsTunnel::Out> out;
        
}; // Native::Interface::Gigabitethernet::CwsTunnel


class Native::Interface::Gigabitethernet::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Gigabitethernet::CwsTunnel::Out


class Native::Interface::Gigabitethernet::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Gigabitethernet::L2ProtocolTunnel


class Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold


class Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Gigabitethernet::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::Gigabitethernet::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Gigabitethernet::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Gigabitethernet::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Gigabitethernet::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Gigabitethernet::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Gigabitethernet::Encapsulation


class Native::Interface::Gigabitethernet::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::Gigabitethernet::Encapsulation::Dot1Q


class Native::Interface::Gigabitethernet::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::Gigabitethernet::Encapsulation::Isl


class Native::Interface::Gigabitethernet::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Gigabitethernet::Encapsulation::Ppp


class Native::Interface::Gigabitethernet::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Gigabitethernet::Encapsulation::Slip


class Native::Interface::Gigabitethernet::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::Gigabitethernet::Encapsulation::FrameRelay


class Native::Interface::Gigabitethernet::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Gigabitethernet::FairQueueConf


class Native::Interface::Gigabitethernet::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Gigabitethernet::FairQueue


class Native::Interface::Gigabitethernet::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::Gigabitethernet::Flowcontrol


class Native::Interface::Gigabitethernet::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_interval; //type: uint32
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf network; //type: NetworkEnum
        YLeaf protocol; //type: ProtocolEnum
        YLeaf retransmit_interval; //type: uint16
        YLeaf retransmit_throttle_interval; //type: uint16
        YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::Gigabitethernet::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Gigabitethernet::Isis::Advertise
        class Authentication; //type: Native::Interface::Gigabitethernet::Isis::Authentication
        class CircuitType; //type: Native::Interface::Gigabitethernet::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::Gigabitethernet::Isis::CsnpInterval
        class Hello; //type: Native::Interface::Gigabitethernet::Isis::Hello
        class HelloInterval; //type: Native::Interface::Gigabitethernet::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Gigabitethernet::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Gigabitethernet::Isis::Ipv6
        class Metric; //type: Native::Interface::Gigabitethernet::Isis::Metric
        class Password; //type: Native::Interface::Gigabitethernet::Isis::Password
        class Priority; //type: Native::Interface::Gigabitethernet::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::Gigabitethernet::Isis


class Native::Interface::Gigabitethernet::Isis::AdjacencyFilter : public Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf match_all; //type: empty

}; // Native::Interface::Gigabitethernet::Isis::AdjacencyFilter


class Native::Interface::Gigabitethernet::Isis::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: empty

}; // Native::Interface::Gigabitethernet::Isis::Advertise


class Native::Interface::Gigabitethernet::Isis::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mode; //type: Native::Interface::Gigabitethernet::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Gigabitethernet::Isis::Authentication


class Native::Interface::Gigabitethernet::Isis::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Md5; //type: Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Gigabitethernet::Isis::Authentication::Mode


class Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5


class Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text


class Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain


class Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly


class Native::Interface::Gigabitethernet::Isis::CircuitType : public Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Interface::Gigabitethernet::Isis::CircuitType


class Native::Interface::Gigabitethernet::Isis::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Gigabitethernet::Isis::CsnpInterval


class Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList : public Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Gigabitethernet::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Interface::Gigabitethernet::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Gigabitethernet::Isis::Hello


class Native::Interface::Gigabitethernet::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty

}; // Native::Interface::Gigabitethernet::Isis::Hello::Padding


class Native::Interface::Gigabitethernet::Isis::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::HelloInterval


class Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList : public Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint16, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList


class Native::Interface::Gigabitethernet::Isis::HelloMultiplier : public Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Gigabitethernet::Isis::HelloMultiplier


class Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList : public Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Gigabitethernet::Isis::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::Gigabitethernet::Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Gigabitethernet::Isis::Ipv6


class Native::Interface::Gigabitethernet::Isis::Ipv6::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::Ipv6::Metric


class Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList


class Native::Interface::Gigabitethernet::Isis::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Gigabitethernet::Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::Metric


class Native::Interface::Gigabitethernet::Isis::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Gigabitethernet::Isis::Metric::MetricList


class Native::Interface::Gigabitethernet::Isis::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::Gigabitethernet::Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Gigabitethernet::Isis::Password


class Native::Interface::Gigabitethernet::Isis::Password::PasswordList : public Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf password; //type: string
        class LevelsEnum;

}; // Native::Interface::Gigabitethernet::Isis::Password::PasswordList


class Native::Interface::Gigabitethernet::Isis::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::Gigabitethernet::Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::Gigabitethernet::Isis::Priority


class Native::Interface::Gigabitethernet::Isis::Priority::PriorityList : public Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint8
        class LevelsEnum;

}; // Native::Interface::Gigabitethernet::Isis::Priority::PriorityList


class Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake : public Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf implementor; //type: ImplementorEnum
        class ImplementorEnum;

}; // Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake


class Native::Interface::Gigabitethernet::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Gigabitethernet::KeepaliveSettings


class Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive


class Native::Interface::Gigabitethernet::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_; //type: string
        YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::Gigabitethernet::Bfd::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Bfd::Interval> interval;
        
}; // Native::Interface::Gigabitethernet::Bfd


class Native::Interface::Gigabitethernet::Bfd::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msecs; //type: uint16
        YLeaf min_rx; //type: uint16
        YLeaf multiplier; //type: uint8

}; // Native::Interface::Gigabitethernet::Bfd::Interval


class Native::Interface::Gigabitethernet::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Gigabitethernet::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Gigabitethernet::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Bandwidth::Receive> receive;
        
}; // Native::Interface::Gigabitethernet::Bandwidth


class Native::Interface::Gigabitethernet::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::Gigabitethernet::Bandwidth::Receive


class Native::Interface::Gigabitethernet::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::Gigabitethernet::Bandwidth::Inherit


class Native::Interface::Gigabitethernet::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Gigabitethernet::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dampening::Restart> restart;
        
}; // Native::Interface::Gigabitethernet::Dampening


class Native::Interface::Gigabitethernet::Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Gigabitethernet::Dampening::Restart


class Native::Interface::Gigabitethernet::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::Gigabitethernet::Domain


class Native::Interface::Gigabitethernet::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::Gigabitethernet::HoldQueue


class Native::Interface::Gigabitethernet::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: empty
        YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::Gigabitethernet::Mpls::Accounting
        class Bgp; //type: Native::Interface::Gigabitethernet::Mpls::Bgp
        class Label; //type: Native::Interface::Gigabitethernet::Mpls::Label
        class Ldp; //type: Native::Interface::Gigabitethernet::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::Gigabitethernet::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::Gigabitethernet::Mpls


class Native::Interface::Gigabitethernet::Mpls::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experimental; //type: Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::Gigabitethernet::Mpls::Accounting


class Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental : public Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental


class Native::Interface::Gigabitethernet::Mpls::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: empty

}; // Native::Interface::Gigabitethernet::Mpls::Bgp


class Native::Interface::Gigabitethernet::Mpls::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Gigabitethernet::Mpls::Label


class Native::Interface::Gigabitethernet::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discovery; //type: Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery> discovery;
        
}; // Native::Interface::Gigabitethernet::Mpls::Ldp


class Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_address; //type: one of string, enumeration

}; // Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery


class Native::Interface::Gigabitethernet::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf administrative_weight; //type: uint32
        YLeaf attribute_flags; //type: string
        YLeaf backup_path; //type: string
        YLeaf tunnels; //type: empty
        class Flooding; //type: Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding> flooding;
        
}; // Native::Interface::Gigabitethernet::Mpls::TrafficEng


class Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Thresholds; //type: Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding


class Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds : public Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList down; //type: list of  uint8
        YLeafList up; //type: list of  uint8

}; // Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::Gigabitethernet::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::Gigabitethernet::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::IpVrf::Ip> ip;
        
}; // Native::Interface::Gigabitethernet::IpVrf


class Native::Interface::Gigabitethernet::IpVrf::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Gigabitethernet::IpVrf::Ip


class Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf


class Native::Interface::Gigabitethernet::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::Gigabitethernet::Vrf


class Native::Interface::Gigabitethernet::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        YLeaf unreachables; //type: boolean
        class AccessGroup; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup
        class Arp; //type: Native::Interface::Gigabitethernet::Ip::Arp
        class Vrf; //type: Native::Interface::Gigabitethernet::Ip::Vrf
        class NoAddress; //type: Native::Interface::Gigabitethernet::Ip::NoAddress
        class Address; //type: Native::Interface::Gigabitethernet::Ip::Address
        class HelloInterval; //type: Native::Interface::Gigabitethernet::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Gigabitethernet::Ip::Authentication
        class HoldTime; //type: Native::Interface::Gigabitethernet::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Gigabitethernet::Ip::HelperAddress
        class Pim; //type: Native::Interface::Gigabitethernet::Ip::Pim
        class Policy; //type: Native::Interface::Gigabitethernet::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Gigabitethernet::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Gigabitethernet::Ip::RouteCache
        class Router; //type: Native::Interface::Gigabitethernet::Ip::Router
        class Tcp; //type: Native::Interface::Gigabitethernet::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Gigabitethernet::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Gigabitethernet::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Gigabitethernet::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Gigabitethernet::Ip::Verify
        class Flow; //type: Native::Interface::Gigabitethernet::Ip::Flow
        class Igmp; //type: Native::Interface::Gigabitethernet::Ip::Igmp
        class Lisp; //type: Native::Interface::Gigabitethernet::Ip::Lisp
        class Nat; //type: Native::Interface::Gigabitethernet::Ip::Nat
        class Nbar; //type: Native::Interface::Gigabitethernet::Ip::Nbar
        class Ospf; //type: Native::Interface::Gigabitethernet::Ip::Ospf
        class Wccp; //type: Native::Interface::Gigabitethernet::Ip::Wccp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Nbar> nbar;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp> wccp;
        
}; // Native::Interface::Gigabitethernet::Ip


class Native::Interface::Gigabitethernet::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Gigabitethernet::Ip::AccessGroup


class Native::Interface::Gigabitethernet::Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::In


class Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl


class Native::Interface::Gigabitethernet::Ip::AccessGroup::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::Out


class Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl


class Native::Interface::Gigabitethernet::Ip::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inspection; //type: Native::Interface::Gigabitethernet::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Gigabitethernet::Ip::Arp


class Native::Interface::Gigabitethernet::Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Gigabitethernet::Ip::Arp::Inspection


class Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit


class Native::Interface::Gigabitethernet::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Gigabitethernet::Ip::Vrf


class Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding


class Native::Interface::Gigabitethernet::Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::Gigabitethernet::Ip::NoAddress


class Native::Interface::Gigabitethernet::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Gigabitethernet::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Gigabitethernet::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Gigabitethernet::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Gigabitethernet::Ip::Address


class Native::Interface::Gigabitethernet::Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Address::Primary


class Native::Interface::Gigabitethernet::Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::Address::Secondary


class Native::Interface::Gigabitethernet::Ip::Address::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Gigabitethernet::Ip::Address::Dhcp


class Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId


class Native::Interface::Gigabitethernet::Ip::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Gigabitethernet::Ip::HelloInterval


class Native::Interface::Gigabitethernet::Ip::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyChain; //type: Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Gigabitethernet::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Gigabitethernet::Ip::Authentication


class Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain


class Native::Interface::Gigabitethernet::Ip::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::Authentication::Mode


class Native::Interface::Gigabitethernet::Ip::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Gigabitethernet::Ip::HoldTime


class Native::Interface::Gigabitethernet::Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::Gigabitethernet::Ip::HelperAddress


class Native::Interface::Gigabitethernet::Ip::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sparse_mode; //type: SparseModeEnum
        YLeaf nbma_mode; //type: empty
        YLeaf dr_priority; //type: uint32
        YLeaf spt_threshold; //type: SptThresholdEnum
        class AcceptRegister; //type: Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval> query_interval;
                class SparseModeEnum;
        class SptThresholdEnum;

}; // Native::Interface::Gigabitethernet::Ip::Pim


class Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister : public Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister


class Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval : public Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds_interval; //type: uint16
        YLeaf milliseconds_interval; //type: uint16
        YLeaf msec; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval


class Native::Interface::Gigabitethernet::Ip::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Policy


class Native::Interface::Gigabitethernet::Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::Gigabitethernet::Ip::RouteCacheConf


class Native::Interface::Gigabitethernet::Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::Gigabitethernet::Ip::RouteCache


class Native::Interface::Gigabitethernet::Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::Gigabitethernet::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Gigabitethernet::Ip::Router


class Native::Interface::Gigabitethernet::Ip::Router::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Router::Isis


class Native::Interface::Gigabitethernet::Ip::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Gigabitethernet::Ip::Tcp


class Native::Interface::Gigabitethernet::Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::VirtualReassembly


class Native::Interface::Gigabitethernet::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp


class Native::Interface::Gigabitethernet::Ip::Dhcp::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Client


class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Relay


class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_action; //type: PolicyActionEnum
        YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyActionEnum;

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information


class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply : public Entity
{
    public:
        CheckReply();
        ~CheckReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber_id; //type: string

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert : public Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert

class Native::Interface::Gigabitethernet::Switchport::Mode::DynamicEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;

};

class Native::Interface::Gigabitethernet::Switchport::PortSecurity::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class Native::Interface::Gigabitethernet::Switchport::Trunk::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf negotiate;

};

class Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf tag;

};

class Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1p;
        static const Enum::YLeaf none;
        static const Enum::YLeaf untagged;

};

class Native::Interface::Gigabitethernet::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Gigabitethernet::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Gigabitethernet::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Gigabitethernet::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Gigabitethernet::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Gigabitethernet::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Gigabitethernet::Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::Gigabitethernet::Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Gigabitethernet::Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Gigabitethernet::Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Gigabitethernet::Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Gigabitethernet::Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Gigabitethernet::Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class Native::Interface::Gigabitethernet::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Mpls::Label::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;

};

class Native::Interface::Gigabitethernet::Ip::Pim::SparseModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse_dense_mode;
        static const Enum::YLeaf sparse_mode;

};

class Native::Interface::Gigabitethernet::Ip::Pim::SptThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf infinity;

};

class Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_27_ */

