#ifndef _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_oper {

class Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class AccessInterfaceStatistics; //type: Pppoe::AccessInterfaceStatistics
        class Nodes; //type: Pppoe::Nodes

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics> access_interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes> nodes;
        
}; // Pppoe


class Pppoe::AccessInterfaceStatistics : public Entity
{
    public:
        AccessInterfaceStatistics();
        ~AccessInterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessInterfaceStatistic; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic> > access_interface_statistic;
        
}; // Pppoe::AccessInterfaceStatistics


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic : public Entity
{
    public:
        AccessInterfaceStatistic();
        ~AccessInterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class PacketCounts; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts> packet_counts;
        
}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts : public Entity
{
    public:
        PacketCounts();
        ~PacketCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padi; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi
        class Pado; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado
        class Padr; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr
        class PadsSuccess; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess
        class PadsError; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError
        class Padt; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt
        class SessionState; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState
        class Other; //type: Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other> other;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi> padi;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado> pado;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr> padr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError> pads_error;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess> pads_success;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt> padt;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState> session_state;
        
}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi : public Entity
{
    public:
        Padi();
        ~Padi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado : public Entity
{
    public:
        Pado();
        ~Pado();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr : public Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess : public Entity
{
    public:
        PadsSuccess();
        ~PadsSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError : public Entity
{
    public:
        PadsError();
        ~PadsError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt : public Entity
{
    public:
        Padt();
        ~Padt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState


class Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other : public Entity
{
    public:
        Other();
        ~Other();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other


class Pppoe::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Pppoe::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node> > node;
        
}; // Pppoe::Nodes


class Pppoe::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Statistics; //type: Pppoe::Nodes::Node::Statistics
        class AccessInterface; //type: Pppoe::Nodes::Node::AccessInterface
        class Interfaces; //type: Pppoe::Nodes::Node::Interfaces
        class BbaGroups; //type: Pppoe::Nodes::Node::BbaGroups
        class SummaryTotal; //type: Pppoe::Nodes::Node::SummaryTotal

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups> bba_groups;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::SummaryTotal> summary_total;
        
}; // Pppoe::Nodes::Node


class Pppoe::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PacketCounts; //type: Pppoe::Nodes::Node::Statistics::PacketCounts
        class PacketErrorCounts; //type: Pppoe::Nodes::Node::Statistics::PacketErrorCounts

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts> packet_counts;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketErrorCounts> packet_error_counts;
        
}; // Pppoe::Nodes::Node::Statistics


class Pppoe::Nodes::Node::Statistics::PacketCounts : public Entity
{
    public:
        PacketCounts();
        ~PacketCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padi; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padi
        class Pado; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Pado
        class Padr; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padr
        class PadsSuccess; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess
        class PadsError; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError
        class Padt; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Padt
        class SessionState; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState
        class Other; //type: Pppoe::Nodes::Node::Statistics::PacketCounts::Other

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Other> other;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padi> padi;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Pado> pado;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padr> padr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError> pads_error;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess> pads_success;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::Padt> padt;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState> session_state;
        
}; // Pppoe::Nodes::Node::Statistics::PacketCounts


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padi : public Entity
{
    public:
        Padi();
        ~Padi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padi


class Pppoe::Nodes::Node::Statistics::PacketCounts::Pado : public Entity
{
    public:
        Pado();
        ~Pado();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Pado


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padr : public Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padr


class Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess : public Entity
{
    public:
        PadsSuccess();
        ~PadsSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess


class Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError : public Entity
{
    public:
        PadsError();
        ~PadsError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError


class Pppoe::Nodes::Node::Statistics::PacketCounts::Padt : public Entity
{
    public:
        Padt();
        ~Padt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Padt


class Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState


class Pppoe::Nodes::Node::Statistics::PacketCounts::Other : public Entity
{
    public:
        Other();
        ~Other();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent; //type: uint32
        YLeaf received; //type: uint32
        YLeaf dropped; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketCounts::Other


class Pppoe::Nodes::Node::Statistics::PacketErrorCounts : public Entity
{
    public:
        PacketErrorCounts();
        ~PacketErrorCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_interface_handle; //type: uint32
        YLeaf no_packet_payload; //type: uint32
        YLeaf no_packet_mac_address; //type: uint32
        YLeaf invalid_version_type_value; //type: uint32
        YLeaf bad_packet_length; //type: uint32
        YLeaf unknown_interface; //type: uint32
        YLeaf pado_received; //type: uint32
        YLeaf pads_received; //type: uint32
        YLeaf unknown_packet_type_received; //type: uint32
        YLeaf unexpected_session_id_in_packet; //type: uint32
        YLeaf no_service_name_tag; //type: uint32
        YLeaf padt_for_unknown_session; //type: uint32
        YLeaf padt_with_wrong_peer_mac; //type: uint32
        YLeaf padt_with_wrong_vlan_tags; //type: uint32
        YLeaf zero_length_host_uniq; //type: uint32
        YLeaf padt_before_pads_sent; //type: uint32
        YLeaf session_stage_packet_for_unknown_session; //type: uint32
        YLeaf session_stage_packet_with_wrong_mac; //type: uint32
        YLeaf session_stage_packet_with_wrong_vlan_tags; //type: uint32
        YLeaf session_stage_packet_with_no_error; //type: uint32
        YLeaf tag_too_short; //type: uint32
        YLeaf bad_tag_length_field; //type: uint32
        YLeaf multiple_service_name_tags; //type: uint32
        YLeaf multiple_max_payload_tags; //type: uint32
        YLeaf invalid_max_payload_tag; //type: uint32
        YLeaf multiple_vendor_specific_tags; //type: uint32
        YLeaf unexpected_ac_name_tag; //type: uint32
        YLeaf unexpected_error_tags; //type: uint32
        YLeaf unknown_tag_received; //type: uint32
        YLeaf no_iana_code_invendor_tag; //type: uint32
        YLeaf invalid_iana_code_invendor_tag; //type: uint32
        YLeaf vendor_tag_too_short; //type: uint32
        YLeaf bad_vendor_tag_length_field; //type: uint32
        YLeaf multiple_host_uniq_tags; //type: uint32
        YLeaf multiple_relay_session_id_tags; //type: uint32
        YLeaf multiple_circuit_id_tags; //type: uint32
        YLeaf multiple_remote_id_tags; //type: uint32
        YLeaf invalid_dsl_tag; //type: uint32
        YLeaf multiple_of_the_same_dsl_tag; //type: uint32
        YLeaf invalid_iwf_tag; //type: uint32
        YLeaf multiple_iwf_tags; //type: uint32
        YLeaf unknownvendor_tag; //type: uint32
        YLeaf no_space_left_in_packet; //type: uint32
        YLeaf duplicate_host_uniq_tag_received; //type: uint32
        YLeaf duplicate_relay_session_id_tag_received; //type: uint32
        YLeaf packet_too_long; //type: uint32
        YLeaf invalid_ale_tag; //type: uint32
        YLeaf multiple_ale_tags; //type: uint32
        YLeaf invalid_service_name; //type: uint32
        YLeaf invalid_peer_mac; //type: uint32
        YLeaf invalid_vlan_tags; //type: uint32
        YLeaf packet_on_srg_slave; //type: uint32

}; // Pppoe::Nodes::Node::Statistics::PacketErrorCounts


class Pppoe::Nodes::Node::AccessInterface : public Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summaries; //type: Pppoe::Nodes::Node::AccessInterface::Summaries

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::AccessInterface::Summaries> summaries;
        
}; // Pppoe::Nodes::Node::AccessInterface


class Pppoe::Nodes::Node::AccessInterface::Summaries : public Entity
{
    public:
        Summaries();
        ~Summaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Pppoe::Nodes::Node::AccessInterface::Summaries::Summary

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::AccessInterface::Summaries::Summary> > summary;
        
}; // Pppoe::Nodes::Node::AccessInterface::Summaries


class Pppoe::Nodes::Node::AccessInterface::Summaries::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_state; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf bba_group_name; //type: string
        YLeaf is_ready; //type: int32
        YLeaf sessions; //type: uint32
        YLeaf incomplete_sessions; //type: uint32

}; // Pppoe::Nodes::Node::AccessInterface::Summaries::Summary


class Pppoe::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Pppoe::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces::Interface> > interface;
        
}; // Pppoe::Nodes::Node::Interfaces


class Pppoe::Nodes::Node::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf access_interface_name; //type: string
        YLeaf bba_group_name; //type: string
        YLeaf session_id; //type: uint16
        YLeaf local_mac_address; //type: string
        YLeaf peer_mac_address; //type: string
        YLeaf is_complete; //type: int32
        YLeaf vlan_outer_id; //type: uint16
        YLeaf vlan_inner_id; //type: uint16
        YLeaf srg_state; //type: PppoeMaSessionIdbSrgStateEnum
        class Tags; //type: Pppoe::Nodes::Node::Interfaces::Interface::Tags

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces::Interface::Tags> tags;
        
}; // Pppoe::Nodes::Node::Interfaces::Interface


class Pppoe::Nodes::Node::Interfaces::Interface::Tags : public Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_name; //type: string
        YLeaf max_payload; //type: uint16
        YLeaf host_uniq; //type: string
        YLeaf relay_session_id; //type: string
        YLeaf remote_id; //type: string
        YLeaf circuit_id; //type: string
        YLeaf is_iwf; //type: int32
        YLeaf dsl_actual_up; //type: uint32
        YLeaf dsl_actual_down; //type: uint32
        YLeaf dsl_min_up; //type: uint32
        YLeaf dsl_min_down; //type: uint32
        YLeaf dsl_attain_up; //type: uint32
        YLeaf dsl_attain_down; //type: uint32
        YLeaf dsl_max_up; //type: uint32
        YLeaf dsl_max_down; //type: uint32
        YLeaf dsl_min_up_low; //type: uint32
        YLeaf dsl_min_down_low; //type: uint32
        YLeaf dsl_max_delay_up; //type: uint32
        YLeaf dsl_actual_delay_up; //type: uint32
        YLeaf dsl_max_delay_down; //type: uint32
        YLeaf dsl_actual_delay_down; //type: uint32
        class AccessLoopEncapsulation; //type: Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation> access_loop_encapsulation;
        
}; // Pppoe::Nodes::Node::Interfaces::Interface::Tags


class Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation : public Entity
{
    public:
        AccessLoopEncapsulation();
        ~AccessLoopEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_link; //type: uint8
        YLeaf encaps1; //type: uint8
        YLeaf encaps2; //type: uint8

}; // Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation


class Pppoe::Nodes::Node::BbaGroups : public Entity
{
    public:
        BbaGroups();
        ~BbaGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BbaGroup; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup> > bba_group;
        
}; // Pppoe::Nodes::Node::BbaGroups


class Pppoe::Nodes::Node::BbaGroups::BbaGroup : public Entity
{
    public:
        BbaGroup();
        ~BbaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bba_group_name; //type: string
        class LimitConfig; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig
        class Limits; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits
        class Throttles; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles
        class ThrottleConfig; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig> limit_config;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits> limits;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig> throttle_config;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles> throttles;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig : public Entity
{
    public:
        LimitConfig();
        ~LimitConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Card; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card
        class AccessIntf; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf
        class Mac; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac
        class MacIwf; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf
        class MacAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface
        class MacIwfAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface
        class CircuitId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId
        class RemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId
        class CircuitIdAndRemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId
        class OuterVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId
        class InnerVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId
        class VlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf> access_intf;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card> card;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId> circuit_id_and_remote_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId> inner_vlan_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac> mac;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface> mac_access_interface;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf> mac_iwf;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface> mac_iwf_access_interface;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId> outer_vlan_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId> vlan_id;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card : public Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf : public Entity
{
    public:
        AccessIntf();
        ~AccessIntf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf : public Entity
{
    public:
        MacIwf();
        ~MacIwf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface : public Entity
{
    public:
        MacAccessInterface();
        ~MacAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface : public Entity
{
    public:
        MacIwfAccessInterface();
        ~MacIwfAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId : public Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId : public Entity
{
    public:
        CircuitIdAndRemoteId();
        ~CircuitIdAndRemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId : public Entity
{
    public:
        OuterVlanId();
        ~OuterVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId : public Entity
{
    public:
        InnerVlanId();
        ~InnerVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId : public Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf radius_override_enabled; //type: int32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits : public Entity
{
    public:
        Limits();
        ~Limits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit> > limit;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf mac_address; //type: string
        YLeaf iwf; //type: boolean
        YLeaf circuit_id; //type: string
        YLeaf remote_id; //type: string
        YLeaf outer_vlan_id; //type: uint32
        YLeaf inner_vlan_id; //type: uint32
        YLeaf state; //type: PppoeMaLimitStateEnum
        YLeaf session_count; //type: uint32
        YLeaf radius_override_set; //type: int32
        YLeaf override_limit; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles : public Entity
{
    public:
        Throttles();
        ~Throttles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Throttle; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle> > throttle;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf mac_address; //type: string
        YLeaf iwf; //type: boolean
        YLeaf circuit_id; //type: string
        YLeaf remote_id; //type: string
        YLeaf outer_vlan_id; //type: uint32
        YLeaf inner_vlan_id; //type: uint32
        YLeaf state; //type: PppoeMaThrottleStateEnum
        YLeaf time_left; //type: uint32
        YLeaf since_reset; //type: uint32
        YLeaf padi_count; //type: uint32
        YLeaf padr_count; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig : public Entity
{
    public:
        ThrottleConfig();
        ~ThrottleConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac
        class MacAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface
        class MacIwfAccessInterface; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface
        class CircuitId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId
        class RemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId
        class CircuitIdAndRemoteId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId
        class OuterVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId
        class InnerVlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId
        class VlanId; //type: Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId> circuit_id_and_remote_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId> inner_vlan_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac> mac;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface> mac_access_interface;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface> mac_iwf_access_interface;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId> outer_vlan_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_oper::Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId> vlan_id;
        
}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface : public Entity
{
    public:
        MacAccessInterface();
        ~MacAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface : public Entity
{
    public:
        MacIwfAccessInterface();
        ~MacIwfAccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId : public Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId : public Entity
{
    public:
        CircuitIdAndRemoteId();
        ~CircuitIdAndRemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId : public Entity
{
    public:
        OuterVlanId();
        ~OuterVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId : public Entity
{
    public:
        InnerVlanId();
        ~InnerVlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId


class Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId : public Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId


class Pppoe::Nodes::Node::SummaryTotal : public Entity
{
    public:
        SummaryTotal();
        ~SummaryTotal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ready_access_interfaces; //type: uint32
        YLeaf not_ready_access_interfaces; //type: uint32
        YLeaf complete_sessions; //type: uint32
        YLeaf incomplete_sessions; //type: uint32
        YLeaf flow_control_limit; //type: uint32
        YLeaf flow_control_in_flight_sessions; //type: uint32
        YLeaf flow_control_dropped_sessions; //type: uint64
        YLeaf flow_control_disconnected_sessions; //type: uint64
        YLeaf flow_control_successful_sessions; //type: uint64
        YLeaf pppoema_subscriber_infra_flow_control; //type: uint32

}; // Pppoe::Nodes::Node::SummaryTotal

class PppoeMaThrottleStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf monitor;
        static const Enum::YLeaf block;

};

class PppoeMaLimitStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf block;

};

class PppoeMaSessionIdbSrgStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf active;
        static const Enum::YLeaf standby;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_OPER_ */

