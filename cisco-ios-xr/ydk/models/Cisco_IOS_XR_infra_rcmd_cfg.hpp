#ifndef _CISCO_IOS_XR_INFRA_RCMD_CFG_
#define _CISCO_IOS_XR_INFRA_RCMD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_cfg {

class RouterConvergence : public Entity
{
    public:
        RouterConvergence();
        ~RouterConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf event_buffer_size; //type: uint32
        YLeaf prefix_monitor_limit; //type: uint32
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf max_events_stored; //type: uint32
        YLeaf monitoring_interval; //type: uint32

    class Protocols : public Entity
    {
        public:
            Protocols();
            ~Protocols();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Protocol : public Entity
        {
            public:
                Protocol();
                ~Protocol();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf protocol_name; //type: ProtocolNameEnum
                YLeaf enable; //type: empty

            class Priorities : public Entity
            {
                public:
                    Priorities();
                    ~Priorities();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Priority : public Entity
                {
                    public:
                        Priority();
                        ~Priority();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf rcmd_priority; //type: RcmdPriorityEnum
                        YLeaf threshold; //type: int32
                        YLeaf leaf_networks; //type: uint32
                        YLeaf disable; //type: empty
                        YLeaf enable; //type: empty
                        YLeaf frr_threshold; //type: uint32



                }; // RouterConvergence::Protocols::Protocol::Priorities::Priority


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol::Priorities::Priority> > priority;


            }; // RouterConvergence::Protocols::Protocol::Priorities


                std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol::Priorities> priorities;


        }; // RouterConvergence::Protocols::Protocol


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol> > protocol;


    }; // RouterConvergence::Protocols


    class StorageLocation : public Entity
    {
        public:
            StorageLocation();
            ~StorageLocation();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf diagnostics; //type: string
            YLeaf diagnostics_size; //type: uint32
            YLeaf reports_size; //type: uint32
            YLeaf reports; //type: string



    }; // RouterConvergence::StorageLocation


    class MplsLdp : public Entity
    {
        public:
            MplsLdp();
            ~MplsLdp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RemoteLfa : public Entity
        {
            public:
                RemoteLfa();
                ~RemoteLfa();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf threshold; //type: uint32



        }; // RouterConvergence::MplsLdp::RemoteLfa


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp::RemoteLfa> remote_lfa; // presence node


    }; // RouterConvergence::MplsLdp


    class CollectDiagnostics : public Entity
    {
        public:
            CollectDiagnostics();
            ~CollectDiagnostics();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class CollectDiagnostic : public Entity
        {
            public:
                CollectDiagnostic();
                ~CollectDiagnostic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string
                YLeaf enable; //type: empty



        }; // RouterConvergence::CollectDiagnostics::CollectDiagnostic


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::CollectDiagnostics::CollectDiagnostic> > collect_diagnostic;


    }; // RouterConvergence::CollectDiagnostics


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
                YLeaf disable; //type: empty
                YLeaf enable; //type: empty



        }; // RouterConvergence::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Nodes::Node> > node;


    }; // RouterConvergence::Nodes


        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::CollectDiagnostics> collect_diagnostics;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp> mpls_ldp; // presence node
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols> protocols;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::StorageLocation> storage_location; // presence node


}; // RouterConvergence


class RcmdPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class ProtocolNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf isis;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_CFG_ */

