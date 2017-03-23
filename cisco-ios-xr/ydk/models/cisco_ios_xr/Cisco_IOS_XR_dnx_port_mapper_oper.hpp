#ifndef _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_
#define _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_dnx_port_mapper_oper {

class Oor : public Entity
{
    public:
        Oor();
        ~Oor();

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



        class Nodes; //type: Oor::Nodes

        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes> nodes;


}; // Oor


class Oor::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Oor::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node> > node;


}; // Oor::Nodes


class Oor::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class InterfaceNpuResources; //type: Oor::Nodes::Node::InterfaceNpuResources
        class BundleInterfaceDetails; //type: Oor::Nodes::Node::BundleInterfaceDetails
        class InterfaceDetails; //type: Oor::Nodes::Node::InterfaceDetails
        class InterfaceSummaryDatas; //type: Oor::Nodes::Node::InterfaceSummaryDatas
        class OorSummary; //type: Oor::Nodes::Node::OorSummary

        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails> bundle_interface_details;
        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceDetails> interface_details;
        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceNpuResources> interface_npu_resources;
        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceSummaryDatas> interface_summary_datas;
        std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::OorSummary> oor_summary;


}; // Oor::Nodes::Node


class Oor::Nodes::Node::InterfaceNpuResources : public Entity
{
    public:
        InterfaceNpuResources();
        ~InterfaceNpuResources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNpuResource; //type: Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource> > interface_npu_resource;


}; // Oor::Nodes::Node::InterfaceNpuResources


class Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource : public Entity
{
    public:
        InterfaceNpuResource();
        ~InterfaceNpuResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf name; //type: string
        YLeaf max_entries; //type: uint32
        YLeaf red_threshold; //type: uint32
        YLeaf red_threshold_percent; //type: uint32
        YLeaf yellow_threshold; //type: uint32
        YLeaf yellow_threshold_percent; //type: uint32
        YLeaf interface_state; //type: string
        YLeaf time_stamp; //type: string
        YLeaf number_of_members; //type: uint32

        class Member; //type: Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member> > member;


}; // Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource


class Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf location; //type: string
        YLeaf npu_id; //type: uint32
        YLeaf total_in_use; //type: uint32
        YLeaf total_in_use_percent; //type: uint32
        YLeaf number_of_dpa_tables; //type: uint32

        class DpaTable; //type: Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member::DpaTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member::DpaTable> > dpa_table;


}; // Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member


class Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member::DpaTable : public Entity
{
    public:
        DpaTable();
        ~DpaTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf in_use; //type: uint32
        YLeaf in_use_percent; //type: uint32



}; // Oor::Nodes::Node::InterfaceNpuResources::InterfaceNpuResource::Member::DpaTable


class Oor::Nodes::Node::BundleInterfaceDetails : public Entity
{
    public:
        BundleInterfaceDetails();
        ~BundleInterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleInterfaceDetail; //type: Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail> > bundle_interface_detail;


}; // Oor::Nodes::Node::BundleInterfaceDetails


class Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail : public Entity
{
    public:
        BundleInterfaceDetail();
        ~BundleInterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: int32
        YLeaf interface_state; //type: string
        YLeaf time_stamp; //type: string

        class Member; //type: Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member> > member;


}; // Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail


class Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_status; //type: string
        YLeaf time_stamp; //type: string
        YLeaf npu_id; //type: string
        YLeaf hardware_resource; //type: string



}; // Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member


class Oor::Nodes::Node::InterfaceDetails : public Entity
{
    public:
        InterfaceDetails();
        ~InterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceDetail; //type: Oor::Nodes::Node::InterfaceDetails::InterfaceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceDetails::InterfaceDetail> > interface_detail;


}; // Oor::Nodes::Node::InterfaceDetails


class Oor::Nodes::Node::InterfaceDetails::InterfaceDetail : public Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: int32
        YLeaf interface_name; //type: string
        YLeaf interface_status; //type: string
        YLeaf time_stamp; //type: string
        YLeaf npu_id; //type: string
        YLeaf hardware_resource; //type: string



}; // Oor::Nodes::Node::InterfaceDetails::InterfaceDetail


class Oor::Nodes::Node::InterfaceSummaryDatas : public Entity
{
    public:
        InterfaceSummaryDatas();
        ~InterfaceSummaryDatas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceSummaryData; //type: Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData> > interface_summary_data;


}; // Oor::Nodes::Node::InterfaceSummaryDatas


class Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData : public Entity
{
    public:
        InterfaceSummaryData();
        ~InterfaceSummaryData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: int32
        YLeaf interface_name; //type: string
        YLeaf interface_status; //type: string
        YLeaf hardware_resource; //type: string



}; // Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData


class Oor::Nodes::Node::OorSummary : public Entity
{
    public:
        OorSummary();
        ~OorSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf red; //type: uint32
        YLeaf green; //type: uint32
        YLeaf yel_low; //type: uint32



}; // Oor::Nodes::Node::OorSummary


}
}

#endif /* _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_ */

