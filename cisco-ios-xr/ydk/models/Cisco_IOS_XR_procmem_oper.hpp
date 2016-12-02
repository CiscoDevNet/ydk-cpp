#ifndef _CISCO_IOS_XR_PROCMEM_OPER_
#define _CISCO_IOS_XR_PROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_procmem_oper {

class ProcessesMemory : public Entity
{
    public:
        ProcessesMemory();
        ~ProcessesMemory();

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


            class ProcessIds : public Entity
            {
                public:
                    ProcessIds();
                    ~ProcessIds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ProcessId : public Entity
                {
                    public:
                        ProcessId();
                        ~ProcessId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value process_id; //type: int32
                        Value name; //type: string
                        Value jid; //type: uint32
                        Value pid; //type: uint32
                        Value text_seg_size; //type: uint32
                        Value data_seg_size; //type: uint32
                        Value stack_seg_size; //type: uint32
                        Value malloc_size; //type: uint32




                }; // ProcessesMemory::Nodes::Node::ProcessIds::ProcessId


                    std::vector<std::unique_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds::ProcessId> > process_id;


            }; // ProcessesMemory::Nodes::Node::ProcessIds


                std::unique_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node::ProcessIds> process_ids;


        }; // ProcessesMemory::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes::Node> > node;


    }; // ProcessesMemory::Nodes


        std::unique_ptr<Cisco_IOS_XR_procmem_oper::ProcessesMemory::Nodes> nodes;


}; // ProcessesMemory



}
}

#endif /* _CISCO_IOS_XR_PROCMEM_OPER_ */

