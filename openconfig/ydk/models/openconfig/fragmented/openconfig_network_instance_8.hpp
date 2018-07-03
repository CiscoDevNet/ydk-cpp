#ifndef _OPENCONFIG_NETWORK_INSTANCE_8_
#define _OPENCONFIG_NETWORK_INSTANCE_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"
#include "openconfig_network_instance_2.hpp"
#include "openconfig_network_instance_4.hpp"
#include "openconfig_network_instance_7.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_id; //type: one of union, enumeration
        ydk::YLeaf protection_eligible; //type: boolean
        ydk::YLeaf group; //type: boolean
        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf allocated_dynamic_local; //type: one of union, string
        class SidId;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication : public ydk::Entity
{
    public:
        HelloAuthentication();
        ~HelloAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State
        class Key; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key
        class Keychain; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key> key;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain> keychain;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Key::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication::Keychain


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csnp_interval; //type: uint16
        ydk::YLeaf lsp_pacing_interval; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csnp_interval; //type: uint16
        ydk::YLeaf lsp_pacing_interval; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_tlv; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_tlv; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef::State

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State::SidId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DYNAMIC;

};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_8_ */

