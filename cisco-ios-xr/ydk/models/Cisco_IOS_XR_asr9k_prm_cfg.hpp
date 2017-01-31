#ifndef _CISCO_IOS_XR_ASR9K_PRM_CFG_
#define _CISCO_IOS_XR_ASR9K_PRM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

class HardwareModuleQosMode : public Entity
{
    public:
        HardwareModuleQosMode();
        ~HardwareModuleQosMode();

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


                YLeaf node_name; //type: string
                YLeaf child_shaping_disable; //type: empty
                YLeaf lowburst_enable; //type: empty



        }; // HardwareModuleQosMode::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode::Nodes::Node> > node;


    }; // HardwareModuleQosMode::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode::Nodes> nodes;


}; // HardwareModuleQosMode

class HardwareModuleTcpMssAdjust : public Entity
{
    public:
        HardwareModuleTcpMssAdjust();
        ~HardwareModuleTcpMssAdjust();

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


                YLeaf node_name; //type: string

            class Nps : public Entity
            {
                public:
                    Nps();
                    ~Nps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Np : public Entity
                {
                    public:
                        Np();
                        ~Np();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf np_id; //type: uint32
                        YLeaf adjust_value; //type: uint32



                }; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np> > np;


            }; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps


                std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node::Nps> nps;


        }; // HardwareModuleTcpMssAdjust::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node> > node;


    }; // HardwareModuleTcpMssAdjust::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes> nodes;


}; // HardwareModuleTcpMssAdjust

class HardwareModuleLoadBalance : public Entity
{
    public:
        HardwareModuleLoadBalance();
        ~HardwareModuleLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Bundle : public Entity
    {
        public:
            Bundle();
            ~Bundle();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class L2Service : public Entity
        {
            public:
                L2Service();
                ~L2Service();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf l3_parameters; //type: empty



        }; // HardwareModuleLoadBalance::Bundle::L2Service


            std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance::Bundle::L2Service> l2_service;


    }; // HardwareModuleLoadBalance::Bundle


        std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance::Bundle> bundle;


}; // HardwareModuleLoadBalance

class HardwareModuleTcam : public Entity
{
    public:
        HardwareModuleTcam();
        ~HardwareModuleTcam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf global_profile; //type: PrmTcamProfileEnum

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


                YLeaf node_name; //type: string
                YLeaf profile; //type: PrmTcamProfileEnum



        }; // HardwareModuleTcam::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam::Nodes::Node> > node;


    }; // HardwareModuleTcam::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam::Nodes> nodes;


}; // HardwareModuleTcam

class HardwareModuleEfd : public Entity
{
    public:
        HardwareModuleEfd();
        ~HardwareModuleEfd();

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


                YLeaf node_name; //type: string
                YLeaf enable; //type: empty
                YLeaf mode; //type: Asr9KEfdModeEnum

            class IpPrecedence : public Entity
            {
                public:
                    IpPrecedence();
                    ~IpPrecedence();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf precedence; //type: uint32
                    YLeaf operation_; //type: Asr9KEfdOperationEnum



            }; // HardwareModuleEfd::Nodes::Node::IpPrecedence


            class VlanCos : public Entity
            {
                public:
                    VlanCos();
                    ~VlanCos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf cos; //type: uint32
                    YLeaf operation_; //type: Asr9KEfdOperationEnum



            }; // HardwareModuleEfd::Nodes::Node::VlanCos


            class MplsExp : public Entity
            {
                public:
                    MplsExp();
                    ~MplsExp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf exp; //type: uint32
                    YLeaf operation_; //type: Asr9KEfdOperationEnum



            }; // HardwareModuleEfd::Nodes::Node::MplsExp


                std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::IpPrecedence> ip_precedence; // presence node
                std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::MplsExp> mpls_exp; // presence node
                std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::VlanCos> vlan_cos; // presence node


        }; // HardwareModuleEfd::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node> > node;


    }; // HardwareModuleEfd::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes> nodes;


}; // HardwareModuleEfd


class Asr9KEfdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf only_outer_encap;
        static const Enum::YLeaf include_inner_encap;

};

class Asr9KEfdOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf less_than;
        static const Enum::YLeaf greater_than_or_equal;

};

class PrmTcamProfileEnum : public Enum
{
    public:
        static const Enum::YLeaf profile0;
        static const Enum::YLeaf profile1;
        static const Enum::YLeaf profile2;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_PRM_CFG_ */

