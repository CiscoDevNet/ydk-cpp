#ifndef _CISCO_IOS_XR_IPV4_ARP_CFG_
#define _CISCO_IOS_XR_IPV4_ARP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_cfg {

class Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf max_entries; //type: uint32
        YLeaf inner_cos; //type: uint32
        YLeaf outer_cos; //type: uint32



}; // Arp

class Arpgmp : public Entity
{
    public:
        Arpgmp();
        ~Arpgmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Vrf; //type: Arpgmp::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf> > vrf;


}; // Arpgmp


class Arpgmp::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Entries; //type: Arpgmp::Vrf::Entries

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf::Entries> entries;


}; // Arpgmp::Vrf


class Arpgmp::Vrf::Entries : public Entity
{
    public:
        Entries();
        ~Entries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Entry; //type: Arpgmp::Vrf::Entries::Entry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf::Entries::Entry> > entry;


}; // Arpgmp::Vrf::Entries


class Arpgmp::Vrf::Entries::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mac_address; //type: string
        YLeaf encapsulation; //type: ArpEncapEnum
        YLeaf entry_type; //type: ArpEntryEnum
        YLeaf interface; //type: string



}; // Arpgmp::Vrf::Entries::Entry

class ArpRedundancy : public Entity
{
    public:
        ArpRedundancy();
        ~ArpRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Redundancy; //type: ArpRedundancy::Redundancy

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy> redundancy; // presence node


}; // ArpRedundancy


class ArpRedundancy::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Groups; //type: ArpRedundancy::Redundancy::Groups

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups> groups;


}; // ArpRedundancy::Redundancy


class ArpRedundancy::Redundancy::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: ArpRedundancy::Redundancy::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group> > group;


}; // ArpRedundancy::Redundancy::Groups


class ArpRedundancy::Redundancy::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_id; //type: uint32
        YLeaf source_interface; //type: string

        class Peers; //type: ArpRedundancy::Redundancy::Groups::Group::Peers
        class InterfaceList; //type: ArpRedundancy::Redundancy::Groups::Group::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList> interface_list; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::Peers> peers;


}; // ArpRedundancy::Redundancy::Groups::Group


class ArpRedundancy::Redundancy::Groups::Group::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ArpRedundancy::Redundancy::Groups::Group::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::Peers::Peer> > peer;


}; // ArpRedundancy::Redundancy::Groups::Group::Peers


class ArpRedundancy::Redundancy::Groups::Group::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_string; //type: string



}; // ArpRedundancy::Redundancy::Groups::Group::Peers::Peer


class ArpRedundancy::Redundancy::Groups::Group::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Interfaces; //type: ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces> interfaces;


}; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList


class ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface> > interface;


}; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces


class ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_id; //type: uint32



}; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface

class ArpEntryEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf alias;

};

class ArpEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf arpa;
        static const Enum::YLeaf srp;
        static const Enum::YLeaf srpa;
        static const Enum::YLeaf srpb;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ARP_CFG_ */

