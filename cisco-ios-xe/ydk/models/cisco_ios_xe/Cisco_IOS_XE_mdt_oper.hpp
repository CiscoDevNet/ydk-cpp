#ifndef _CISCO_IOS_XE_MDT_OPER_
#define _CISCO_IOS_XE_MDT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_oper {

class MdtOperData : public ydk::Entity
{
    public:
        MdtOperData();
        ~MdtOperData();

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

        class MdtStreams; //type: MdtOperData::MdtStreams
        class MdtSubscriptions; //type: MdtOperData::MdtSubscriptions
        class MdtConnections; //type: MdtOperData::MdtConnections

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtStreams> mdt_streams;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtSubscriptions> > mdt_subscriptions;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtConnections> > mdt_connections;
        
}; // MdtOperData


class MdtOperData::MdtStreams : public ydk::Entity
{
    public:
        MdtStreams();
        ~MdtStreams();

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

        ydk::YLeafList stream; //type: list of  string

}; // MdtOperData::MdtStreams


class MdtOperData::MdtSubscriptions : public ydk::Entity
{
    public:
        MdtSubscriptions();
        ~MdtSubscriptions();

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

        ydk::YLeaf subscription_id; //type: uint32
        ydk::YLeaf type; //type: MdtSubType
        ydk::YLeaf state; //type: MdtSubState
        ydk::YLeaf comments; //type: string
        ydk::YLeaf updates_in; //type: uint64
        ydk::YLeaf updates_dampened; //type: uint64
        ydk::YLeaf updates_dropped; //type: uint64
        class Base; //type: MdtOperData::MdtSubscriptions::Base
        class MdtReceivers; //type: MdtOperData::MdtSubscriptions::MdtReceivers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtSubscriptions::Base> base;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtSubscriptions::MdtReceivers> > mdt_receivers;
        
}; // MdtOperData::MdtSubscriptions


class MdtOperData::MdtSubscriptions::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream; //type: string
        ydk::YLeaf encoding; //type: string
        ydk::YLeaf source_vrf; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf no_trigger; //type: uint32
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf no_synch_on_start; //type: boolean
        ydk::YLeaf no_filter; //type: uint32
        ydk::YLeaf xpath; //type: string
        ydk::YLeaf tdl_uri; //type: string

}; // MdtOperData::MdtSubscriptions::Base


class MdtOperData::MdtSubscriptions::MdtReceivers : public ydk::Entity
{
    public:
        MdtReceivers();
        ~MdtReceivers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf protocol; //type: string
        ydk::YLeaf state; //type: MdtReceiverState
        ydk::YLeaf comments; //type: string

}; // MdtOperData::MdtSubscriptions::MdtReceivers


class MdtOperData::MdtConnections : public ydk::Entity
{
    public:
        MdtConnections();
        ~MdtConnections();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf source_vrf; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf transport; //type: string
        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf state; //type: MdtConState
        class MdtSubConStats; //type: MdtOperData::MdtConnections::MdtSubConStats

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_oper::MdtOperData::MdtConnections::MdtSubConStats> > mdt_sub_con_stats;
        
}; // MdtOperData::MdtConnections


class MdtOperData::MdtConnections::MdtSubConStats : public ydk::Entity
{
    public:
        MdtSubConStats();
        ~MdtSubConStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_id; //type: uint32
        ydk::YLeaf updates_sent; //type: uint64
        ydk::YLeaf updates_dropped; //type: uint64

}; // MdtOperData::MdtConnections::MdtSubConStats

class MdtSubType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_type_dynamic;
        static const ydk::Enum::YLeaf sub_type_static;

};

class MdtSubState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_state_valid;
        static const ydk::Enum::YLeaf sub_state_suspended;
        static const ydk::Enum::YLeaf sub_state_terminated;
        static const ydk::Enum::YLeaf sub_state_invalid;

};

class MdtReceiverState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rcvr_state_invalid;
        static const ydk::Enum::YLeaf rcvr_state_disconnected;
        static const ydk::Enum::YLeaf rcvr_state_connecting;
        static const ydk::Enum::YLeaf rcvr_state_connected;

};

class MdtConState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf con_state_active;
        static const ydk::Enum::YLeaf con_state_connecting;
        static const ydk::Enum::YLeaf con_state_pending;
        static const ydk::Enum::YLeaf con_state_disconnecting;

};


}
}

#endif /* _CISCO_IOS_XE_MDT_OPER_ */

