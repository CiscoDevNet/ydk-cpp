#ifndef _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_
#define _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_nto_misc_shprocmem_oper {

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


                YLeaf node_name; //type: string

            class JobIds : public Entity
            {
                public:
                    JobIds();
                    ~JobIds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class JobId : public Entity
                {
                    public:
                        JobId();
                        ~JobId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf job_id; //type: int32
                        YLeaf name; //type: string
                        YLeaf jid; //type: uint32
                        YLeaf text_seg_size; //type: uint32
                        YLeaf data_seg_size; //type: uint32
                        YLeaf stack_seg_size; //type: uint32
                        YLeaf malloc_size; //type: uint32



                }; // ProcessesMemory::Nodes::Node::JobIds::JobId


                    std::vector<std::unique_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds::JobId> > job_id;


            }; // ProcessesMemory::Nodes::Node::JobIds


                std::unique_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node::JobIds> job_ids;


        }; // ProcessesMemory::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes::Node> > node;


    }; // ProcessesMemory::Nodes


        std::unique_ptr<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory::Nodes> nodes;


}; // ProcessesMemory



}
}

#endif /* _CISCO_IOS_XR_NTO_MISC_SHPROCMEM_OPER_ */

