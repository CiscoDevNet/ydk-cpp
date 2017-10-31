#ifndef _OPENCONFIG_LACP_
#define _OPENCONFIG_LACP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_lacp {

class Lacp : public ydk::Entity
{
    public:
        Lacp();
        ~Lacp();

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

        class Config; //type: Lacp::Config
        class State; //type: Lacp::State
        class Interfaces; //type: Lacp::Interfaces

        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Config> config;
        std::shared_ptr<openconfig::openconfig_lacp::Lacp::State> state;
        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces> interfaces;
        
}; // Lacp


class Lacp::Config : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16

}; // Lacp::Config


class Lacp::State : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16

}; // Lacp::State


class Lacp::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Lacp::Interfaces::Interface

        std::vector<std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface> > interface;
        
}; // Lacp::Interfaces


class Lacp::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        //type: leafref (refers to openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Config::name)
        ydk::YLeaf name;
        class Config; //type: Lacp::Interfaces::Interface::Config
        class State; //type: Lacp::Interfaces::Interface::State
        class Members; //type: Lacp::Interfaces::Interface::Members

        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Members> members;
        
}; // Lacp::Interfaces::Interface


class Lacp::Interfaces::Interface::Config : public ydk::Entity
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
        ydk::YLeaf name;
        ydk::YLeaf interval; //type: LacpPeriodType
        ydk::YLeaf lacp_mode; //type: LacpActivityType
        ydk::YLeaf system_id_mac; //type: string
        ydk::YLeaf system_priority; //type: uint16

}; // Lacp::Interfaces::Interface::Config


class Lacp::Interfaces::Interface::State : public ydk::Entity
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
        ydk::YLeaf name;
        ydk::YLeaf interval; //type: LacpPeriodType
        ydk::YLeaf lacp_mode; //type: LacpActivityType
        ydk::YLeaf system_id_mac; //type: string
        ydk::YLeaf system_priority; //type: uint16

}; // Lacp::Interfaces::Interface::State


class Lacp::Interfaces::Interface::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: Lacp::Interfaces::Interface::Members::Member

        std::vector<std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Members::Member> > member;
        
}; // Lacp::Interfaces::Interface::Members


class Lacp::Interfaces::Interface::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Members::Member::State::interface)
        ydk::YLeaf interface;
        class State; //type: Lacp::Interfaces::Interface::Members::Member::State

        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Members::Member::State> state;
        
}; // Lacp::Interfaces::Interface::Members::Member


class Lacp::Interfaces::Interface::Members::Member::State : public ydk::Entity
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
        ydk::YLeaf activity; //type: LacpActivityType
        ydk::YLeaf timeout; //type: LacpTimeoutType
        ydk::YLeaf synchronization; //type: LacpSynchronizationType
        ydk::YLeaf aggregatable; //type: boolean
        ydk::YLeaf collecting; //type: boolean
        ydk::YLeaf distributing; //type: boolean
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf oper_key; //type: uint16
        ydk::YLeaf partner_id; //type: string
        ydk::YLeaf partner_key; //type: uint16
        class Counters; //type: Lacp::Interfaces::Interface::Members::Member::State::Counters

        std::shared_ptr<openconfig::openconfig_lacp::Lacp::Interfaces::Interface::Members::Member::State::Counters> counters;
        
}; // Lacp::Interfaces::Interface::Members::Member::State


class Lacp::Interfaces::Interface::Members::Member::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacp_in_pkts; //type: uint64
        ydk::YLeaf lacp_out_pkts; //type: uint64
        ydk::YLeaf lacp_rx_errors; //type: uint64
        ydk::YLeaf lacp_tx_errors; //type: uint64
        ydk::YLeaf lacp_unknown_errors; //type: uint64
        ydk::YLeaf lacp_errors; //type: uint64

}; // Lacp::Interfaces::Interface::Members::Member::State::Counters

class LacpActivityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf PASSIVE;

};

class LacpTimeoutType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LONG;
        static const ydk::Enum::YLeaf SHORT;

};

class LacpSynchronizationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IN_SYNC;
        static const ydk::Enum::YLeaf OUT_SYNC;

};

class LacpPeriodType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FAST;
        static const ydk::Enum::YLeaf SLOW;

};


}
}

#endif /* _OPENCONFIG_LACP_ */

