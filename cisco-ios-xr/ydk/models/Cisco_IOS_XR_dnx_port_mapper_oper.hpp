#ifndef _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_
#define _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class BundleInterfaceDetails : public Entity
            {
                public:
                    BundleInterfaceDetails();
                    ~BundleInterfaceDetails();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BundleInterfaceDetail : public Entity
                {
                    public:
                        BundleInterfaceDetail();
                        ~BundleInterfaceDetail();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: int32
                        Value interface_state; //type: string
                        Value time_stamp; //type: string


                    class Member : public Entity
                    {
                        public:
                            Member();
                            ~Member();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value interface_status; //type: string
                            Value time_stamp; //type: string
                            Value npu_id; //type: string
                            Value hardware_resource; //type: string




                    }; // Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member> > member;


                }; // Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail> > bundle_interface_detail;


            }; // Oor::Nodes::Node::BundleInterfaceDetails


            class InterfaceDetails : public Entity
            {
                public:
                    InterfaceDetails();
                    ~InterfaceDetails();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceDetail : public Entity
                {
                    public:
                        InterfaceDetail();
                        ~InterfaceDetail();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: int32
                        Value interface_name; //type: string
                        Value interface_status; //type: string
                        Value time_stamp; //type: string
                        Value npu_id; //type: string
                        Value hardware_resource; //type: string




                }; // Oor::Nodes::Node::InterfaceDetails::InterfaceDetail


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceDetails::InterfaceDetail> > interface_detail;


            }; // Oor::Nodes::Node::InterfaceDetails


            class InterfaceSummaryDatas : public Entity
            {
                public:
                    InterfaceSummaryDatas();
                    ~InterfaceSummaryDatas();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceSummaryData : public Entity
                {
                    public:
                        InterfaceSummaryData();
                        ~InterfaceSummaryData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: int32
                        Value interface_name; //type: string
                        Value interface_status; //type: string
                        Value hardware_resource; //type: string




                }; // Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData> > interface_summary_data;


            }; // Oor::Nodes::Node::InterfaceSummaryDatas


            class OorSummary : public Entity
            {
                public:
                    OorSummary();
                    ~OorSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value red; //type: uint32
                    Value green; //type: uint32
                    Value yel_low; //type: uint32




            }; // Oor::Nodes::Node::OorSummary


                std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::BundleInterfaceDetails> bundle_interface_details;
                std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceDetails> interface_details;
                std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::InterfaceSummaryDatas> interface_summary_datas;
                std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node::OorSummary> oor_summary;


        }; // Oor::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes::Node> > node;


    }; // Oor::Nodes


        std::unique_ptr<Cisco_IOS_XR_dnx_port_mapper_oper::Oor::Nodes> nodes;


}; // Oor



}
}

#endif /* _CISCO_IOS_XR_DNX_PORT_MAPPER_OPER_ */

