#ifndef _CISCO_IOS_XR_QOS_MA_OPER_2_
#define _CISCO_IOS_XR_QOS_MA_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Status

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Status> status;
        
}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf direction; //type: QosMaSatCapsTypeEnumEnum
        YLeaf last_operation; //type: QosCapsOperationEnumEnum
        YLeaf status; //type: string
        YLeaf error_message; //type: string

}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Status


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Status

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Status> status;
        
}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf direction; //type: QosMaSatCapsTypeEnumEnum
        YLeaf last_operation; //type: QosCapsOperationEnumEnum
        YLeaf status; //type: string
        YLeaf error_message; //type: string

}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Status


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Status

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Status> status;
        
}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf direction; //type: QosMaSatCapsTypeEnumEnum
        YLeaf last_operation; //type: QosCapsOperationEnumEnum
        YLeaf status; //type: string
        YLeaf error_message; //type: string

}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Status


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf direction; //type: QosMaSatCapsTypeEnumEnum
        YLeaf last_operation; //type: QosCapsOperationEnumEnum
        YLeaf status; //type: string
        YLeaf error_message; //type: string

}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Status

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Status> status;
        
}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf direction; //type: QosMaSatCapsTypeEnumEnum
        YLeaf last_operation; //type: QosCapsOperationEnumEnum
        YLeaf status; //type: string
        YLeaf error_message; //type: string

}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Status


class Qos::Nodes : public Entity
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

        class Node; //type: Qos::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node> > node;
        
}; // Qos::Nodes


class Qos::Nodes::Node : public Entity
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
        class PolicyMap; //type: Qos::Nodes::Node::PolicyMap

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap> policy_map;
        
}; // Qos::Nodes::Node


class Qos::Nodes::Node::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SharedPolicyInstances; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances
        class InterfaceTable; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances> shared_policy_instances;
        
}; // Qos::Nodes::Node::PolicyMap


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances : public Entity
{
    public:
        SharedPolicyInstances();
        ~SharedPolicyInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SharedPolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance> > shared_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance : public Entity
{
    public:
        SharedPolicyInstance();
        ~SharedPolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spi_name; //type: string
        class MemberInterfaces; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces
        class Input; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input
        class Output; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output> output;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces : public Entity
{
    public:
        MemberInterfaces();
        ~MemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemberInterface; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface> > member_interface;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface : public Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class SatelliteIds; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds
        class Input; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input
        class Output; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds> satellite_ids;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds : public Entity
{
    public:
        SatelliteIds();
        ~SatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SatelliteId; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId> > satellite_id;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId : public Entity
{
    public:
        SatelliteId();
        ~SatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nv_satellite_id; //type: int32
        class Input; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input
        class Output; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output> output;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::SharedPolicyInstances::SharedPolicyInstance::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface> > interface;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface : public Entity
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
        class Nodes_; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_
        class MemberInterfaces; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::MemberInterfaces
        class SatelliteIds; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds
        class Input; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input
        class Output; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_> nodes;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds> satellite_ids;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_ : public Entity
{
    public:
        Nodes_();
        ~Nodes_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node_; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_> > node;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_ : public Entity
{
    public:
        Node_();
        ~Node_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Input; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input
        class Output; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output> output;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Nodes_::Node_::Output::Statistics::ClassStats::CacStats


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_2_ */

