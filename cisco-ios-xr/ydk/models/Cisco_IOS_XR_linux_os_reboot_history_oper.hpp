#ifndef _CISCO_IOS_XR_LINUX_OS_REBOOT_HISTORY_OPER_
#define _CISCO_IOS_XR_LINUX_OS_REBOOT_HISTORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_linux_os_reboot_history_oper {

class RebootHistory : public Entity
{
    public:
        RebootHistory();
        ~RebootHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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

        class RebootHistory_ : public Entity
        {
            public:
                RebootHistory_();
                ~RebootHistory_();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf no; //type: uint32
                YLeaf time; //type: string
                YLeaf cause_code; //type: uint32
                YLeaf reason; //type: string



        }; // RebootHistory::Node::RebootHistory_


            std::vector<std::unique_ptr<Cisco_IOS_XR_linux_os_reboot_history_oper::RebootHistory::Node::RebootHistory_> > reboot_history;


    }; // RebootHistory::Node


        std::vector<std::unique_ptr<Cisco_IOS_XR_linux_os_reboot_history_oper::RebootHistory::Node> > node;


}; // RebootHistory



}
}

#endif /* _CISCO_IOS_XR_LINUX_OS_REBOOT_HISTORY_OPER_ */

