#ifndef _CISCO_IOS_XR_NTO_MISC_OPER_
#define _CISCO_IOS_XR_NTO_MISC_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_nto_misc_oper {

class MemorySummary : public Entity
{
    public:
        MemorySummary();
        ~MemorySummary();

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

            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf page_size; //type: uint32
                    YLeaf ram_memory; //type: uint64
                    YLeaf free_physical_memory; //type: uint64
                    YLeaf system_ram_memory; //type: uint64
                    YLeaf free_application_memory; //type: uint64
                    YLeaf image_memory; //type: uint64
                    YLeaf boot_ram_size; //type: uint64
                    YLeaf reserved_memory; //type: uint64
                    YLeaf io_memory; //type: uint64
                    YLeaf flash_system; //type: uint64



            }; // MemorySummary::Nodes::Node::Summary


            class Detail : public Entity
            {
                public:
                    Detail();
                    ~Detail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf page_size; //type: uint32
                    YLeaf ram_memory; //type: uint64
                    YLeaf free_physical_memory; //type: uint64
                    YLeaf private_physical_memory; //type: uint64
                    YLeaf system_ram_memory; //type: uint64
                    YLeaf free_application_memory; //type: uint64
                    YLeaf image_memory; //type: uint64
                    YLeaf boot_ram_size; //type: uint64
                    YLeaf reserved_memory; //type: uint64
                    YLeaf io_memory; //type: uint64
                    YLeaf flash_system; //type: uint64
                    YLeaf total_shared_window; //type: uint64
                    YLeaf allocated_memory; //type: uint64
                    YLeaf program_text; //type: uint64
                    YLeaf program_data; //type: uint64
                    YLeaf program_stack; //type: uint64

                class SharedWindow : public Entity
                {
                    public:
                        SharedWindow();
                        ~SharedWindow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf shared_window; //type: string
                        YLeaf window_size; //type: uint64



                }; // MemorySummary::Nodes::Node::Detail::SharedWindow


                    std::vector<std::unique_ptr<Cisco_IOS_XR_nto_misc_oper::MemorySummary::Nodes::Node::Detail::SharedWindow> > shared_window;


            }; // MemorySummary::Nodes::Node::Detail


                std::unique_ptr<Cisco_IOS_XR_nto_misc_oper::MemorySummary::Nodes::Node::Detail> detail;
                std::unique_ptr<Cisco_IOS_XR_nto_misc_oper::MemorySummary::Nodes::Node::Summary> summary;


        }; // MemorySummary::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_nto_misc_oper::MemorySummary::Nodes::Node> > node;


    }; // MemorySummary::Nodes


        std::unique_ptr<Cisco_IOS_XR_nto_misc_oper::MemorySummary::Nodes> nodes;


}; // MemorySummary



}
}

#endif /* _CISCO_IOS_XR_NTO_MISC_OPER_ */

